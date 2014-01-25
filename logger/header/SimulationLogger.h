/*
 * SimulationLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef SIMULATIONLOGGER_H_
#define SIMULATIONLOGGER_H_

#include<vector>
#include"AI.h"
#include"GameLogger.h"
#include"Counter.h"

class SimulationLogger {
public:
	SimulationLogger();
	virtual ~SimulationLogger();

	std::vector<AI*> playerList;
	Counter gamesWon;

	std::vector<GameLogger*> gameList;

	Board board;

	unsigned int seed;
};

#endif /* SIMULATIONLOGGER_H_ */
