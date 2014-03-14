/*
 * ShowSimulationWindow.cpp
 *
 *  Created on: 11.03.2014
 *      Author: David
 */

#include "ShowSimulationWindow.h"
#include "../../hdr/logger/SimulationLogger.h"
#include "../../hdr/logger/GameLogger.h"
#include "../../hdr/logger/RoundLogger.h"
#include "../../hdr/userinterface/DynamicState.h"
#include "../../hdr/userinterface/Spielbrett.h"

ShowSimulationWindow::ShowSimulationWindow(SimulationLogger* simulationp) :
		Window(simulationp->getBoard()), simulationp(simulationp) {
	gameSpinBox = new QSpinBox;
	roundSpinBox = new QSpinBox;
	moveSpinBox = new QSpinBox;
    createProgressBar();
    fillTabWidget();
    gameSpinBox->setWrapping(false);
    gameSpinBox->setSuffix(tr(". Spiel"));
	gameSpinBox->setSuffix(tr(". Spiel"));
	roundSpinBox->setWrapping(false);
	roundSpinBox->setSuffix(tr(". Runde"));
	moveSpinBox->setWrapping(false);
	moveSpinBox->setSuffix(tr(". Zug"));
	toolLayout->addRow(tr("Geladenes Spiel:"), gameSpinBox);
	toolLayout->addRow(tr("Geladene Runde: "), roundSpinBox);
	toolLayout->addRow(tr("Geladener Zug:  "), moveSpinBox);
    toolLayout->addWidget(simulationProgress);

    mainLayout->removeWidget(spielbrett);
    mainLayout->addWidget(tabWidget,0,0);
	connect(gameSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(gameSpinChanged(int)));
	connect(roundSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(roundSpinChanged(int)));
	connect(moveSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(moveSpinChanged(int)));
	gameCounter = 1;
	roundCounter = 1;
	moveCounter = 0;
	if (simulationp)
		updateSpinBoxes();
}

ShowSimulationWindow::~ShowSimulationWindow() {
	// TODO Auto-generated destructor stub
}

void ShowSimulationWindow::setZp() {
	if (simulationp) {
		if (aZp)
			delete aZp;
		aZp = new DynamicState(
				simulationp->calculateDynamicState(gameCounter - 1,
						roundCounter - 1, moveCounter));
	}
	spielbrett->dynamicState = aZp;
	spielbrett->board = &aZp->board;
	if (aZp->lastMove)
		spielbrett->setHand(
				simulationp->getHandOfPlayer(aZp->lastMove->getSpielerfarbe(),
						gameCounter - 1, roundCounter - 1));
	else
		spielbrett->setHand(0);
    if(simulationp) spielbrett->setAIpoints(
                simulationp->getPointsEndOfRound(gameCounter -1, roundCounter -2));
    else spielbrett->setAIpoints(Counter(13));
    spielbrett->update();
}

/**
 Slot-Implementationen
 */

bool ShowSimulationWindow::setGameCounter(int i) {
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

bool ShowSimulationWindow::setRoundCounter(int i) {
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

bool ShowSimulationWindow::setMoveCounter(int i) {
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

void ShowSimulationWindow::gameSpinChanged(int i) {
	setMoveCounter(0);
	setRoundCounter(1);
	setGameCounter(i);
	setZp();
}

void ShowSimulationWindow::roundSpinChanged(int i) {
	setMoveCounter(0);
	setRoundCounter(i);
	setZp();
}

void ShowSimulationWindow::moveSpinChanged(int i) {
	setMoveCounter(i);
	setZp();
}

void ShowSimulationWindow::updateSpinBoxes() {
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
void ShowSimulationWindow::createProgressBar(){
    simulationProgress = new QProgressBar;
    simulationProgress->setRange(0, 10000);
    simulationProgress->setValue(0);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(advanceProgressBar()));
    timer->start(1000);
}
void ShowSimulationWindow::advanceProgressBar(){
    int curVal = simulationProgress->value();
    int maxVal = simulationProgress->maximum();
    simulationProgress->setValue(curVal + (maxVal - curVal) / 100);
}
void ShowSimulationWindow::showDataWidget(){
    tabWidget->setCurrentWidget(dataWidget);
}
void ShowSimulationWindow::showSpielbrett(){
    tabWidget->setCurrentWidget(spielbrett);
}

void ShowSimulationWindow::fillTabWidget(){
    dataWidget = new DataWidget();
    tabWidget->addTab(dataWidget, "Data & Statistics");

}
