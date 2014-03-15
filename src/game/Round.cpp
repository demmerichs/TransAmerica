/*
 * Round.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "../../hdr/game/Round.h"

#include <vector>
#include <cstdlib>

#include "../../hdr/game/Constants.h"
#include "../../hdr/game/Board.h"
#include "../../hdr/game/City.h"
#include "../../hdr/game/Connection.h"
#include "../../hdr/game/Counter.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/game/Pawn.h"

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
	while (checkRoundWinnerOrAllBanned()) {
		if (roundLogger->playerStatus[currentPlayer->playerColor]
				== NOT_BANNED) {
			State copy(currentState);
			Move* currentMove = new Move(
					currentPlayer->doMove(copy, roundLogger->getMoveList()));
			if (currentMove->valid(currentState, currentPlayer->playerColor)) {
				currentMove->execute(currentState);
			} else
				roundLogger->playerStatus[currentPlayer->playerColor] =
						currentMove->bannedStatus;
			currentMove->spielerfarbe = currentPlayer->playerColor;
			roundLogger->moveList.push_back(currentMove);
		} else {
			Move* currentMove = new Move(currentPlayer->playerColor, 0, 0);
			currentMove->bannedStatus =
					roundLogger->playerStatus[currentPlayer->playerColor];
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
		const Coordinate* setPosition = playerIterator->setPawn(currentState);
		Pawn currentSet(playerIterator->playerColor, setPosition);
		roundLogger->playerStatus[playerIterator->playerColor] =
				currentState.addPawn(currentSet);
		roundLogger->pawnList[currentSet.spielerfarbe] = new Pawn(currentSet);
		++playerIterator;
	} while (playerIterator
			!= roundLogger->playingOrder.begin(roundLogger->roundStartingPlayer));
}

int Round::losingPoints(AI* player) const {
	unsigned short minuspoints = 0;
	vector<Connection*> path;
	State copy(currentState);
	if (player->countPoints(copy, path)) {
		State copy(currentState);
		for (int i = 0; i < (int) path.size(); i++)
			copy.setRail(*(path[i]));
		if (isPlayerConnectedToHisCities(player, copy)) {
			for (int i = 0; i < (int) path.size(); i++) {
				minuspoints += (1 + path[i]->hindernis);
				cout << (1 + path[i]->hindernis) << endl;
			}
			return minuspoints;
		}
	}
	for (int i = 0; i < 5; i++) {
		minuspoints += currentState.distance(*(player->hand[i]),
				currentState.pointsBelongingToRailwaySystem(
						player->playerColor));
	}
	return minuspoints;
}

bool Round::checkRoundWinnerOrAllBanned() const {
	bool allBanned = true;
	PlayingOrder::iterator playerIterator = roundLogger->playingOrder.begin(
			roundLogger->roundStartingPlayer);
	do {
		if (isRoundWinner(*playerIterator))
			return false;
		allBanned &=
				(bool) roundLogger->playerStatus[playerIterator->playerColor];
		++playerIterator;
	} while (playerIterator
			!= roundLogger->playingOrder.begin(roundLogger->roundStartingPlayer));
	if (allBanned) {
		cout << "all banned" << endl;
		return false;
	}
	return true;
}

bool Round::isRoundWinner(AI* player) const {
	return isPlayerConnectedToHisCities(player, currentState);
}

bool Round::isPlayerConnectedToHisCities(AI* player, const State& state) const {
	short schienennr = state.getPawn(player->playerColor).schienennetznummer;
	for (int i = 0; i < NUMBER_CITYCOLORS; i++) {
		if (schienennr != state.getRailwayNumber(*(player->hand[i])))
			return false;
	}
	return true;
}

void Round::dealCards() {
	short maxNr = MAX_CITYNR;
	if ((int) this->roundLogger->playerList.size() <= PLAYER_LIMIT)
		maxNr = CITYNR_LIMIT;
	for (int i = 0; i < NUMBER_CITYCOLORS; i++) {
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
			roundLogger->playerList[spielernr]->hand[CITYCOLOR_LIST[i]] =
					roundLogger->board.getCity(CITYCOLOR_LIST[i],
							stapel[spielernr]);
		}
	}
	for (int i = 0; i < (int) roundLogger->playerList.size(); i++)
		for (int j = 0; j < NUMBER_CITYCOLORS; j++)
			roundLogger->playingCards[roundLogger->playerList[i]->playerColor][j] =
					roundLogger->playerList[i]->hand[j];
}
