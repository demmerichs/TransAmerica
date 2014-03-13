/*
 * debuggerAI.cpp
 *
 *  Created on: 12.03.2014
 *      Author: David
 */

//==============================
// forward declared dependencies
//==============================
// included dependencies
#include "../../hdr/ai/debuggerAI.h"

#include "../../hdr/game/Constants.h"
#include "../../hdr/game/City.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/game/Pawn.h"
//==============================
// the actual code

debuggerAI::debuggerAI(PLAYERCOLOR playerColor) :
		AI(playerColor) {
	owner = "noOwner";
	AIname = "debuggerAI";
}

debuggerAI::~debuggerAI() {
}

Move debuggerAI::doMove(State &currentState, vector<Move*> moveList) {
}

const Coordinate* debuggerAI::setPawn(State &currentState) {
}

bool debuggerAI::countPoints(State& currentState,
		vector<Connection*>& returnPath) {
	return false;
}

void debuggerAI::gatherInformationEndOfRound(
		const RoundLogger* informationAboutGame) {
}
