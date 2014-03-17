/*
 * Pawn.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "../../hdr/game/Pawn.h"

#include "../../hdr/game/Coordinate.h"

Pawn::Pawn(PLAYERCOLOR farb, const Coordinate* pos) :
		position(pos), spielerfarbe(farb) {
	schienennetznummer = farb;
}

Pawn::~Pawn() {
}

Pawn::operator Vector() {
	return Vector(*position);
}

Pawn::operator const Coordinate*() {
	return position;
}
