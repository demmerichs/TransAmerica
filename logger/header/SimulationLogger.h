/*
 * SimulationLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef SIMULATIONLOGGER_H_
#define SIMULATIONLOGGER_H_

#include<vector>
#include"../../game/header/AI.h"
#include"GameLogger.h"
#include"../../game/header/Counter.h"
#include<ctime>

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
