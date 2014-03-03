/*
 * Vector.cpp
 *
 *  Created on: 18.11.2013
 *      Author: David
 */

#include "../header/Vector.h"

using namespace std;

/*Vector::Vector() :
		x(-1), y(-1) {
}*/

Vector::Vector(short x, short y): x(x), y(y) {
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