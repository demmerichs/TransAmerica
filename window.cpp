#include <QtGui>

#include "window.h"
#include "spielbrett.h"
#include <iostream>

Window::Window(Game *game) :
		gamep(game) {
	//this->setZp(gamep->zustandsListe.get(0));
	this->zustandInitialized=false;
	town1 = new QLabel(tr("Portland"));
	town2 = new QLabel(tr("Sacramento"));
	town3 = new QLabel(tr("San Diego"));
	town4 = new QLabel(tr("El Paso"));
	town5 = new QLabel(tr("Jacksonville"));
	town6 = new QLabel(tr(""));

	player1 = new QLabel(tr("0"));
	player2 = new QLabel(tr("0"));

	toolBoxLabel = new QLabel(tr("ToolBox"));
	QFont font = toolBoxLabel->font();
	font.setBold(true);
	font.setUnderline(true);
	font.setPointSize(font.pointSize() * 1.4);

	toolBoxLabel->setFont(font);
	vektorSpinBox = new QSpinBox;
	showTownsCheckBox = new QCheckBox;
	vektorSpinBox->setRange(0, gamep->zustandsListe.size());
	vektorSpinBox->setWrapping(false);
	vektorSpinBox->setSuffix(tr(". Zustand"));
	counterLCD = new QLCDNumber;
	counterLCD->setDigitCount(4);
	counterLCD->display(9999);
	spielbrett = new Spielbrett(this);

	/**
	 Layout-Design
	 */
	QGridLayout* mainLayout = new QGridLayout;
	QFormLayout* toolLayout = new QFormLayout;
	QFormLayout* pointsLayout = new QFormLayout;
	mainLayout->setGeometry(QRect(0, 0, 1380, 784));
	mainLayout->addWidget(spielbrett, 0, 0, 12, 8);
	mainLayout->addWidget(town1, 11, 0, Qt::AlignBottom);
	mainLayout->addWidget(town2, 11, 1, Qt::AlignBottom);
	mainLayout->addWidget(town3, 11, 2, Qt::AlignBottom);
	mainLayout->addWidget(town4, 11, 3, Qt::AlignBottom);
	mainLayout->addWidget(town5, 11, 4, Qt::AlignBottom);
	mainLayout->addWidget(town6, 11, 5, Qt::AlignBottom);
	mainLayout->addWidget(counterLCD, 9, 0, Qt::AlignHCenter);
	mainLayout->addLayout(pointsLayout, 10, 0, 2, 1);
	mainLayout->addLayout(toolLayout, 0, 9, 8, 1);
	toolLayout->addRow(toolBoxLabel);
	toolLayout->addRow(tr("Geladener Zustand:"), vektorSpinBox);
	toolLayout->addRow(tr("Zeige Staedte:"), showTownsCheckBox);
	pointsLayout->addRow(tr("KI 1:"), player1);
	pointsLayout->addRow(tr("KI 2:"), player2);
	setLayout(mainLayout);

	/**
	 Connect-Implementationen
	 */
	setWindowTitle(tr("Transamerica - Das Spiel (Testversion 1.0)"));
	//connect(vektorSpinBox, SIGNAL(valueChanged(int)), spielbrett, SLOT(zustandChanged(int)));
	connect(vektorSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(setZustandscounter(int)));
	connect(showTownsCheckBox, SIGNAL(toggled(bool)), spielbrett,
			SLOT(drawCityChanged(bool)));
    connect(this, SIGNAL(requestZp(int)), counterLCD, SLOT(display(int)));
	//setStyleSheet(" background-color: brown");
}
/**
 Slot-Implementationen
 */
void Window::setZp(State *aktuellerZustand) {
	cout << "Aufruf von setZp" << endl;
	aZp = aktuellerZustand;
	zustandInitialized = true;
	spielbrett->update();
}
void Window::setZustandscounter(int i) {
	cout << i << endl;
	Zustandcounter = i;
	if (gamep != 0)
		setZp(gamep->zustandsListe.get(i));

}
void Window::setGamep(Game *game) {
	gamep = game;
	vektorSpinBox->setRange(0, gamep->zustandsListe.size());
}

//void Window::playAutomatically(){
//    for (int i=0; i<=100; i++) QTimer::singleShot(10, this , SLOT(setZustandcounter(int i)));
//}
