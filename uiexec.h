#ifndef UIEXEC_H
#define UIEXEC_H
#include "window.h"
#include"Constants.h"
#include"Board.h"
#include"SimulationLogger.h"
#include <QString>


class UIEXEC
{

public:
  UIEXEC();
  Window* wp;
  Board* board;
  SimulationLogger* simulation;
  void doTheMagic();

};

#endif // UIEXEC_H
