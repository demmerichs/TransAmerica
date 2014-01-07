/*
 * Zustand.cpp
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

#include "Zustand.h"

Zustand::Zustand(Brett &board) :
		anzahlPoeppel(0), Spielbrett(board) {
	for (int i = 0; i < MAX_SPIELER; i++)
		poeppelListe[i] = new Poeppel;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++) {
			schienenNetzNummer[i][j] = KEINSCHIENENNETZ;
			for (int k = 0; k < 3; k++)
				schieneGelegt[i][j][k] = false;
		}
}

Zustand::Zustand(const Zustand &copy) :
		Spielbrett(copy.Spielbrett) {
	anzahlPoeppel = copy.anzahlPoeppel;
	for (int i = 0; i < MAX_SPIELER; i++)
		poeppelListe[i] = new Poeppel(*copy.poeppelListe[i]);
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			for (int k = 0; k < 3; k++)
				schieneGelegt[i][j][k] = copy.schieneGelegt[i][j][k];
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			schienenNetzNummer[i][j] = copy.schienenNetzNummer[i][j];
}

Zustand::~Zustand() {
	for(int i=0;i<MAX_SPIELER;i++)
		delete poeppelListe[i];
}

Poeppel Zustand::getPoeppel(const short spielerfarbe) const {
	return *poeppelListe[-spielerfarbe - 1];
}

bool Zustand::schienenNetzNummerVon_Ist_(const Verbindung &von,
		const short schienennr) const {
	bool ruckgabe = false;
	if (getSchienenNetzNummer(von.first) == schienennr)
		ruckgabe = ruckgabe || true;
	if (getSchienenNetzNummer(von.second) == schienennr)
		ruckgabe = ruckgabe || true;
	return ruckgabe;
}

short Zustand::getSchienenNetzNummer(const Vector &koo) const {
	return schienenNetzNummer[koo.x][koo.y];
}

void Zustand::setSchienenNetzNummer(const Coordinate &koo, const short nr) {
	schienenNetzNummer[koo.x][koo.y] = nr;
}

void Zustand::setSchiene(const Verbindung& input) {
	schieneGelegt[input.first.x][input.first.y][RichtungsWert(input.richtung)] =
			true;
}

short Zustand::RichtungsWert(const Vector & richtung) {
	//zu jeder Coordinate: 0=(1,0); 1=(0,1); 2=(1,1) s. RichtungsWert
	short summe = richtung.x * 2 + richtung.y;
	switch (summe) {
	case 1:
		return 1;
	case 2:
		return 0;
	case 3:
		return 2;
	default:
		cout << "RichtungsWert hat keine Richtung Ÿbergeben bekommen" << endl;
		return -1;
	}
}

void Zustand::resetNr_ZuNr_(const short von, const short zu) {
	for (int i = 0; i < MAX_SPIELER; i++)
		if (this->poeppelListe[i]->schienennetznummer == von)
			this->poeppelListe[i]->schienennetznummer = zu;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			if (this->schienenNetzNummer[i][j] == von)
				this->schienenNetzNummer[i][j] = zu;
}

void Zustand::schieneLegen(const Verbindung &sollGelegt) {
	setSchiene(sollGelegt);
	short nummerFirst = getSchienenNetzNummer(sollGelegt.first);
	short nummerSecond = getSchienenNetzNummer(sollGelegt.second);
	if (nummerFirst == KEINSCHIENENNETZ) {
		setSchienenNetzNummer(sollGelegt.first, nummerSecond);
		return;
	} else if (nummerSecond == KEINSCHIENENNETZ) {
		setSchienenNetzNummer(sollGelegt.second, nummerFirst);
		return;
	}
	if (nummerFirst == nummerSecond) {
		return;
	}
	if (nummerFirst < nummerSecond)
		resetNr_ZuNr_(nummerFirst, nummerSecond);
	else if (nummerSecond < nummerFirst)
		resetNr_ZuNr_(nummerSecond, nummerFirst);
	else
		cout << "Zustand::schieneLegen ist fehlerhaft" << endl;
//TODO Exceptions
}

const Verbindung &Zustand::getVerbindung(Vector a, Vector b) const {
	Vector eins = a;
	Vector zwei = b;
	if ((b - a).x < 0 || (b - a).y < 0) {
		eins = b;
		zwei = a;
	}
	const Verbindung &ruckgabe =
			*this->Spielbrett.Kanten[eins.x][eins.y][this->RichtungsWert(
					zwei - eins)];
	return ruckgabe;
}

void Zustand::addPoeppel(Poeppel insert) {
	this->anzahlPoeppel++;
	this->schienenNetzNummer[insert.startposition.x][insert.startposition.y] =
			insert.spielerfarbe;
	poeppelListe[-insert.spielerfarbe - 1] = new Poeppel(insert);
}

void Zustand::resetAll() {
	anzahlPoeppel = 0;
	for (int i = 0; i < MAX_SPIELER; i++)
		poeppelListe[i] = new Poeppel;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++) {
			schienenNetzNummer[i][j] = KEINSCHIENENNETZ;
			for (int k = 0; k < 3; k++)
				schieneGelegt[i][j][k] = false;
		}
}
