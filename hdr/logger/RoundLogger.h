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
	const PlayingOrder &playingOrder;
	const vector<AI*> playerList;
	const Board &board;

	const AI* roundStartingPlayer;
	const City*** playingCards;
	Counter lostPoints;

	const Pawn** pawnList;

	vector<Move*> moveList;
public:
	RoundLogger(const PlayingOrder& playingOrder, const vector<AI*> playerList,
			const Board& board, const AI* roundStartingPlayer);
	virtual ~RoundLogger();
	const Board& getBoard() const;
	const Counter& getLostPoints() const;
	const vector<Move*>& getMoveList() const;
	const Pawn** getPawnList() const;
	const vector<AI*>& getPlayerList() const;
	const City*** getPlayingCards() const;
	const PlayingOrder& getPlayingOrder() const;
	const AI* getRoundStartingPlayer() const;

	friend class Round;
};

#endif /* ROUNDLOGGER_H_ */
