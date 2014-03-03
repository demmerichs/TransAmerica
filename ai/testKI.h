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
	testKI(PLAYERCOLOUR farbe);
	virtual ~testKI();
	Move zug(State &aktuell) const;
	Vector setPawn(State &aktuell) const;

	Vector getNaechsterPunktZu(Vector, State) const;

	static short sign(short);
};

#endif /* TESTKI_H_ */
