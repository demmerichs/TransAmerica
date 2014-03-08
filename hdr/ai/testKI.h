/*
 * testKI.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

//==============================
// include guards
#ifndef TESTKI_H_
#define TESTKI_H_
//==============================
// forward declared dependencies
class Move;
class State;
class Vector;
//==============================
// included dependencies
#include <cmath>

#include "../game/AI.h"
//#include"../game/header/Move.h"
//#include"../game/header/State.h"
//#include "../game/header/Vector.h"
#include "../game/Constants.h"
//==============================
// the actual class
class testKI: public AI {
public:
	testKI(PLAYERCOLOR farbe);
	virtual ~testKI();
	Move doMove(State &aktuell);
	Vector setPawn(State &aktuell);
	bool countPoints(State&, std::vector<Connection*>) {
		return false;
	}
	void gatherInformationEndOfRound(const RoundLogger*) {
	}
	Vector getNaechsterPunktZu(Vector, State) const;

	static short sign(short);
};

#endif /* TESTKI_H_ */
