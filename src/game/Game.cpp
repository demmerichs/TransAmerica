/*
 * Game.cpp
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#include "../../hdr/game/Game.h"

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
		for(int i=0;i<(int)gameLogger->playerList.size();i++)
			gameLogger->playerList[i]->gatherInformationEndOfRound(currentRoundLogger);
		std::cout << "Round ended" << std::endl;
		for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
			std::cout << "Player " << gameLogger->playerList[i]->playercolor
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
			std::cout << "Player " << gameLogger->playerList[i]->playercolor
					<< " has "
					<< gameLogger->points.get(gameLogger->playerList[i])
					<< " points!" << std::endl;
		std::cout << std::endl;
		++playerIterator;
	}
	//TODO punktevergabe
	int maxpoints = 0;
	int numberWinners = 0;
	for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
		if (maxpoints < gameLogger->points.get(gameLogger->playerList[i]))
			maxpoints = gameLogger->points.get(gameLogger->playerList[i]);
	for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
		if (maxpoints == gameLogger->points.get(gameLogger->playerList[i]))
			numberWinners++;
	for (int i = 0; i < (int) gameLogger->playerList.size(); i++)
		if (maxpoints == gameLogger->points.get(gameLogger->playerList[i]))
			gameLogger->winnerPoints.add(gameLogger->playerList[i],
					6 / numberWinners);
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

