#ifndef UIEXEC_H
#define UIEXEC_H
#include "window.h"
<<<<<<< HEAD
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
=======
#include"Konstant.h"
#include"Brett.h"
#include"Game.h"
#include <QString>


class UIEXEC
{

public:
  UIEXEC();
  Window* wp;
  Brett* board;
  Game* game1;
  void doTheMagic();
>>>>>>> refs/remotes/origin/master

};

#endif // UIEXEC_H
