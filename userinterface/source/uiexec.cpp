
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
	board->Ausgabe();
	std::vector<AI*> players;
	players.push_back(new testKI(P_YELLOW));
	players.push_back(new testKI(P_BLUE));
	players.push_back(new testKI(P_ORANGE));

	SimulationLogger* simulationLogger = new SimulationLogger(players, *board, 1);
	Simulation simulation(simulationLogger);
	simulation.run();

	wp = new Window(simulationLogger);
	wp->setWindowTitle(QObject::tr("Transamerica - Testversion - GITHUB"));
	wp->show();

	//wp->playAutomatically();
//    sound = new QSound("sounds/train-whistle-01.wav");
//    assert(sound->isAvailable());
//    sound->play();

	/**
	 call of the game algorithmus
	 */

	/**
	 connect this shit
	 */
	// TODO some connects
	//connect(wp, SIGNAL(requestZp(int)), &(game1->stateList), SLOT(callGet(int)) );
	//connect(&(game1->stateList), SIGNAL(emitGet(Zustand*)), wp, SLOT(setZp(Zustand*)));

}
