/*
 * DavidAI.cpp
 *
 *  Created on: 15.03.2014
 *      Author: David
 */

//==============================
// forward declared dependencies
//==============================
// included dependencies
#include "../../hdr/ai/DavidAI.h"

#include "../../hdr/game/Constants.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/game/Pawn.h"
//==============================
// the actual code

DavidAI::DavidAI(PLAYERCOLOR playerColor) :
		AI(playerColor) {
}

DavidAI::~DavidAI() {
}

Move DavidAI::doMove(State currentState, vector<Move*> moveList) {

}

const Coordinate* DavidAI::setPawn(State currentState) {
}

bool DavidAI::countPoints(State currentState,
		vector<const Connection*>& returnPath) {
}

void DavidAI::gatherInformationEndOfRound(
		const RoundLogger* informationAboutGame) {
}
