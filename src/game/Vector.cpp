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
//zu jeder Coordinate: 0=(1,0); 1=(0,1); 2=(1,1) s. DirectionValueOfVector
	short summe = x * 2 + y;
	switch (summe) {
	case 1:
		return SOUTH_WEST;
	case 2:
		return EAST;
	case 3:
		return SOUTH_EAST;
	default:
		cout << "RichtungsWert hat keine Richtung uebergeben bekommen" << endl;
		return UNDEFINED;
	}
}
