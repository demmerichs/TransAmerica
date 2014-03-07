/*
 * AI.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "../header/AI.h"

std::set<PLAYERCOLOUR> AI::participatingPlayerColours;

AI::AI(PLAYERCOLOUR farb) :
		spielerfarbe(farb) {
	if (AI::participatingPlayerColours.count(farb) >= 1) {
		std::cout << "Two players have the same colour!" << std::endl;
        //std::exit(0);
	}
	AI::participatingPlayerColours.insert(farb);
	handkarten = new const City*[NUMBER_CITYCOLOURS];
	programmierer = "";
	AIname = "";
}

AI::~AI() {
	delete[] handkarten;
}
