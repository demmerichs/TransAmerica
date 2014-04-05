//==============================
// include guards
#ifndef GAMEEXEC_H
#define GAMEEXEC_H
//==============================
// forward declared dependencies
class Window;
class AI;
//==============================
// included dependencies
#include <QString>
#include <QMainWindow>
//#include "window.h"
#include "UserInputWindow.h"
#include "ShowSimulationWindow.h"
#include "Initialize.h"
#include "../game/Constants.h"
#include "../game/Board.h"
#include "../logger/SimulationLogger.h"
#include "../game/Simulation.h"
#include "../ai/AIList.h"	//TODO remove list to somewhere more central
//==============================
// the actual class
class GameExec {
    static bool isInitialized;
    bool hasHuman;
    /*The members belonging to the game algorithms*/
    vector<AI*> aiList;
    SimulationLogger* simulationLogger;
    Simulation* simulation;
    Board* board;
    /*members handling the GUI*/
    ShowSimulationWindow* SimWinp;
    UserInputWindow* UsInWinp;
    Initialize* dialog;
    QMainWindow* parent;
public:
    GameExec(QMainWindow *parent);
	GameExec(Window* wp, vector<AI*> aiList, int games = 1);
    ~GameExec();

	Window* wp;

    bool handleInitDialog();
    void execute();
	void simulateSimulation();
};

#endif // GAMEEXEC_H
