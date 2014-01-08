/*
 * Zustand.h
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

#ifndef ZUSTAND_H_
#define ZUSTAND_H_

#include"Konstant.h"
#include"Brett.h"
#include"Poeppel.h"
#include"Verbindung.h"
#include<iostream>
#include<vector>
using std::cout;
using std::endl;

class Zustand {
	Poeppel* poeppelListe[MAX_SPIELER]; //hier soll an der Sortierung keiner rumpfuschen
	unsigned short find_min(Vector actual, unsigned short ** &index) const;
	void calculate_surround(Vector actual, unsigned short ** &index,
			vector<Vector> &new_changed) const;
public:
	Zustand(Brett &Spielbrett); //Startzustand
	Zustand(const Zustand&);
	virtual ~Zustand();

	short schienenNetzNummer[MAX_X][MAX_Y]; //jeder hat eine eigene SchienenNetzNummer, kann ueber Poeppel bestimmt werden
	bool schieneGelegt[MAX_X][MAX_Y][3]; //zu jeder Coordinate: 0=(1,0); 1=(0,1); 2=(1,1) s. RichtungsWert
	short anzahlPoeppel;
	const Brett &Spielbrett;

	Poeppel getPoeppel(const short spielerfarbe) const;
	bool schienenNetzNummerVon_Ist_(const Verbindung&,
			const short schienennr) const; //ueberprueft, ob die Verbindung an der schienennr anliegt
	short getSchienenNetzNummer(const Vector &koo) const;
	void setSchienenNetzNummer(const Coordinate &koo, const short nr);
	void setSchiene(const Verbindung &);
	static short RichtungsWert(const Vector&);
	void resetNr_ZuNr_(const short, const short);
	void schieneLegen(const Verbindung&);
	const Verbindung &getVerbindung(Vector a, Vector b) const;
	void addPoeppel(Poeppel insert);
	void resetAll();
	unsigned short** evaluateBoard(Vector target) const;
	unsigned short distance(Vector target,
			const vector<Vector> &possibleStarts) const;
	vector<Vector> pointsBelongingToRailwaySystem(short playercolour) const;
};

#endif /* ZUSTAND_H_ */
