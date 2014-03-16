/*
 * NB_SimpleAI.cpp
 *
 *  Created on: 16.03.2014
 *      Author: nikbo
 */

//==============================
// forward declared dependencies
//==============================
// included dependencies
#include "../../hdr/ai/NB_SimpleAI.h"

#include "../../hdr/game/Constants.h"
#include "../../hdr/game/City.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/game/Pawn.h"
//==============================
// the actual code


class MyHelper{
public:
    MyHelper();
    ~MyHelper();
    Vector getNextPointTo(Vector b, State akt) const;
 };
MyHelper::MyHelper(){}
MyHelper::~MyHelper(){}

NBSimpleAI::NBSimpleAI(PLAYERCOLOR playerColor) :
        AI(playerColor) {
    owner = "Niklas";
    AIname = "Simple AI";
}

NBSimpleAI::~NBSimpleAI() { /*TODO adapt*/
}

Move NBSimpleAI::doMove(State &currentState, vector<Move*> moveList) { /*TODO adapt*/
}

const Coordinate* NBSimpleAI::setPawn(State &currentState) { /*TODO adapt*/
}

bool NBSimpleAI::countPoints(State& currentState,
        vector<Connection*>& returnPath) { /*TODO adapt*/
    return false;
}

void NBSimpleAI::gatherInformationEndOfRound(
        const RoundLogger* informationAboutGame) { /*TODO adapt*/
}

