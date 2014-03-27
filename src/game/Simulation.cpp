/*
 * Simulation.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "../../hdr/game/Simulation.h"
#include <QProgressDialog>
Simulation::Simulation(SimulationLogger* simulationLogger) :
		simulationLogger(simulationLogger), ran(false) {
}

Simulation::~Simulation() {
}

void Simulation::run() {
	assert(!ran);
    bool hasHumanPlayer = false;
//    for(int i=0; i<simulationLogger->getPlayerList().size();i++){
//        if (simulationLogger->getPlayerList()[i]==)
//    }
    QProgressDialog progress("Running the simulation...", "Abort",0,
                             simulationLogger->gameList.size());
    progress.setWindowModality(Qt::ApplicationModal);
    progress.show();
	for (int i = 0; i < (int) simulationLogger->gameList.size(); i++) {
        if (progress.wasCanceled()){
            break;
        }
        vector<AI*> order = getPlayingOrder(i);
		PlayingOrder playingOrder(order);
		GameLogger* currentGameLogger = new GameLogger(simulationLogger,
				playingOrder, order[0]);
		Game currentGame(currentGameLogger);
		currentGame.play();
        progress.setValue(i);
		simulationLogger->gamesWon += currentGameLogger->getGameWon();
		simulationLogger->gameList[i] = currentGameLogger;
	}
    progress.setValue(simulationLogger->gameList.size());
	//TODO ausgabe punkte
	for (int i = 0; i < (int) simulationLogger->playerList.size(); i++)
		cout << "Player " << simulationLogger->playerList[i]->playerColor
				<< " has won "
				<< simulationLogger->gamesWon.get(
						simulationLogger->playerList[i])
						/ (double) simulationLogger->winnerPoints << " game(s)."
				<< endl;
	//TODO end
    simulationLogger->fillStatisticsLogger();
	ran = true;
}

vector<AI*> Simulation::getPlayingOrder(int game) const {
	//TODO determine playingOrder
	return this->simulationLogger->playerList;
}
