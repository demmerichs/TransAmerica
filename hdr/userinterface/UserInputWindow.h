/*
 * UserInputWindow.h
 *
 *  Created on: 11.03.2014
 *      Author: David
 */

//==============================
// include guard
#ifndef USERINPUTWINDOW_H_
#define USERINPUTWINDOW_H_
//==============================
// forward declared dependencies
class QPushButton;
class AI;
class State;
class City;
class Move;
class Coordinate;
//==============================
// included dependencies
#include <vector>
using std::vector;

#include "Window.h"
#include "../logger/SimulationLogger.h"
//==============================
// the actual class

class UserInputWindow: public Window {
Q_OBJECT
	friend class Human;
public:
    UserInputWindow(SimulationLogger* );
	virtual ~UserInputWindow();
private:
    SimulationLogger* simLogger;
	QPushButton* enterMove;
	Move getMoveFromUser(AI* player, State& currentState, const City** hand,
			vector<Move*> moveList);
	const Coordinate* getPawnFromUser(AI* player, State& currentState,
			const City** hand);
private slots:
    void showDataWidget();
};

#endif /* USERINPUTWINDOW_H_ */
