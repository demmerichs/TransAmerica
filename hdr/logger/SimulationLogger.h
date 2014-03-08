/*
 * SimulationLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

//==============================
// include guard
#ifndef SIMULATIONLOGGER_H_
#define SIMULATIONLOGGER_H_
//==============================
// forward declared dependencies
class AI;
class GameLogger;
//==============================
// included dependencies
#include<vector>
#include<cstdlib>
#include<ctime>

#include "../game/Counter.h"
#include "../game/Board.h"
//==============================
// the actual class
class SimulationLogger {
public:
	SimulationLogger(std::vector<AI*> playerList, Board& board,
			int numberOfPlayers, unsigned int seed = (unsigned) time(0));
	virtual ~SimulationLogger();

	std::vector<AI*> playerList;
	Counter gamesWon;

	std::vector<GameLogger*> gameList;

	Board board;

	unsigned int seed;

	std::vector<AI*> getPlayingOrder(int simulationNumber);
};

#endif /* SIMULATIONLOGGER_H_ */
