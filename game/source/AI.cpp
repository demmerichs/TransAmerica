/*
 * AI.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "../header/AI.h"

AI::AI(PLAYERCOLOUR farb): spielerfarbe(farb){
	handkarten=new const City*[NUMBER_CITYCOLOURS];
	programmierer="";
}

AI::~AI() {
	delete[] handkarten;
}
