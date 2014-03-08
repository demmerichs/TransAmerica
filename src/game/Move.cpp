/*
 * Move.cpp
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#include "../../hdr/game/Move.h"

/*Zug::Zug(short playercolor) :
 gueltigkeit(false), gueltigkeitUEberprueft(false), richtigBelegt(true), playercolor(
 playercolor), anzahlSchienen(0) {
 }

 Zug::Zug(short playercolor, const Connection &belegt) :
 gueltigkeit(false), gueltigkeitUEberprueft(false), richtigBelegt(true), playercolor(
 playercolor), anzahlSchienen(1) {
 Belegt[0] = &belegt;
 Belegt[1] = 0;
 }*/

Move::Move(PLAYERCOLOR spielerfarbe, const Connection* belegt1,
		const Connection* belegt2) :
		gueltigkeit(false), gueltigkeitUEberprueft(false), richtigBelegt(true), spielerfarbe(
				spielerfarbe), anzahlSchienen(2) {
	Belegt[0] = belegt1;
	Belegt[1] = belegt2;
	if (belegt1 == 0) {
		Belegt[0] = Belegt[1];
		Belegt[1] = 0;
		anzahlSchienen--;
	}
	if (belegt2 == 0)
		anzahlSchienen--;
}

Move::~Move() {
}

bool Move::valid(State aktZu, PLAYERCOLOR spielerfarb) {
	gueltigkeitUEberprueft = true;
	//checken, ob der Spieler richtige Farbe verwendet hat
	if (spielerfarb != this->spielerfarbe) {
		cout << "Spieler hat falsche Farbe initialisiert" << endl;
		gueltigkeit = false;
		return false;
	}
	//checken, ob min. eine Schiene gelegt wurde
	if (anzahlSchienen == 0) {
		cout << "Es wurde ein Zug mit keiner Schiene initialisiert" << endl;
		gueltigkeit = false;
		return false;
	}
	//erste Schiene checken
	//schienennr von Spieler
	short schienennr = aktZu.getPawn(spielerfarb).schienennetznummer;
	//prŸfe, ob Connection an schienennr anliegt
	if (aktZu.isRailwayNumberOfConnectionEqualsNumber(*Belegt[0], schienennr)) {
		richtigBelegt = true;
		//wenn ja, schiene legen, neuer State, also neue schienennr und dann zweite schiene analog
		if (anzahlSchienen == 1) {
			gueltigkeit = true;
		} else {
			aktZu.setRail(*Belegt[0]);
			schienennr = aktZu.getPawn(spielerfarbe).schienennetznummer;
			if (aktZu.isRailwayNumberOfConnectionEqualsNumber(*Belegt[1],
					schienennr)) {
				gueltigkeit = true;
			} else {
				gueltigkeit = false;
			}
		}
	} else if (anzahlSchienen == 2
			&& aktZu.isRailwayNumberOfConnectionEqualsNumber(*Belegt[1],
					schienennr)) {
		richtigBelegt = false;
		//wenn ja, schiene legen, neuer State, also neue schienennr und dann zweite schiene analog
		aktZu.setRail(*Belegt[1]);
		schienennr = aktZu.getPawn(spielerfarbe).schienennetznummer;
		if (aktZu.isRailwayNumberOfConnectionEqualsNumber(*Belegt[0],
				schienennr)) {
			gueltigkeit = true;
		} else {
			gueltigkeit = false;
		}
	} else {
		cout << "Irgendwas an diesem Zug ist totaly crap!!!" << endl;
		gueltigkeit = false;
		return false;
	}
	short summe = 0;
	for (int i = 0; i < 2; i++) {
		if (Belegt[i] != 0) {
			if (Belegt[i]->hindernis)
				summe += 2;
			else
				summe += 1;
		}
	}
	if (summe > 2) {
		gueltigkeit = false;
	}
	return gueltigkeit;
}

void Move::execute(State& akt) const { //TODO execute je nach Anzahl schienen
	if (!gueltigkeitUEberprueft) {
		cout
				<< "Zug::ausfuehren:Zug sollte ohne Ueberpruefung ausgefuehrt werden"
				<< endl;
		return;
	}
	if (!gueltigkeit) {
		cout
				<< "Zug::ausfuehren: Es sollte ein ungueltiger Zug ausgefuehrt werden!"
				<< endl;
		return;
	}
	if (richtigBelegt) {
		akt.setRail(*Belegt[0]);
		if (anzahlSchienen == 2)
			akt.setRail(*Belegt[1]);
	} else {
		akt.setRail(*Belegt[1]);
		akt.setRail(*Belegt[0]);
	}
}

void Move::dump() const {
	cout << "First" << endl;
	cout << (*Belegt[0]).first.x << " " << (*Belegt[0]).first.y << endl;
	cout << "Richtung" << endl;
	cout << (*Belegt[0]).richtung.x << " " << (*Belegt[0]).richtung.y << endl;
}
