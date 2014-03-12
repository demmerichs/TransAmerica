#include "../../hdr/userinterface/Uiexec.h"
#include "../../hdr/game/Human.h"

UIEXEC::UIEXEC(Window* wp, vector<AI*> aiList, int games) :
		wp(wp) {
	board = new Board;
	simulationLogger = new SimulationLogger(aiList, *board, games);
}

void UIEXEC::simulateSimulation() {
	/**
	 window implementation
	 */

	simulation = new Simulation(simulationLogger);
	simulation->run();

}
