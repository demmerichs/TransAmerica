/*
 * Connection.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include "../../hdr/game/Connection.h"
#include "../../hdr/game/Coordinate.h"

Connection::Connection(const Coordinate *first, const Coordinate *second,
		bool hindernis) :
		first((first->x + first->y <= second->x + second->y) ? first : second), second(
				(first->x + first->y <= second->x + second->y) ?
						second : first), direction(
				(*second - *first).direction()), barrier(hindernis) {
}

Connection::~Connection() {
}

void Connection::dump() const {
	cout << "First coordinate of connection is:" << endl;
	first->dump();
	cout << "Second coordinate of connection is:" << endl;
	second->dump();
}
