/*
 * Poeppel.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef POEPPEL_H_
#define POEPPEL_H_

#include"Vector.h"

class Poeppel {
public:
	Poeppel();
	Poeppel(short farb, Vector pos);
	Poeppel(const Poeppel &copy) :
			schienennetznummer(copy.schienennetznummer), spielerfarbe(
					copy.spielerfarbe), startposition(copy.startposition) {
	}
	virtual ~Poeppel();
	short schienennetznummer;
	const short spielerfarbe;
	const Vector startposition;
};

#endif /* POEPPEL_H_ */
