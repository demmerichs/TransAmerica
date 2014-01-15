/*
 * Brett.h
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

#ifndef BRETT_H_
#define BRETT_H_

#include "Konstant.h"
#include <fstream>
#include <iostream>
#include "Koordinate.h"
#include "City.h"
#include "Verbindung.h"
#include <cassert>

class Brett {
public:
	Brett();
	virtual ~Brett();

	const short anzahlStaedte;
    City* const * const Stadtliste;
	const Coordinate* const * const * const Gitter;
	const Verbindung* const * const * const * const Kanten;

	Coordinate*** gitterAnlegen() const;	//konstruiert Gitter
    City** stadtlisteAnlegen() const;//konstruiert Stadtliste TODO bei 2-3 Spielern direkt aussortieren
	Verbindung**** kantenAnlegen() const;	//konstruiert Kanten/Verbindungen
	void Ausgabe() const;	//Ausgabe des Bretts
	void aktAusgabe(bool gelegteSchienen[MAX_X][MAX_Y][3]) const;//Ausgabe des Zustandes TODO muss verlegt werden in State
    City* const durchsucheListe(short xkoo, short ykoo) const;//findet Stadt an entsprechender Coordinate
    City* getStadt(short farbe, short nr) const;
};

#endif /* BRETT_H_ */
