/*
 * SimulationLogger.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../header/SimulationLogger.h"

SimulationLogger::SimulationLogger(std::vector<AI*> playerList, Board& board,
		int numberOfGames, unsigned int seed) :
		playerList(playerList), gameList(
				std::vector<GameLogger*>(numberOfGames)), board(board), seed(
				seed) {
	assert(numberOfGames==(int)gameList.size());

}

SimulationLogger::~SimulationLogger() {
	// TODO Auto-generated destructor stub
}

std::vector<AI*> SimulationLogger::getPlayingOrder(int simulationNumber){
	return playerList;
}
