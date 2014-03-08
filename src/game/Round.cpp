/*
 * Round.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "../../hdr/game/Round.h"

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
		Move* currentMove = new Move(currentPlayer->doMove(copy));
		if (currentMove->valid(currentState, currentPlayer->playercolor)) {
			currentMove->execute(currentState);
			roundLogger->moveList.push_back(currentMove);
		}
		++currentPlayer;
	}
	PlayingOrder::iterator playerIterator = roundLogger->playingOrder.begin(
			roundLogger->roundStartingPlayer);
	do {
		roundLogger->lostPoints.add(*playerIterator,
				losingPoints(*playerIterator));
		++playerIterator;
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
		Pawn currentSet(playerIterator->playercolor, setPosition);
		currentState.addPawn(currentSet);
		++playerIterator;
	} while (playerIterator
			!= roundLogger->playingOrder.begin(roundLogger->roundStartingPlayer));
}

int Round::losingPoints(AI* player) const {
	unsigned short minuspoints = 0;
	std::vector<Connection*> path;
	State copy(currentState);
	if (player->countPoints(copy, path)) {
		State copy(currentState);
		for (int i = 0; i < (int) path.size(); i++)
			copy.setRail(*(path[i]));
		if (isPlayerConnectedToHisCities(player, copy)) {
			for (int i = 0; i < (int) path.size(); i++) {
				minuspoints += (1 + path[i]->hindernis);
				std::cout << (1 + path[i]->hindernis) << std::endl;
			}
			return minuspoints;
		}
	}
	for (int i = 0; i < 5; i++) {
		minuspoints += currentState.distance(*(player->hand[i]),
				currentState.pointsBelongingToRailwaySystem(
						player->playercolor));
	}
	return minuspoints;
}

bool Round::checkRoundWinner() const {
	PlayingOrder::iterator playerIterator = roundLogger->playingOrder.begin(
			roundLogger->roundStartingPlayer);
	do {
		if (isRoundWinner(*playerIterator))
			return false;
		++playerIterator;
	} while (playerIterator
			!= roundLogger->playingOrder.begin(roundLogger->roundStartingPlayer));
	return true;
}

bool Round::isRoundWinner(AI* player) const {
	return isPlayerConnectedToHisCities(player, currentState);
}

bool Round::isPlayerConnectedToHisCities(AI* player, const State& state) const {
	short schienennr = state.getPawn(player->playercolor).schienennetznummer;
	for (int i = 0; i < NUMBER_CITYCOLOURS; i++) {
		if (schienennr != state.getRailwayNumber(*(player->hand[i])))
			return false;
	}
	return true;
}

void Round::dealCards() {
	short maxNr = MAX_STADTNR;
	if ((int) this->roundLogger->playerList.size() < SPIELER_GRENZE)
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
		for (int spielernr = 0;
				spielernr < (int) roundLogger->playerList.size(); spielernr++) {
			roundLogger->playerList[spielernr]->hand[CITYCOLOUR_LIST[i]] =
					roundLogger->board.getStadt(CITYCOLOUR_LIST[i],
							stapel[spielernr]);
		}
	}

	cout << "Handkarten:" << endl;
	for (int i = 0; i < (int) roundLogger->playerList.size(); i++) {
		cout << "Spieler " << (i + 1) << endl;
		for (int j = 0; j < NUMBER_CITYCOLOURS; j++)
			cout << roundLogger->playerList[i]->hand[j]->name << endl;
	}
}
