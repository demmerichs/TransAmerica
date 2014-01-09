/*
 * testKI.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef TESTKI_H_
#define TESTKI_H_

#include "KIspieler.h"
#include"Move.h"
#include"Zustand.h"

class testKI: public KIspieler {
public:
	testKI(short farbe);
	virtual ~testKI();
	Move zug(State &aktuell) const;
	Vector poeppelSetzen(State &aktuell) const;

	Vector getNaechsterPunktZu(Vector,State) const;

	static short sign(short);
};

#endif /* TESTKI_H_ */
