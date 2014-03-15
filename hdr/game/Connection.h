/*
 * Connection.h
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#ifndef CONNECTION_H_
#define CONNECTION_H_

#include"Vector.h"
#include"Coordinate.h"
#include"Constants.h"

class Connection {
public:
	Connection(const Coordinate& erste, const Coordinate& zweite,
			bool Hindernis);
	virtual ~Connection();
	const Coordinate &first; //Summe der Komponenten kleiner als bei second zur Eindeutigkeit
	const Coordinate &second;
	const DIRECTION direction; //Differenz: second-first, also entweder (1,0) (0,1) oder (1,1)
	const bool hindernis;

	const Connection& operator=(const Connection&) const;
	void dump() const;
};

#endif /* CONNECTION_H_ */
