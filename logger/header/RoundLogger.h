/*
 * RoundLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef ROUNDLOGGER_H_
#define ROUNDLOGGER_H_

#include<vector>
#include"Constants.h"
#include"PlayingOrder.h"
#include"Counter.h"
#include"Move.h"
#include"Pawn.h"

class RoundLogger {
public:
	RoundLogger();
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
