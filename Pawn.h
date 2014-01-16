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
	Pawn(PLAYERCOLOUR colour, Vector pos);
	Pawn(const Pawn &copy) :
			schienennetznummer(copy.schienennetznummer), spielerfarbe(
					copy.spielerfarbe), startposition(copy.startposition) {
	}
	virtual ~Pawn();
	short schienennetznummer;
	const PLAYERCOLOUR spielerfarbe;
	const Vector startposition;

	friend class Game;
	friend class State;
};

#endif /* PAWN_H_ */
