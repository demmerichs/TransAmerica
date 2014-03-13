/*
 * Simulation.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "../../hdr/game/Simulation.h"

Simulation::Simulation(SimulationLogger* simulationLogger) :
		simulationLogger(simulationLogger), ran(false) {
}

Simulation::~Simulation() {
}

void Simulation::run() {
	assert(!ran);
	for (int i = 0; i < (int) simulationLogger->gameList.size(); i++) {
		vector<AI*> order = getPlayingOrder(i);
		PlayingOrder playingOrder(order);
		GameLogger* currentGameLogger = new GameLogger(simulationLogger,
				playingOrder, order[0]);
		Game currentGame(currentGameLogger);
		currentGame.play();
		simulationLogger->gamesWon += currentGameLogger->getGameWon();
		simulationLogger->gameList[i] = currentGameLogger;
	}
	//TODO ausgabe punkte
	for (int i = 0; i < (int) simulationLogger->playerList.size(); i++)
		cout << "Player " << simulationLogger->playerList[i]->playerColor
				<< " has won "
				<< simulationLogger->gamesWon.get(
						simulationLogger->playerList[i])
						/ (double) simulationLogger->winnerPoints << " game(s)."
				<< endl;
	//TODO end
	ran = true;
}

vector<AI*> Simulation::getPlayingOrder(int game) const {
	//TODO determine playingOrder
	return this->simulationLogger->playerList;
}
