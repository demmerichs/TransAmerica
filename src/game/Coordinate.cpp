/*
 * Coordinate.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include "../../hdr/game/Coordinate.h"

Coordinate::Coordinate(Vector place, const City* const ort) :
		Vector(place), vorOrt(ort) {
}

Coordinate::Coordinate(short x, short y) :
		Vector(x, y), vorOrt(0) {
}

Coordinate::Coordinate(short x, short y, const City* const ort) :
		Vector(x, y), vorOrt(ort) {
}

Coordinate::~Coordinate() {
}
