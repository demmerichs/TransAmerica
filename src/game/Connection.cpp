/*
 * Connection.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include "../../hdr/game/Connection.h"

Connection::Connection(const Coordinate &first, const Coordinate &second,
		bool hindernis) :
		first((first.x + first.y <= second.x + second.y) ? first : second), second(
				(first.x + first.y <= second.x + second.y) ? second : first), richtung(
				second - first), hindernis(hindernis) {
}

Connection::~Connection() {
}

const Connection& Connection::operator=(const Connection& copy) const {
	return copy;
}
