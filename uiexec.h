#ifndef UIEXEC_H
#define UIEXEC_H
#include "window.h"
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

};

#endif // UIEXEC_H
