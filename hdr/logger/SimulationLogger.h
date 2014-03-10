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
class DynamicState;
//==============================
// included dependencies
#include<vector>
#include<ctime>

#include "../game/Counter.h"
#include "../game/Board.h"
//==============================
// the actual class
class SimulationLogger {
	const vector<AI*> playerList;
	Counter gamesWon;
	vector<GameLogger*> gameList;
	const Board board;
	const unsigned int seed;
	const unsigned int winnerPoints;
	unsigned int calculateWinnerPoints();
public:
	SimulationLogger(vector<AI*> playerList, Board& board, int numberOfGames,
			unsigned int seed = (unsigned) time(0));
	virtual ~SimulationLogger();
	const Board& getBoard() const;
	const vector<GameLogger*>& getGameList() const;
	const Counter& getGamesWon() const;
	const vector<AI*>& getPlayerList() const;
	const unsigned int getSeed() const;
	const unsigned int getWinnerPoints() const;

	DynamicState calculateDynamicState(int game, int round, int move) const;
	const City** getHandOfPlayer(PLAYERCOLOR playerColor, int game, int round) const;

	friend class Simulation;
};

#endif /* SIMULATIONLOGGER_H_ */
