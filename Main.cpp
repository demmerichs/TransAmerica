/*
 * Main.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include"logger/header/SimulationLogger.h"
#include"AI/testKI.h"
#include"game/header/AI.h"
#include"game/header/Simulation.h"
#include<vector>

int main(int argc, char* argv[]) {
	Board* board = new Board;
	board->Ausgabe();
	std::vector<AI*> players;
	players.push_back(new testKI(P_YELLOW));
	players.push_back(new testKI(P_BLUE));
	players.push_back(new testKI(P_ORANGE));

	SimulationLogger* simulationLogger = new SimulationLogger(players, *board, 1);
	Simulation simulation(simulationLogger);
	simulation.run();
	return 0;
}
/*
 A---D
 / \ /
 C---B
 */
