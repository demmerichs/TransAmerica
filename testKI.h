/*
 * testKI.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef TESTKI_H_
#define TESTKI_H_

#include "AI.h"
#include"Move.h"
#include"State.h"

class testKI: public AI {
public:
	testKI(short farbe);
	virtual ~testKI();
	Move zug(State &aktuell) const;
	Vector poeppelSetzen(State &aktuell) const;

	Vector getNaechsterPunktZu(Vector,State) const;

	static short sign(short);
};

#endif /* TESTKI_H_ */
