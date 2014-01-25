/*
 * GameLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef GAMELOGGER_H_
#define GAMELOGGER_H_

#include<vector>
#include"PlayingOrder.h"
#include"Constants.h"
#include"RoundLogger.h"
#include"Counter.h"
#include"Board.h"

class GameLogger {
public:
	GameLogger();
	virtual ~GameLogger();

	AI* gameStartingPlayer;
	std::vector<AI*> playerList;
	Board& board;
	PlayingOrder playingOrder;

	int deadLine; /** < if points equal or lower deadLine, you lose*/

	Counter points;

	std::vector<RoundLogger*> roundList;
};

#endif /* GAMELOGGER_H_ */
