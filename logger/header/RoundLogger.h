/*
 * RoundLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef ROUNDLOGGER_H_
#define ROUNDLOGGER_H_

#include<vector>
#include"../../game/header/Constants.h"
#include"../../game/header/PlayingOrder.h"
#include"../../game/header/Counter.h"
#include"../../game/header/Move.h"
#include"../../game/header/Pawn.h"

class RoundLogger {
public:
	RoundLogger(PlayingOrder& playingOrder, std::vector<AI*> playerList,
			Board& board, AI* roundStartingPlayer);
	virtual ~RoundLogger();

	PlayingOrder &playingOrder;
	std::vector<AI*> playerList;
	Board &board;

	AI* roundStartingPlayer;
	City** playingCards;
	Counter lostPoints;

	Pawn** pawnList;

	std::vector<Move*> moveList;
};

#endif /* ROUNDLOGGER_H_ */
