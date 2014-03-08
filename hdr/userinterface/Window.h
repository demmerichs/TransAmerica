//==============================
// include guards
#ifndef WINDOW_H
#define WINDOW_H
//==============================
// forward declared dependencies
class QLabel;
class QSpinBox;
class QCheckBox;
class QLCDNumber;
class State;
class SimulationLogger;
//==============================
// included dependencies
#include <QWidget>
#include <iostream>
#include <QtGui>

#include "Spielbrett.h"
//#include "../../game/header/State.h"
//#include "../../logger/header/SimulationLogger.h"
//==============================
// the actual class
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
	int gameCounter;
	int roundCounter;
	int moveCounter;
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
	QSpinBox* moveSpinBox;
	QSpinBox* roundSpinBox;
	QSpinBox* gameSpinBox;
	QCheckBox* showTownsCheckBox;
	QLCDNumber* counterLCD;
	//void playAutomatically
	void setZp();
	void updateSpinBoxes();
	bool setGameCounter(int i);
	bool setRoundCounter(int i);
	bool setMoveCounter(int i);
private slots:
	void gameSpinChanged(int i);
	void roundSpinChanged(int i);
	void moveSpinChanged(int i);
};

#endif // WINDOW_H
