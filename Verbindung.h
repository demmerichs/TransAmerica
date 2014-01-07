/*
 * Verbindung.h
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#ifndef VERBINDUNG_H_
#define VERBINDUNG_H_

#include"Vektor.h"
#include"Koordinate.h"
#include"Konstant.h"

class Verbindung {
public:
	Verbindung(const Coordinate& erste, const Coordinate& zweite, bool Hindernis);
	virtual ~Verbindung();
	const Coordinate &first; //Summe der Komponenten kleiner als bei second zur Eindeutigkeit
	const Coordinate &second;
	const Vector richtung; //Differenz: second-first, also entweder (1,0) (0,1) oder (1,1)
	bool hindernis;//TODO spaeter wieder const

	const Verbindung& operator=(const Verbindung&) const;
};

#endif /* VERBINDUNG_H_ */
