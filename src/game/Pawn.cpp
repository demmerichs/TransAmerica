/*
 * Pawn.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "../../hdr/game/Pawn.h"

Pawn::Pawn(PLAYERCOLOR farb, Vector pos) :
		Vector(pos), spielerfarbe(farb) {
	schienennetznummer = farb;
}

Pawn::~Pawn() {
}

