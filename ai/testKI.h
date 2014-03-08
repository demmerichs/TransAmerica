/*
 * testKI.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef TESTKI_H_
#define TESTKI_H_

#include "../game/header/AI.h"
#include"../game/header/Move.h"
#include"../game/header/State.h"
#include "../game/header/Vector.h"
#include "../game/header/Constants.h"
#include <cmath>

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
