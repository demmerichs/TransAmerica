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
//==============================
// included dependencies
#include <vector>
using std::vector;

#include "Window.h"

//==============================
// the actual class

class UserInputWindow: public Window {
	friend class Human;
public:
	UserInputWindow(const Board* board);
	virtual ~UserInputWindow();
private:
	QPushButton* enterMove;
	Move getMoveFromUser(AI* player, State& currentState, const City** hand,
			vector<Move*> moveList);
};

#endif /* USERINPUTWINDOW_H_ */
