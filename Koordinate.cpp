/*
 * Coordinate.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include "Koordinate.h"

Coordinate::Coordinate(short x, short y) :
		Vector(x, y), vorOrt(0){
}

Coordinate::Coordinate(short x, short y, const City* const ort) :
		Vector(x, y), vorOrt(ort){
}

Coordinate::~Coordinate() {

}
