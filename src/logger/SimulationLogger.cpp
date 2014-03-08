/*
 * SimulationLogger.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../../hdr/logger/SimulationLogger.h"

SimulationLogger::SimulationLogger(vector<AI*> playerList, Board& board,
		int numberOfGames, unsigned int seed) :
		playerList(playerList), gameList(
				vector<GameLogger*>(numberOfGames)), board(board), seed(
				seed) {
	srand(seed);
	assert(numberOfGames == (int )gameList.size());

}

SimulationLogger::~SimulationLogger() {
	// TODO Auto-generated destructor stub
}

vector<AI*> SimulationLogger::getPlayingOrder(int simulationNumber) {
	return playerList; //TODO
}
