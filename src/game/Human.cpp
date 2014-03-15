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
	// TODO Auto-generated constructor stub
}

Human::~Human() {
	// TODO Auto-generated destructor stub
}

Move Human::doMove(State& currentState, vector<Move*> moveList) {
	return userInput->getMoveFromUser(this, currentState, hand, moveList);
}

const Coordinate* Human::setPawn(State& currentState) {
	for (int i = 0; i < NUMBER_CITYCOLORS; i++) {
		if (hand[i]->cityColor == C_YELLOW)
			return hand[i];
	}
	cout << "Gelbe Stadt nicht gefunden in Handkarten!" << endl;
	return currentState.board.grid[10][6];
}

bool Human::countPoints(State&, vector<Connection*>&) {
	return false;
}

void Human::gatherInformationEndOfRound(const RoundLogger*) {
}
