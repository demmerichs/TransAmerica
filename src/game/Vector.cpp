/*
 * Vector.cpp
 *
 *  Created on: 18.11.2013
 *      Author: David
 */

#include "../../hdr/game/Vector.h"
#include <cmath>
using std::abs;

Vector::Vector(short x, short y) :
		x(x), y(y) {
}

Vector::Vector(const Vector& copy) :
		x(copy.x), y(copy.y) {
}

Vector::~Vector() {
}

Vector Vector::operator-(const Vector rhs) const {
	return Vector(this->x - rhs.x, this->y - rhs.y);
}

Vector Vector::operator+(const Vector rhs) const {
	return Vector(this->x + rhs.x, this->y + rhs.y);
}

short Vector::distance() const {
	short Ruckgabe = abs(x);
	if (Ruckgabe <= abs(y))
		Ruckgabe = abs(y);
	if (Ruckgabe <= abs(x - y))
		Ruckgabe = abs(x - y);
	return Ruckgabe;
}

DIRECTION Vector::direction() const {
//zu jeder Coordinate: EAST=(1,0); SOUTH_WEST=(0,1); SOUTH_EAST=(1,1)
	if (x == 1) {
		if (y == 0)
			return EAST;
		else if (y == 1)
			return SOUTH_EAST;
	} else if (x == 0 && y == 1)
		return SOUTH_WEST;
	cout << "RichtungsWert hat keine Richtung uebergeben bekommen" << endl;
	return UNDEFINED;
}

Vector Vector::getDirectionVector(DIRECTION direction) {
	switch (direction) {
	case EAST:
		return Vector(1, 0);
	case SOUTH_WEST:
		return Vector(0, 1);
	case SOUTH_EAST:
		return Vector(1, 1);
	default:
		cout << "No valid directionvalue was passed." << endl;
		return Vector(0, 0);
	}
}

void Vector::dump() const {
	cout << x << " " << y << endl;
}
