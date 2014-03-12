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
	UIEXEC(Window* wp, vector<AI*> aiList, int games = 1);
	Window* wp;
	Board* board;
	vector<AI*> *players;
	SimulationLogger* simulationLogger;
	Simulation* simulation;
	void simulateSimulation();
};

#endif // UIEXEC_H
