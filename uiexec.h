#ifndef UIEXEC_H
#define UIEXEC_H
#include "window.h"
#include"Konstant.h"
#include"Brett.h"
#include"Game.h"
#include <QObject>

class UIEXEC: public QObject
{
  Q_OBJECT
public:
  UIEXEC();
  Window* wp;
  Brett* board;
  Game* game1;
  void doTheMagic();

};

#endif // UIEXEC_H
