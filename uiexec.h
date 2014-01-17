#ifndef UIEXEC_H
#define UIEXEC_H
#include "window.h"
#include"Constants.h"
#include"Board.h"
#include"GraphicGame.h"
#include <QString>


class UIEXEC
{

public:
  UIEXEC();
  Window* wp;
  Board* board;
  GraphicGame* game1;
  void doTheMagic();

};

#endif // UIEXEC_H
