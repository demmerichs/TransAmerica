
#include "../header/uiexec.h"
#include "../../game/header/AI.h"
#include "../../ai/testKI.h"
#include "../../game/header/Simulation.h"
#include <iostream>
#include <cassert>

UIEXEC::UIEXEC() {
}

void UIEXEC::doTheMagic() {
	/**
	 window implementation
	 */
	board = new Board;
	std::vector<AI*> players;
	players.push_back(new testKI(P_YELLOW));
	players.push_back(new testKI(P_BLUE));
	players.push_back(new testKI(P_ORANGE));

	SimulationLogger* simulationLogger = new SimulationLogger(players, *board, 10);
	Simulation simulation(simulationLogger);
	simulation.run();

	wp = new Window(simulationLogger);
	wp->setWindowTitle(QObject::tr("Transamerica - Testversion - GITHUB"));
	wp->show();
}
