#include "../../hdr/userinterface/GameExec.h"
#include "../../hdr/game/Human.h"

GameExec::GameExec(Window* wp, vector<AI*> aiList, int games) :
		wp(wp) {
	board = new Board((int) aiList.size() > PLAYER_LIMIT);
	simulationLogger = new SimulationLogger(aiList, *board, games, 1395055174); //TODO remove seed
}

void GameExec::simulateSimulation() {
	/**
	 window implementation
	 */

	simulation = new Simulation(simulationLogger);
	simulation->run();

}
