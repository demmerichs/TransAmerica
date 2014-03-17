/*
 * Human.cpp
 *
 *  Created on: 10.03.2014
 *      Author: David
 */

#include "../../hdr/game/Human.h"

#include "../../hdr/game/City.h"
#include "../../hdr/game/Board.h"
#include "UserInputWindow.h"

Human::Human(PLAYERCOLOR playerColor, UserInputWindow* userInput) :
		AI(playerColor), userInput(userInput) {
	AIname = "You";
	owner = "You";
}

Human::~Human() {
	// TODO Auto-generated destructor stub
}

Move Human::doMove(State& currentState, vector<Move*> moveList) {
	return userInput->getMoveFromUser(this, currentState, hand, moveList);
}

const Coordinate* Human::setPawn(State& currentState) {
	return userInput->getPawnFromUser(this, currentState, hand);
}

bool Human::countPoints(State&, vector<Connection*>&) {
	return false;
}

void Human::gatherInformationEndOfRound(const RoundLogger*) {
}
