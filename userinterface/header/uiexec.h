#ifndef UIEXEC_H
#define UIEXEC_H
#include "window.h"
#include "../../game/header/Constants.h"
#include "../../game/header/Board.h"
#include "../../logger/header/SimulationLogger.h"
#include <QString>

class UIEXEC {

public:
	UIEXEC();
	Window* wp;
	Board* board;
	SimulationLogger* simulation;
	void doTheMagic();

};

#endif // UIEXEC_H
