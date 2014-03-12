/*
 * GameLogger.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../../hdr/logger/GameLogger.h"

GameLogger::GameLogger(const SimulationLogger* simulationLogger,
		const PlayingOrder playingOrder, const AI* gameStartingPlayer) :
		gameStartingPlayer(gameStartingPlayer), playerList(
				simulationLogger->getPlayerList()), board(
				simulationLogger->getBoard()), playingOrder(playingOrder), deadLine(
				0), winnerPoints(simulationLogger->getWinnerPoints()), points(
				13), gameWon(0) {
}

GameLogger::~GameLogger() {
	// TODO Auto-generated destructor stub
}

const Board& GameLogger::getBoard() const {
	return board;
}

int GameLogger::getDeadLine() const {
	return deadLine;
}

const AI* GameLogger::getGameStartingPlayer() const {
	return gameStartingPlayer;
}

const vector<AI*>& GameLogger::getPlayerList() const {
	return playerList;
}

const PlayingOrder& GameLogger::getPlayingOrder() const {
	return playingOrder;
}

const Counter& GameLogger::getPoints() const {
	return points;
}

const vector<RoundLogger*>& GameLogger::getRoundList() const {
	return roundList;
}

const Counter& GameLogger::getGameWon() const {
	return gameWon;
}
