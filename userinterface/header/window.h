#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "../../game/header/State.h"
#include "spielbrett.h"
#include "../../logger/header/SimulationLogger.h"
#include <iostream>
#include <QtGui>

class QLabel;
class QSpinBox;
class QCheckBox;
class QLCDNumber;

class Spielbrett;

class Window: public QWidget {
Q_OBJECT

	friend class Spielbrett;
	friend class UIEXEC;
	friend class MainWindow;
public:
	Window(SimulationLogger* game = 0);
	void setsimulationp(SimulationLogger* game);
private:
	State* aZp;
	SimulationLogger* simulationp;
	Spielbrett* spielbrett;
	int Zustandcounter;
	bool zustandInitialized;
	/**
	 diverse Labels
	 diverse Combo-/Spin-boxen
	 */
	QLabel* town1;
	QLabel* town2;
	QLabel* town3;
	QLabel* town4;
	QLabel* town5;
	QLabel* town6;
	QLabel* player1;
	QLabel* player2;
	QLabel* player3;
	QLabel* player4;
	QLabel* player5;
	QLabel* player6;
	QLabel* toolBoxLabel;
	QPushButton* newGameButton;
	QSpinBox* vektorSpinBox;
	QCheckBox* showTownsCheckBox;
	QLCDNumber* counterLCD;
	//void playAutomatically
	void setZp(State*);
private slots:
	void setZustandscounter(int i);
};

#endif // WINDOW_H
