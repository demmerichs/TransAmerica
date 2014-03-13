/*
 * Pawn.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "../../hdr/game/Pawn.h"

#include "../../hdr/game/Coordinate.h"

Pawn::Pawn(PLAYERCOLOR farb, const Coordinate* pos) :
		Vector(*pos), spielerfarbe(farb) {
	schienennetznummer = farb;
}

Pawn::~Pawn() {
}

