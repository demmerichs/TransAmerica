/*
 * Verbindung.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include "Verbindung.h"

Verbindung::Verbindung(const Coordinate &first, const Coordinate &second, bool hindernis) :
		first((first.x + first.y <= second.x + second.y) ? first : second), second(
				(first.x + first.y <= second.x + second.y) ? second : first), richtung(
				second - first), hindernis(hindernis) {
}

Verbindung::~Verbindung() {
	// TODO Auto-generated destructor stub
}

const Verbindung& Verbindung::operator=(const Verbindung& copy) const{
	return copy;
}
