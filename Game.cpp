/*
 * Game.cpp
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#include "Game.h"

Game::Game(short anzahl, short starter, KIspieler* KIaufgelistet, Brett &bord) :
		spieleranzahl(anzahl), KIliste(KIaufgelistet), startstartspieler(
				starter), Spielbrett(bord), aktuellerZustand(
				Zustand(Spielbrett)), handkarten(0) {
	srand((unsigned) time(0));
	grenzwert = 0;
	punkte = new short[spieleranzahl];
	for (int i = 0; i < spieleranzahl; i++)
		punkte[i] = 13;
}

Game::Game(short anzahl, short starter, KIspieler* KIaufgelistet, Brett &bord, unsigned seed) :
		spieleranzahl(anzahl), KIliste(KIaufgelistet), startstartspieler(
				starter), Spielbrett(bord), aktuellerZustand(
				Zustand(Spielbrett)), handkarten(0) {
	srand(seed);
	grenzwert = 0;
	punkte = new short[spieleranzahl];
	for (int i = 0; i < spieleranzahl; i++)
		punkte[i] = 13;
}

Game::~Game() {
	delete[] punkte;
}

void Game::spielen() {
	short rundennummer = 0;
	short startspieler = startstartspieler - 1;
	while (keinVerlierer() && rundennummer < 2) {
		kartenAusteilen();
		aktuellerZustand.resetAll();
		startspieler = (startspieler + 1) % spieleranzahl;
		rundennummer++;
		cout << "Runde " << rundennummer << ":" << endl;
		spieleRunde(startspieler);
	}
	setzeGrenzwertNeu();
	while (keinVerlierer()) {
		kartenAusteilen();
		aktuellerZustand.resetAll();
		startspieler = (startspieler + 1) % spieleranzahl;
		rundennummer++;
		cout << "Runde " << rundennummer << ":" << endl;
		spieleRunde(startspieler);
	}
	cout << "Das Spiel ist nach " << rundennummer << " Runden zu Ende gegangen."
			<< endl;
}

bool Game::keinVerlierer() const {
	bool ruckgabe = true;
	for (short i = 0; i < spieleranzahl; i++)
		ruckgabe = ruckgabe && (grenzwert < punkte[i]);
	return ruckgabe;
}

bool Game::keinRundenGewinner() const {
	for (int i = 0; i < spieleranzahl; i++) {
		if (RundenGewinner(i))
			return false;
	}
	return true;
}

bool Game::RundenGewinner(short spieler) const {
	short schienennr = aktuellerZustand.getPoeppel(
			KIliste[spieler].spielerfarbe).schienennetznummer;
	for (int i = 0; i < MAX_FARBEN; i++) {
		if (schienennr
				!= aktuellerZustand.getSchienenNetzNummer(
						KIliste[spieler].handkarten[i]->place))
			return false;
	}
	return true;
}

void Game::setzeGrenzwertNeu() {
	short minimum = 13;
	for (int i = 0; i < spieleranzahl; i++)
		if (minimum > punkte[i])
			minimum = punkte[i];
	if (minimum > 3)
		grenzwert = minimum - 3;
}

void Game::spieleRunde(short startspieler) {
	PoeppelAufstellen(startspieler);
	short spielerAmZug = startspieler - 1;
	int zugnr = 0;
	while (keinRundenGewinner()) {
		zugnr++;
		cout << "Dies ist der " << zugnr << ". Zug:" << endl;
		spielerAmZug = (spielerAmZug + 1) % spieleranzahl;
		Zustand kopie(aktuellerZustand);
		Move aktuellerZug = KIliste[spielerAmZug].zug(kopie);
		short spielerfarbe = KIliste[spielerAmZug].spielerfarbe;
		if (aktuellerZug.gueltig(aktuellerZustand, spielerfarbe)) {
			aktuellerZug.ausfuehren(aktuellerZustand);
			zugListe.push_back(aktuellerZug);
		}
		Spielbrett.aktAusgabe(aktuellerZustand.schieneGelegt);
	}
	for (int i = 0; i < spieleranzahl; i++) {
		punkte[i] -= punkteabzug(i); //TODO entweder jeder programmiert selbst, oder eine absolute zŠhlweise
	}
	//TODO Zwischenstand provisorium
	cout << "Spieler 1 hat noch " << punkte[0] << " Punkte." << endl
			<< "Spieler 2 hat noch " << punkte[1] << " Punkte." << endl;
}

//TODO folgendes Provisorium
int Game::punkteabzug(int spieler) {
	if (RundenGewinner(spieler))
		return 0;
	else
		return 1;
}

void Game::kartenAusteilen() {
	short maxNr=MAX_STADTNR;
	if(this->spieleranzahl<SPIELER_GRENZE)
		maxNr=STADTNR_GRENZE;
	for(int farbe=1;farbe<=MAX_FARBEN;farbe++){
		short kartenzahl=maxNr;
		vector<short> rest;
		for(int j=0;j<kartenzahl;j++)
			rest.push_back(j+1);
		vector<short> stapel;
		for(int j=0;j<kartenzahl;j++){
			short randomInt=rand()%(kartenzahl-j);
			stapel.push_back(rest[randomInt]);
			vector<short>::iterator it;
			it=rest.begin();
			it+=randomInt;
			rest.erase(it);
		}
		for(int spielernr=0;spielernr<spieleranzahl;spielernr++){
			KIliste[spielernr].handkarten[farbe-1]=Spielbrett.getStadt(farbe,stapel[spielernr]);
		}
	}

	cout << "Handkarten:" << endl;
	for (int i = 0; i < spieleranzahl; i++) {
		cout << "Spieler " << (i + 1) << endl;
		for (int j = 0; j < MAX_FARBEN; j++)
			cout << KIliste[i].handkarten[j]->name<< endl;
	}
}

void Game::PoeppelAufstellen(short startspieler) {
	short nr = startspieler - 1;
	do {
		nr = (nr + 1) % spieleranzahl;
		Vector nrWahl = KIliste[nr].poeppelSetzen(aktuellerZustand);
		Poeppel neuGesetzt(KIliste[nr].spielerfarbe, nrWahl);
		aktuellerZustand.addPoeppel(neuGesetzt);
	} while (nr != (startspieler - 1 + spieleranzahl) % spieleranzahl);
}
