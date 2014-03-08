/*
 * RoundLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

//==============================
// include guards
#ifndef ROUNDLOGGER_H_
#define ROUNDLOGGER_H_
//==============================
// forward declared dependencies
class PlayingOrder;
class Move;
class Pawn;
//==============================
// included dependencies
#include<vector>
#include"../game/Constants.h"
//#include"../../game/header/PlayingOrder.h"
#include"../game/Counter.h"
//#include"../../game/header/Move.h"
//#include"../../game/header/Pawn.h"
//==============================
// the actual class
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
