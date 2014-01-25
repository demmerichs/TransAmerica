/*
 * Round.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "Round.h"

Round::Round(RoundLogger* roundLogger) :
		roundLogger(roundLogger), played(false), currentState(
				State(roundLogger->board)) {
}

Round::~Round() {
	// TODO Auto-generated destructor stub
}

void Round::play() {
	assert(!played);

	//begin play-slope
	dealCards();
	setPawns();
	PlayingOrder::iterator currentPlayer = roundLogger->playingOrder.begin(
			roundLogger->roundStartingPlayer);
	while (checkRoundWinner()) {
		State copy(currentState);
		Move* currentMove = currentPlayer->zug(copy);
		if (currentMove->valid(currentState, currentPlayer->spielerfarbe)) {
			currentMove->execute(currentState);
			roundLogger->moveList.push_back(currentMove);
		}
		//currentState.aktAusgabe();
	}
	PlayingOrder::iterator playerIterator = roundLogger->playingOrder.begin(
			roundLogger->roundStartingPlayer);
	do {
		roundLogger->lostPoints.add(*playerIterator,
				losingPoints(*playerIterator));
	} while (playerIterator
			!= roundLogger->playingOrder.begin(roundLogger->roundStartingPlayer));
	//end play-slope

	played = true;
}

void Round::setPawns() {
	PlayingOrder::iterator playerIterator = roundLogger->playingOrder.begin(
			roundLogger->roundStartingPlayer);
	do {
		Vector setPosition = playerIterator->setPawn(currentState);
		Pawn currentSet(playerIterator->spielerfarbe, setPosition);
		currentState.addPawn(currentSet);
		++playerIterator;
	} while (playerIterator
			!= roundLogger->playingOrder.begin(roundLogger->roundStartingPlayer));
}

int Round::losingPoints(AI* player) const {
	unsigned short minuspoints = 0;
	for (int i = 0; i < 5; i++) {
		minuspoints += currentState.distance(*(player->handkarten[i]),
				currentState.pointsBelongingToRailwaySystem(
						player->spielerfarbe));
	}
	return minuspoints;
}

bool Round::checkRoundWinner() const {
	PlayingOrder::iterator playerIterator = roundLogger->playingOrder.begin(
			roundLogger->roundStartingPlayer);
	do {
		if(isRoundWinner(*playerIterator))
			return false;
	} while (playerIterator
			!= roundLogger->playingOrder.begin(roundLogger->roundStartingPlayer));
	return true;
}

bool Round::isRoundWinner(AI* player) const {
	short schienennr =
			currentState.getPoeppel(player->spielerfarbe).schienennetznummer;
	for (int i = 0; i < NUMBER_CITYCOLOURS; i++) {
		if (schienennr
				!= currentState.getSchienenNetzNummer(
						*(player->handkarten[i])))
			return false;
	}
	return true;
}

void Round::dealCards() {
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
