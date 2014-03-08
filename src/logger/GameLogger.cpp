/*
 * GameLogger.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../../hdr/logger/GameLogger.h"

GameLogger::GameLogger(std::vector<AI*> playerList, Board& board,
		PlayingOrder playingOrder, AI* gameStartingPlayer) :
		gameStartingPlayer(gameStartingPlayer), playerList(playerList), board(
				board), playingOrder(playingOrder), deadLine(0) {
	PlayingOrder::iterator playerIterator = playingOrder.begin(
			gameStartingPlayer);
	do {
		points.add(*playerIterator, 13);
		++playerIterator;
	} while (*playerIterator != gameStartingPlayer);
}

GameLogger::~GameLogger() {
	// TODO Auto-generated destructor stub
}

