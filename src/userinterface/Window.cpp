#include "../../hdr/userinterface/Window.h"
#include "../../hdr/userinterface/DynamicState.h"
#include "../../hdr/logger/SimulationLogger.h"
#include "../../hdr/logger/GameLogger.h"
#include "../../hdr/logger/RoundLogger.h"

Window::Window(SimulationLogger *game) :
		simulationp(game) {
	/**
	 Aukommentiert um Zusulassen, dass game = NULL
	 */
//	town1 = new QLabel(tr("Portland"));
//	town2 = new QLabel(tr("Sacramento"));
//	town3 = new QLabel(tr("San Diego"));
//	town4 = new QLabel(tr("El Paso"));
//	town5 = new QLabel(tr("Jacksonville"));
//	town6 = new QLabel(tr(""));

//	player1 = new QLabel(tr("0"));
//	player2 = new QLabel(tr("0"));

	toolBoxLabel = new QLabel(tr("ToolBox"));
	QFont font = toolBoxLabel->font();
	font.setBold(true);
	font.setUnderline(true);
	font.setPointSize(font.pointSize() * 1.4);

	toolBoxLabel->setFont(font);
	gameSpinBox = new QSpinBox;
	roundSpinBox = new QSpinBox;
	moveSpinBox = new QSpinBox;
	showTownsCheckBox = new QCheckBox;
	newGameButton = new QPushButton(tr("New Game"));
	enterMove = new QPushButton(tr("Enter Move!")); //TODO new window
	//gameSpinBox->setRange(1, simulationp->gameList.size());
	gameSpinBox->setWrapping(false);
	gameSpinBox->setSuffix(tr(". Spiel"));
	//roundSpinBox->setRange(1,
	//            simulationp->gameList[0]->roundList.size());
	//roundSpinBox->setRange(1, simulationp->gameList[0]->roundList.size());
	gameSpinBox->setSuffix(tr(". Spiel"));
	//roundSpinBox->setRange(1, simulationp->gameList[0]->roundList.size());
	roundSpinBox->setWrapping(false);
	roundSpinBox->setSuffix(tr(". Runde"));
	//moveSpinBox->setRange(0,
	//        simulationp->gameList[0]->roundList[0]->moveList.size());
	moveSpinBox->setWrapping(false);
	moveSpinBox->setSuffix(tr(". Zug"));
//	counterLCD = new QLCDNumber;
//	counterLCD->setDigitCount(2);
//	counterLCD->display(99);
	spielbrett = new Spielbrett(this);
	/**
	 Layout-Design
	 */
	QGridLayout* mainLayout = new QGridLayout;
	QFormLayout* toolLayout = new QFormLayout;
//	QFormLayout* pointsLayout = new QFormLayout;
//	mainLayout->setGeometry(QRect(0, 0, 1380, 784));
	mainLayout->addWidget(spielbrett, 0, 0, 12, 8);
//	mainLayout->addWidget(town1, 11, 0, Qt::AlignBottom);
//	mainLayout->addWidget(town2, 11, 1, Qt::AlignBottom);
//	mainLayout->addWidget(town3, 11, 2, Qt::AlignBottom);
//	mainLayout->addWidget(town4, 11, 3, Qt::AlignBottom);
//	mainLayout->addWidget(town5, 11, 4, Qt::AlignBottom);
//	mainLayout->addWidget(town6, 11, 5, Qt::AlignBottom);
//	mainLayout->addWidget(counterLCD, 9, 0, Qt::AlignHCenter);
//	mainLayout->addLayout(pointsLayout, 10, 0, 2, 1);
	mainLayout->addLayout(toolLayout, 0, 9, 8, 1);
	toolLayout->addRow(toolBoxLabel);
	toolLayout->addRow(tr("Geladenes Spiel:"), gameSpinBox);
	toolLayout->addRow(tr("Geladene Runde: "), roundSpinBox);
	toolLayout->addRow(tr("Geladener Zug:  "), moveSpinBox);
	toolLayout->addRow(tr("Zeige Staedte:"), showTownsCheckBox);
	toolLayout->addRow(newGameButton);
	toolLayout->addRow(enterMove);	//TODO own window
//	pointsLayout->addRow(tr("KI 1:"), player1);
//	pointsLayout->addRow(tr("KI 2:"), player2);
	setLayout(mainLayout);

	/**
	 Connect-Implementationen
	 */
	connect(gameSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(gameSpinChanged(int)));
	connect(roundSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(roundSpinChanged(int)));
	connect(moveSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(moveSpinChanged(int)));
	connect(showTownsCheckBox, SIGNAL(toggled(bool)), spielbrett,
			SLOT(drawCityChanged(bool)));
	//connect(this, SIGNAL(requestZp(int)), counterLCD, SLOT(display(int)));

	//setGameCounter(1);
	//setStyleSheet(" background-color: brown");
	gameCounter = 1;
	roundCounter = 1;
	moveCounter = 0;
	aZp = 0;
	if (simulationp)
		updateSpinBoxes();
	setZp();
}

