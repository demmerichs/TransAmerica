/*
 * Game.cpp
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#include "../../hdr/game/Game.h"
#include <limits>

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
				- currentRoundLogger->getLostPoints();
		gameLogger->roundList.push_back(currentRoundLogger);
		for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
			gameLogger->playerList[i]->gatherInformationEndOfRound(
					currentRoundLogger);
		cout << "Round ended" << endl;
		for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
			cout << "Player " << gameLogger->playerList[i]->playerColor
					<< " has "
					<< gameLogger->points.get(gameLogger->playerList[i])
					<< " points!" << endl;
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
				- currentRoundLogger->getLostPoints();
		gameLogger->roundList.push_back(currentRoundLogger);
		cout << "Round ended" << endl;
		for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
			cout << "Player " << gameLogger->playerList[i]->playerColor
					<< " has "
					<< gameLogger->points.get(gameLogger->playerList[i])
					<< " points!" << endl;
		cout << endl;
		++playerIterator;
	}
	//TODO punktevergabe
	int numberWinners = 0, maxpoints = std::numeric_limits<int>::min();
	for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
		if (maxpoints < gameLogger->points.get(gameLogger->playerList[i]))
			maxpoints = gameLogger->points.get(gameLogger->playerList[i]);
	for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
		if (maxpoints == gameLogger->points.get(gameLogger->playerList[i]))
			numberWinners++;
	for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
		if (maxpoints == gameLogger->points.get(gameLogger->playerList[i]))
			gameLogger->gameWon.add(gameLogger->playerList[i],
					gameLogger->winnerPoints / numberWinners);
	//TODO end
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
	int minimum = 13;
	PlayingOrder::iterator playerIterator = gameLogger->playingOrder.begin(
			gameLogger->gameStartingPlayer);
	do {
		if (minimum > gameLogger->points.get(*playerIterator))
			minimum = gameLogger->points.get(*playerIterator);
		++playerIterator;
	} while (playerIterator
			!= gameLogger->playingOrder.begin(gameLogger->gameStartingPlayer));
	gameLogger->deadLine = minimum - 3;
	if (gameLogger->deadLine < 0)
		gameLogger->deadLine = 0;
}

