/*
 * Pawn.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef PAWN_H_
#define PAWN_H_

class Coordinate;

#include "Vector.h"
#include "Constants.h"

class Pawn {
public:
	Pawn(PLAYERCOLOR colour, const Coordinate* pos);
	Pawn(const Pawn &copy) :
			position(copy.position), schienennetznummer(
					copy.schienennetznummer), spielerfarbe(copy.spielerfarbe) {
	}
	virtual ~Pawn();

	const Coordinate* position;
	short schienennetznummer;
	const PLAYERCOLOR spielerfarbe;

	operator Vector();
	operator const Coordinate*();
};

#endif /* PAWN_H_ */
