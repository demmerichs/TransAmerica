/*
 * GameLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

//==============================
// include guards
#ifndef GAMELOGGER_H_
#define GAMELOGGER_H_
//==============================
// forward declared dependencies
class Counter;
class Board;
//==============================
// included dependencies
#include <vector>

#include "../game/PlayingOrder.h"
#include "../game/Constants.h"
#include "../game/AI.h"
#include "RoundLogger.h"
//#include"../../game/header/Counter.h"
//#include"../../game/header/Board.h"
//==============================
// the actual class
class GameLogger {
public:
	GameLogger(std::vector<AI*> playerList, Board& board,
			PlayingOrder playingOrder, AI* gameStartingPlayer);
	virtual ~GameLogger();

	AI* gameStartingPlayer;
	std::vector<AI*> playerList;
	Board& board;
	PlayingOrder playingOrder;

	int deadLine; /** < if points equal or lower deadLine, you lose*/

	Counter points;
	Counter winnerPoints;

	std::vector<RoundLogger*> roundList;
};

#endif /* GAMELOGGER_H_ */
