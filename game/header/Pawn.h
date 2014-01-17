/*
 * Pawn.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef PAWN_H_
#define PAWN_H_

#include"Vector.h"
#include "Constants.h"

class Pawn: public Vector {
public:
	Pawn(PLAYERCOLOUR colour, Vector pos);
	Pawn(const Pawn &copy) :
			Vector(copy), schienennetznummer(copy.schienennetznummer), spielerfarbe(
					copy.spielerfarbe) {
	}
	virtual ~Pawn();
	short schienennetznummer;
	const PLAYERCOLOUR spielerfarbe;
};

#endif /* PAWN_H_ */
