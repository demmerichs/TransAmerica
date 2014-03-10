/*
 * AI.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

//==============================
// forward declared dependencies
//==============================
// included dependencies
#include "../../hdr/game/AI.h"
//==============================
// the actual code
AI::AI(PLAYERCOLOR farb) :
		playerColor(farb) {
	hand = new const City*[NUMBER_CITYCOLORS];
	owner = "";
	AIname = "";
}

AI::~AI() {
	delete[] hand;
}
