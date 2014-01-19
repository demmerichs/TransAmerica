/*
 * Round.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "Round.h"

Round::Round(RoundLogger &roundLogger) :
		roundLogger(roundLogger), played(false), currentState(
				State(roundLogger.board)) {
}

Round::~Round() {
	// TODO Auto-generated destructor stub
}

void Round::play() {
	assert(!played);

	//begin play-slope
	setPawns();
	PlayingOrder::iterator currentPlayer = roundLogger.playingOrder.begin(
			roundLogger.startingPlayer);
	while (checkRoundWinner()) {
		//roundLogger.moves++; //turn++;
		State copy(currentState);
		Move currentMove = currentPlayer->zug(copy);
		if (currentMove.valid(currentState, currentPlayer->spielerfarbe)) {
			currentMove.execute(currentState);
			roundLogger.addMove(currentMove);
		}
		//currentState.aktAusgabe();
	}
	PlayingOrder::iterator playerIterator = roundLogger.playingOrder.begin(
			roundLogger.startingPlayer);
	do {
		roundLogger.lostPoints.add(*playerIterator,
				losingPoints(*playerIterator));
	} while (playerIterator
			!= roundLogger.playingOrder.begin(roundLogger.startingPlayer));
	//end play-slope

	played = true;
}

void Round::setPawns() {
	PlayingOrder::iterator playerIterator = roundLogger.playingOrder.begin(
			roundLogger.startingPlayer);
	do {
		Vector setPosition = playerIterator->setPawn(currentState);
		Pawn currentSet(playerIterator->spielerfarbe, setPosition);
		currentState.addPawn(currentSet);
		++playerIterator;
	} while (playerIterator
			!= roundLogger.playingOrder.begin(roundLogger.startingPlayer));
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
	PlayingOrder::iterator playerIterator = roundLogger.playingOrder.begin(
			roundLogger.startingPlayer);
	do {
		if(isRoundWinner(*playerIterator))
			return false;
	} while (playerIterator
			!= roundLogger.playingOrder.begin(roundLogger.startingPlayer));
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
