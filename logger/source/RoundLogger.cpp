/*
 * RoundLogger.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../header/RoundLogger.h"

RoundLogger::RoundLogger(PlayingOrder& playingOrder,
		std::vector<AI*> playerList, Board& board, AI* roundStartingPlayer) :
		playingOrder(playingOrder), playerList(playerList), board(board), roundStartingPlayer(
				roundStartingPlayer) {
	//TODO playing-cards dealing
}

RoundLogger::~RoundLogger() {
	// TODO Auto-generated destructor stub
}

