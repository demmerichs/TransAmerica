/*
 * Human.cpp
 *
 *  Created on: 10.03.2014
 *      Author: David
 */

#include "../../hdr/game/Human.h"
#include "../../hdr/userinterface/Uiexec.h"
#include "../../hdr/userinterface/Window.h"

Human::Human(PLAYERCOLOR playerColor, UIEXEC* uiexec) :
		AI(playerColor), uiexec(uiexec) {
	// TODO Auto-generated constructor stub
}

Human::~Human() {
	// TODO Auto-generated destructor stub
}

Move Human::doMove(State& currentState, vector<Move*> moveList) {
	return uiexec->wp->getMoveFromUser(moveList);
}

Vector Human::setPawn(State&) {
	for (int i = 0; i < NUMBER_CITYCOLORS; i++) {
		if (hand[i]->cityColor == C_YELLOW)
			return *hand[i];
	}
	cout << "Gelbe Stadt nicht gefunden in Handkarten!" << endl;
	return Vector(10, 6);
}

bool Human::countPoints(State&, vector<Connection*>) {
	return false;
}

void Human::gatherInformationEndOfRound(const RoundLogger*) {
}
