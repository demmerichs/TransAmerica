/*
 * Game.cpp
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#include "Game.h"

Game::Game(short anzahl, short starter, AI* KIaufgelistet, Board &bord) :
		spieleranzahl(anzahl), KIliste(KIaufgelistet), startstartspieler(
				starter), gameBoard(bord), currentState(State(gameBoard))/*, handkarten(
 0)*/{
	srand((unsigned) time(0));
	grenzwert = 0;
	points = new short[spieleranzahl];
	for (int i = 0; i < spieleranzahl; i++)
		points[i] = 13;
}

Game::Game(short anzahl, short starter, AI* KIaufgelistet, Board &bord,
		unsigned seed) :
		spieleranzahl(anzahl), KIliste(KIaufgelistet), startstartspieler(
				starter), gameBoard(bord), currentState(State(gameBoard))/*, handkarten(
 0)*/{
	srand(seed);
	grenzwert = 0;
	points = new short[spieleranzahl];
	for (int i = 0; i < spieleranzahl; i++)
		points[i] = 13;
}

Game::~Game() {
	delete[] points;
}

void Game::spielen() {
	round = 0;
	short startspieler = startstartspieler - 1;
	while (keinVerlierer() && round < 2) {
		kartenAusteilen();
		currentState.resetAll();
		startspieler = (startspieler + 1) % spieleranzahl;
		round++;
		cout << "Runde " << round << ":" << endl;
		spieleRunde(startspieler);
	}
	setzeGrenzwertNeu();
	while (keinVerlierer()) {
		kartenAusteilen();
		currentState.resetAll();
		startspieler = (startspieler + 1) % spieleranzahl;
		round++;
		cout << "Runde " << round << ":" << endl;
		spieleRunde(startspieler);
	}
	cout << "Das Spiel ist nach " << round << " Runden zu Ende gegangen."
			<< endl;
}

bool Game::keinVerlierer() const {
	bool ruckgabe = true;
	for (short i = 0; i < spieleranzahl; i++)
		ruckgabe = ruckgabe && (grenzwert < points[i]);
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
	short schienennr =
			currentState.getPoeppel(KIliste[spieler].spielerfarbe).schienennetznummer;
	for (int i = 0; i < NUMBER_CITYCOLOURS; i++) {
		if (schienennr
				!= currentState.getSchienenNetzNummer(
						*KIliste[spieler].handkarten[i]))
			return false;
	}
	return true;
}

void Game::setzeGrenzwertNeu() {
	short minimum = 13;
	for (int i = 0; i < spieleranzahl; i++)
		if (minimum > points[i])
			minimum = points[i];
	if (minimum > 3)
		grenzwert = minimum - 3;
}

void Game::spieleRunde(short startspieler) {
	PoeppelAufstellen(startspieler);
	short spielerAmZug = startspieler - 1;
	turn = 0;
	while (keinRundenGewinner()) {
		turn++;
		cout << "Dies ist der " << turn << ". Zug:" << endl;
		spielerAmZug = (spielerAmZug + 1) % spieleranzahl;
		PLAYERCOLOUR spielerfarbe = KIliste[spielerAmZug].spielerfarbe;
		currentState.setRound(round);
		currentState.setTurn(turn);
		currentState.setPlayersTurn(spielerfarbe);
		State kopie(currentState);
		Move aktuellerZug = KIliste[spielerAmZug].zug(kopie);
		if (aktuellerZug.valid(currentState, spielerfarbe)) {
			aktuellerZug.execute(currentState);
		}
		currentState.aktAusgabe();
		stateList.push_back(&currentState);
	}
	for (int i = 0; i < spieleranzahl; i++) {
		points[i] -= punkteabzug(i);
	}
	for (int i = 0; i < spieleranzahl; i++)
		cout << "Spieler " << i + 1 << " hat noch " << points[i] << " Punkte."
				<< endl;
}

int Game::punkteabzug(int spieler) {
	unsigned short minuspoints = 0;
	for (int i = 0; i < 5; i++) {
		minuspoints += currentState.distance(*KIliste[spieler].handkarten[i],
				currentState.pointsBelongingToRailwaySystem(
						KIliste[spieler].spielerfarbe));
	}
	return minuspoints;
}

void Game::kartenAusteilen() {
	short maxNr = MAX_STADTNR;
	if (this->spieleranzahl < SPIELER_GRENZE)
		maxNr = STADTNR_GRENZE;

	for (int i = 0; i < NUMBER_CITYCOLOURS; i++) {
		short kartenzahl = maxNr;
		vector<short> rest;
		for (int j = 0; j < kartenzahl; j++)
			rest.push_back(j + 1);
		vector<short> stapel;
		for (int j = 0; j < kartenzahl; j++) {
			short randomInt = rand() % (kartenzahl - j);
			stapel.push_back(rest[randomInt]);
			vector<short>::iterator it;
			it = rest.begin();
			it += randomInt;
			rest.erase(it);
		}
		for (int spielernr = 0; spielernr < spieleranzahl; spielernr++) {
			KIliste[spielernr].handkarten[CITYCOLOUR_LIST[i]] =
					gameBoard.getStadt(CITYCOLOUR_LIST[i], stapel[spielernr]);
		}
	}

	cout << "Handkarten:" << endl;
	for (int i = 0; i < spieleranzahl; i++) {
		cout << "Spieler " << (i + 1) << endl;
		for (int j = 0; j < NUMBER_CITYCOLOURS; j++)
			cout << KIliste[i].handkarten[j]->name << endl;
	}
}

void Game::PoeppelAufstellen(short startspieler) {
	short nr = startspieler - 1;
	do {
		nr = (nr + 1) % spieleranzahl;
		Vector nrWahl = KIliste[nr].setPawn(currentState);
		Pawn neuGesetzt(KIliste[nr].spielerfarbe, nrWahl);
		currentState.addPawn(neuGesetzt);
	} while (nr != (startspieler - 1 + spieleranzahl) % spieleranzahl);
}
