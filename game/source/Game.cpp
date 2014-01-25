/*
 * Game.cpp
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#include "Game.h"

#include <QtCore/QtCore>

Game::Game(GameLogger* gameLogger) :
		gameLogger(gameLogger), played(false) {
}

Game::~Game() {
}

void Game::play() {
	assert(!played);

	while (noLoser() && gameLogger->roundList.size() < 2) {
		RoundLogger* currentRoundLogger = new RoundLogger;
		Round currentRound(currentRoundLogger);
		currentRound.play();
		gameLogger->roundList.push_back(currentRoundLogger);
	}
	setNewDeadLine();
	while (noLoser()) {
		RoundLogger* currentRoundLogger = new RoundLogger();
		Round currentRound(currentRoundLogger);
		currentRound.play();
		gameLogger->roundList.push_back(currentRoundLogger);
	}

	played = true;
}

bool Game::noLoser() const {
	bool retValue = true;
	PlayingOrder::iterator playerIterator = gameLogger->playingOrder.begin(
			gameLogger->gameStartingPlayer);
	do {
		retValue = retValue
				&& (gameLogger->deadLine
						< gameLogger->points.get(*playerIterator));
	} while (playerIterator
			!= gameLogger->playingOrder.begin(gameLogger->gameStartingPlayer));
	return retValue;
}

void Game::setNewDeadLine() {
	PlayingOrder::iterator playerIterator = gameLogger->playingOrder.begin(
			gameLogger->gameStartingPlayer);
	do {
		if (gameLogger->deadLine > gameLogger->points.get(*playerIterator))
			gameLogger->deadLine = gameLogger->points.get(*playerIterator);
	} while (playerIterator
			!= gameLogger->playingOrder.begin(gameLogger->gameStartingPlayer));
	gameLogger->deadLine -= 3;
	if (gameLogger->deadLine < 0)
		gameLogger->deadLine = 0;
}


