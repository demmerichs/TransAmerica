/*
 * Pawn.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "Pawn.h"
#include "Konstant.h"

Pawn::Pawn(short farb, Vector pos) :
		spielerfarbe(farb), startposition(pos) {
	schienennetznummer = farb;
}

/*Pawn::Pawn() :
		schienennetznummer(KEINSCHIENENNETZ), spielerfarbe(NULL_FARBE), startposition(
				Vector(NULL_KOOWERT, NULL_KOOWERT)) {
}*/

Pawn::~Pawn() {
	// TODO Auto-generated destructor stub
}

