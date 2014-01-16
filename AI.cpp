/*
 * AI.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "AI.h"

AI::AI(short farb): spielerfarbe(farb){
	handkarten=new const City*[NUMBER_CITYCOLOURS];
	programmierer="";
}

AI::~AI() {
	for(int i=0;i<NUMBER_CITYCOLOURS;i++)
		delete handkarten[i];
	delete[] handkarten;
}
