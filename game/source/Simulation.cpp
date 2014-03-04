/*
 * Simulation.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "../header/Simulation.h"

Simulation::Simulation(SimulationLogger* simulationLogger) :
		simulationLogger(simulationLogger), ran(false) {
}

Simulation::~Simulation() {
}

void Simulation::run() {
	assert(!ran);
	for (int i = 0; i < (int) simulationLogger->gameList.size(); i++) {
		std::vector<AI*> order = simulationLogger->getPlayingOrder(i);
		PlayingOrder playingOrder(order);
		GameLogger* currentGameLogger = new GameLogger(
				simulationLogger->playerList, simulationLogger->board,
				playingOrder, order[0]);
		Game currentGame(currentGameLogger);
		currentGame.play();
		simulationLogger->gamesWon += currentGameLogger->winnerPoints;
		simulationLogger->gameList[i] = currentGameLogger;
	}
	//TODO ausgabe punkte
	for (int i = 0; i < (int) simulationLogger->playerList.size(); i++)
		std::cout << "Player " << simulationLogger->playerList[i]->spielerfarbe
				<< " has won "
				<< simulationLogger->gamesWon.get(
						simulationLogger->playerList[i]) / (double) 6.
				<< " game(s)." << std::endl;
	//TODO end
	ran = true;
}
