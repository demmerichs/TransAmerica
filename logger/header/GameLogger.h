/*
 * GameLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef GAMELOGGER_H_
#define GAMELOGGER_H_

#include<vector>
#include"../../game/header/PlayingOrder.h"
#include"../../game/header/Constants.h"
#include"RoundLogger.h"
#include"../../game/header/Counter.h"
#include"../../game/header/Board.h"

class GameLogger {
public:
	GameLogger(std::vector<AI*> playerList, Board& board, PlayingOrder playingOrder, AI* gameStartingPlayer);
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
