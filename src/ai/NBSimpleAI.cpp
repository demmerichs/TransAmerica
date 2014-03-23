/*
 * NBSimpleAI.cpp
 *
 *  Created on: 18.03.2014
 *      Author: NB
 */

//==============================
// forward declared dependencies
//==============================
// included dependencies
#include "../../hdr/ai/NBSimpleAI.h"

#include "../../hdr/game/Constants.h"
#include "../../hdr/game/City.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/game/Pawn.h"
//==============================
// the actual code

NBSimpleAI::NBSimpleAI(PLAYERCOLOR playerColor) : /*TODO adapt*/
		AI(playerColor) {
	owner = "noOwner";
	AIname = "NBSimpleAI";
}

NBSimpleAI::~NBSimpleAI() { /*TODO adapt*/
}

Move NBSimpleAI::doMove(State currentState, vector<Move*> moveList) { /*TODO adapt*/
}

const Coordinate* NBSimpleAI::setPawn(State currentState) { /*TODO adapt*/
}

bool NBSimpleAI::countPoints(State currentState,
		vector<const Connection*>& returnPath) { /*TODO adapt*/
}

void NBSimpleAI::gatherInformationEndOfRound(
		const RoundLogger* informationAboutGame) { /*TODO adapt*/
}
