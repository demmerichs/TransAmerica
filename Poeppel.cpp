/*
 * Poeppel.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "Poeppel.h"
#include "Konstant.h"

Poeppel::Poeppel(short farb, Vector pos) :
		spielerfarbe(farb), startposition(pos) {
	schienennetznummer = farb;
}

Poeppel::Poeppel() :
		schienennetznummer(KEINSCHIENENNETZ), spielerfarbe(NULL_FARBE), startposition(
				Vector(NULL_KOOWERT, NULL_KOOWERT)) {
}

Poeppel::~Poeppel() {
	// TODO Auto-generated destructor stub
}

