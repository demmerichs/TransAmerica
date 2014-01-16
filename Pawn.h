/*
 * Pawn.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef PAWN_H_
#define PAWN_H_

#include"Vector.h"

class Pawn {
public:
	Pawn(short colour, Vector pos);
	Pawn(const Pawn &copy) :
			schienennetznummer(copy.schienennetznummer), spielerfarbe(
					copy.spielerfarbe), startposition(copy.startposition) {
	}
	virtual ~Pawn();
	short schienennetznummer;
	const short spielerfarbe;
	const Vector startposition;
};

#endif /* PAWN_H_ */
