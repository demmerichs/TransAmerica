/*
 * Connection.h
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

//==============================
// include guard
#ifndef CONNECTION_H_
#define CONNECTION_H_
//==============================
// forward declared dependencies
class Coordinate;
//==============================
// included dependencies
#include "Constants.h"
//==============================
// the actual class
/** This class represents the connections on the board.
 * 	They have two pointers to Coordinates, which are the ends of the connection.
 */
class Connection {
	friend class Board;
private:
	Connection(const Connection&);
	Connection operator=(const Connection&);
	Connection(const Coordinate* erste, const Coordinate* zweite,
			bool Hindernis);
public:
	virtual ~Connection();
	const Coordinate* first; /**< This is the first end of the connection. It is always more north/west than the second end.*/
	const Coordinate* second; /**< This is the second end of the connection. It is always more south/east than the first end.*/
	const DIRECTION direction; /**< This is the direction of the connection. (see also Constants.h)*/
	const bool barrier; /**< This bool is true, if the connection is a bridge or tunnel.*/

	void dump() const; /**< This function dumps the values of the connection on the standard output stream.*/
};

#endif /* CONNECTION_H_ */
