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
#include <cstdlib>
//==============================
// the actual code
set<PLAYERCOLOR> AI::participatingPlayerColours;

AI::AI(PLAYERCOLOR farb) :
		playercolor(farb) {
	if (AI::participatingPlayerColours.count(farb) >= 1) {
		cout << "Two players have the same colour!" << endl;
        std::exit(0);
	}
	AI::participatingPlayerColours.insert(farb);
	hand = new const City*[NUMBER_CITYCOLOURS];
	owner = "";
	AIname = "";
}

AI::~AI() {
	delete[] hand;
}