Window::~Window() {
	delete spielbrett;
	delete simulationp;
	delete aZp;
//	delete town1;
//	delete town2;
//	delete town3;
//	delete town4;
//	delete town5;
//	delete town6;
//	delete player1;
//	delete player2;
	delete toolBoxLabel;
	delete newGameButton;
	delete moveSpinBox;
	delete roundSpinBox;
	delete gameSpinBox;
	delete showTownsCheckBox;
//	delete counterLCD;
}
/**
 Slot-Implementationen
 */
void Window::setZp() {
	if (simulationp != 0) {
		if (aZp != 0)
			delete aZp;
		aZp = new DynamicState(
				simulationp->calculateDynamicState(gameCounter - 1,
						roundCounter - 1, moveCounter));
	}
	spielbrett->update();
}

bool Window::setGameCounter(int i) {
	cout << "game" << endl;
	int newGameCounter;
	if (i == gameSpinBox->maximum())
		newGameCounter = i - 1;
	else if (i == gameSpinBox->minimum()) {
		newGameCounter = i + 1;
	} else
		newGameCounter = i;
	if (newGameCounter == gameCounter)
		return false;
	gameCounter = newGameCounter;
	updateSpinBoxes();
	return true;
}

bool Window::setRoundCounter(int i) {
	cout << "round" << endl;
	int newRoundCounter;
	if (i == roundSpinBox->maximum())
		if (setGameCounter(gameCounter + 1))
			newRoundCounter = roundSpinBox->minimum() + 1;
		else
			newRoundCounter = i - 1;
	else if (i == roundSpinBox->minimum()) {
		if (setGameCounter(gameCounter - 1))
			newRoundCounter = roundSpinBox->maximum() - 1;
		else
			newRoundCounter = i + 1;
	} else
		newRoundCounter = i;
	if (newRoundCounter == roundCounter)
		return false;
	roundCounter = newRoundCounter;
	updateSpinBoxes();
	return true;
}

bool Window::setMoveCounter(int i) {
	cout << "move" << endl;
	int newMoveCounter;
	if (i == moveSpinBox->maximum())
		if (setRoundCounter(roundCounter + 1))
			newMoveCounter = moveSpinBox->minimum() + 1;
		else
			newMoveCounter = i - 1;
	else if (i == moveSpinBox->minimum()) {
		if (setRoundCounter(roundCounter - 1))
			newMoveCounter = moveSpinBox->maximum() - 1;
		else
			newMoveCounter = i + 1;
	} else
		newMoveCounter = i;
	if (newMoveCounter == moveCounter) {
		updateSpinBoxes();
		return false;
	}
	moveCounter = newMoveCounter;
	updateSpinBoxes();
	return true;
}

void Window::gameSpinChanged(int i) {
	setMoveCounter(0);
	setRoundCounter(1);
	setGameCounter(i);
	setZp();
}

void Window::roundSpinChanged(int i) {
	setMoveCounter(0);
	setRoundCounter(i);
	setZp();
}

void Window::moveSpinChanged(int i) {
	setMoveCounter(i);
	setZp();
}

void Window::updateSpinBoxes() {
	gameSpinBox->blockSignals(true);
	roundSpinBox->blockSignals(true);
	moveSpinBox->blockSignals(true);
	gameSpinBox->setRange(0, simulationp->getGameList().size() + 1);
	if (1 <= gameCounter
			&& gameCounter <= (int) simulationp->getGameList().size()) {
		roundSpinBox->setRange(0,
				simulationp->getGameList()[gameCounter - 1]->getRoundList().size()
						+ 1);
		if (1 <= roundCounter
				&& roundCounter
						<= (int) simulationp->getGameList()[gameCounter - 1]->getRoundList().size())
			moveSpinBox->setRange(-1,
					simulationp->getGameList()[gameCounter - 1]->getRoundList()[roundCounter
							- 1]->getMoveList().size() + 1);
	}
	gameSpinBox->setValue(gameCounter);
	roundSpinBox->setValue(roundCounter);
	moveSpinBox->setValue(moveCounter);
	gameSpinBox->blockSignals(false);
	roundSpinBox->blockSignals(false);
	moveSpinBox->blockSignals(false);
}

Move Window::getMoveFromUser(vector<Move*> moveList) {
	//TODO own window for user input
	gameCounter = roundCounter = 0;
	aZp = new DynamicState(this->simulationp->getBoard());
	for (int i = 0; i < moveList.size(); i++)
		moveList[i]->execute(*aZp);
	if (moveList.size() > 0)
		aZp->lastMove = moveList[moveList.size() - 1];
	this->spielbrett->update();
	this->update();
	this->show();
	QEventLoop* pause = new QEventLoop;
	connect(enterMove, SIGNAL(clicked(bool)), pause, SLOT(quit()));
	pause->exec();
	const Connection* one = 0, *two = 0;
	int counter = 0;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			for (int k = 0; k < 3; k++)
				if (aZp->fromUserSelectedRails[i][j][k]) {
					counter++;
					if (counter == 1)
						one = aZp->board.edges[i][j][k];
					else
						two = aZp->board.edges[i][j][k];
				}
	return Move(P_YELLOW, one, two);
}
