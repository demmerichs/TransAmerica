
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

/**
  This class handles the situation, when the user plays
  a game against the AIs.
  It is used to get along with changing visability
  of the provided information.
  */

class UserInputWindow: public Window {
Q_OBJECT
	friend class Human;
public:
    UserInputWindow(const Board *board );
	virtual ~UserInputWindow();
private:
    //reference to the simulation
    SimulationLogger* simLogger;

	QPushButton* enterMove;

	Move getMoveFromUser(AI* player, State& currentState, const City** hand,
			vector<Move*> moveList);
	const Coordinate* getPawnFromUser(AI* player, State& currentState,
			const City** hand);

public slots:
    //access basic functions
    void showDataWidget();
    void setSimLogger(SimulationLogger*);
};

#endif /* USERINPUTWINDOW_H_ */
