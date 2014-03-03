/*
 * Simulation.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "../header/Simulation.h"

Simulation::Simulation(SimulationLogger* simulationLogger) :
		simulationLogger(simulationLogger), ran(false) {}

Simulation::~Simulation() {}

void Simulation::run() {
	assert(!ran);
	for (int i = 0; i < (int) simulationLogger->gameList.size(); i++) {
		std::vector<AI*> order=simulationLogger->getPlayingOrder(i);
		PlayingOrder playingOrder(order);
		GameLogger* currentGameLogger=new GameLogger(simulationLogger->playerList,
				simulationLogger->board, playingOrder, order[0]);
		Game currentGame(currentGameLogger);
		currentGame.play();
		simulationLogger->gameList[i]=currentGameLogger;
	}
	ran=true;
}
