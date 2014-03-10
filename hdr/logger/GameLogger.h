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
class RoundLogger;
//==============================
// included dependencies
#include <vector>

#include "../game/PlayingOrder.h"
#include "../game/Constants.h"
#include "../game/AI.h"
//#include "RoundLogger.h"
#include "SimulationLogger.h"
//#include"../../game/header/Counter.h"
//#include"../../game/header/Board.h"
//==============================
// the actual class
class GameLogger {
	const AI* gameStartingPlayer;
	const vector<AI*> playerList;
	const Board& board;
	const PlayingOrder playingOrder;

	int deadLine; /** < if points equal or lower deadLine, you lose*/
	unsigned int winnerPoints;

	Counter points;
	Counter gameWon;

	vector<RoundLogger*> roundList;
public:
	GameLogger(const SimulationLogger* simulationLogger,
			const PlayingOrder playingOrder, const AI* gameStartingPlayer);
	virtual ~GameLogger();
	const Board& getBoard() const;
	int getDeadLine() const;
	const AI* getGameStartingPlayer() const;
	const vector<AI*>& getPlayerList() const;
	const PlayingOrder& getPlayingOrder() const;
	const Counter& getPoints() const;
	const vector<RoundLogger*>& getRoundList() const;
	const Counter& getGameWon() const;

	friend class Game;
};

#endif /* GAMELOGGER_H_ */
