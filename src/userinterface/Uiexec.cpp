#include "../../hdr/userinterface/Uiexec.h"
#include "../../hdr/game/Human.h"

UIEXEC::UIEXEC() {
}

void UIEXEC::simulateSimulation(int games) {
	/**
	 window implementation
	 */
	board = new Board;
	players = new vector<AI*>;
	players->push_back(new testKI(P_BLUE));
	players->push_back(new testKI(P_ORANGE));
	players->push_back(new testKI(P_YELLOW));

	simulationLogger = new SimulationLogger(*players, *board, games);
	simulation = new Simulation(simulationLogger);
	simulation->run();

}
