/*
 * Board.h
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

#ifndef BOARD_H_
#define BOARD_H_

//#include "Constants.h"
#include <fstream>
#include <iostream>
#include "Coordinate.h"
#include "City.h"
#include "Connection.h"
#include <cassert>

class Board {
public:
	Board();
	virtual ~Board();

	const short anzahlStaedte;
    City* const * const Stadtliste;
	const Coordinate* const * const * const Gitter;
	const Connection* const * const * const * const Kanten;

	Coordinate*** gitterAnlegen() const;	//konstruiert Gitter
    City** stadtlisteAnlegen() const;//konstruiert Stadtliste TODO bei 2-3 Spielern direkt aussortieren
	Connection**** kantenAnlegen() const;	//konstruiert Kanten/Verbindungen
	void Ausgabe() const;	//Ausgabe des Bretts
	//Ausgabe des Zustandes TODO muss verlegt werden in State
    City* const durchsucheListe(short xkoo, short ykoo) const;//findet Stadt an entsprechender Coordinate
    City* getStadt(short farbe, short nr) const;
};

#endif /* BOARD_H_ */
