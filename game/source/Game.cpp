/*
 * Game.cpp
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#include "../header/Game.h"

#include <QtCore/QtCore>

Game::Game(GameLogger* gameLogger) :
		gameLogger(gameLogger), played(false) {
}

Game::~Game() {
}

void Game::play() {
	assert(!played);
	PlayingOrder::iterator playerIterator = gameLogger->playingOrder.begin(
			gameLogger->gameStartingPlayer);
	while (noLoser() && gameLogger->roundList.size() < 2) {
		RoundLogger* currentRoundLogger = new RoundLogger(
				gameLogger->playingOrder, gameLogger->playerList,
				gameLogger->board, *playerIterator);
		Round currentRound(currentRoundLogger);
		currentRound.play();
		gameLogger->points = gameLogger->points
				- currentRoundLogger->lostPoints;
		gameLogger->roundList.push_back(currentRoundLogger);
		std::cout << "Round ended" << std::endl;
		for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
			std::cout << "Player " << gameLogger->playerList[i]->spielerfarbe
					<< " has "
					<< gameLogger->points.get(gameLogger->playerList[i])
					<< " points!" << std::endl;
		++playerIterator;
	}
	setNewDeadLine();
	while (noLoser()) {
		RoundLogger* currentRoundLogger = new RoundLogger(
				gameLogger->playingOrder, gameLogger->playerList,
				gameLogger->board, *playerIterator);
		Round currentRound(currentRoundLogger);
		currentRound.play();
		gameLogger->points = gameLogger->points
				- currentRoundLogger->lostPoints;
		gameLogger->roundList.push_back(currentRoundLogger);
		std::cout << "Round ended" << std::endl;
		for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
			std::cout << "Player " << gameLogger->playerList[i]->spielerfarbe
					<< " has "
					<< gameLogger->points.get(gameLogger->playerList[i])
					<< " points!" << std::endl;
		++playerIterator;
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
		++playerIterator;
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

