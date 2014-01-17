/*
 * Pawn.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "Pawn.h"

Pawn::Pawn(PLAYERCOLOUR farb, Vector pos) :
		Vector(pos), spielerfarbe(farb) {
	schienennetznummer = farb;
}

Pawn::~Pawn() {
}

