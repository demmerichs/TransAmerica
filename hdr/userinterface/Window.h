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
class DynamicState;
class SimulationLogger;
class Move;
class Spielbrett;
class Board;
//==============================
// included dependencies
#include <QWidget>
#include <iostream>
#include <QtGui>

//#include "../../game/header/State.h"
//#include "../../logger/header/SimulationLogger.h"
//==============================
// the actual class
class Window: public QWidget {
Q_OBJECT
	friend class Spielbrett;
public:
	Window(const Board& board);
	~Window();
protected:
	DynamicState* aZp;
	Spielbrett* spielbrett;
	QFormLayout* toolLayout;
	/**
	 diverse Labels
	 diverse Combo-/Spin-boxen
	 */
	QLabel* toolBoxLabel;
	QPushButton* newGameButton;
	QCheckBox* showTownsCheckBox;
};

#endif // WINDOW_H
