/*
 * RoundLogger.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../../hdr/logger/RoundLogger.h"

RoundLogger::RoundLogger(PlayingOrder& playingOrder,
		vector<AI*> playerList, Board& board, AI* roundStartingPlayer) :
		playingOrder(playingOrder), playerList(playerList), board(board), roundStartingPlayer(
				roundStartingPlayer) {
	//TODO playing-cards dealing
}

RoundLogger::~RoundLogger() {
	// TODO Auto-generated destructor stub
}

