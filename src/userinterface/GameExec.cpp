#include "../../hdr/userinterface/GameExec.h"
#include "../../hdr/game/Human.h"

GameExec::GameExec(Window* wp, int games) :
		wp(wp) {
	board = new Board;
	players = new vector<AI*>;
	players->push_back(new testKI(P_BLUE));
	players->push_back(new testKI(P_ORANGE));
	players->push_back(new testKI(P_YELLOW));

	simulationLogger = new SimulationLogger(*players, *board, games);
}

void GameExec::simulateSimulation() {
	/**
	 window implementation
	 */

	simulation = new Simulation(simulationLogger);
	simulation->run();

}
