//==============================
// include guards
#ifndef UIEXEC_H
#define UIEXEC_H
//==============================
// forward declared dependencies
class Window;
class AI;
//==============================
// included dependencies
#include <QString>
//#include "window.h"
#include "../game/Constants.h"
#include "../game/Board.h"
#include "../logger/SimulationLogger.h"
#include "../game/Simulation.h"
#include "../ai/AIList.h"	//TODO remove list to somewhere more central
//==============================
// the actual class
class UIEXEC {
public:
	UIEXEC();
	Window* wp;
	Board* board;
	SimulationLogger* simulationLogger;
	Simulation* simulation;
	void simulateSimulation(int games = 1);
};

#endif // UIEXEC_H
