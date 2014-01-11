#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "Zustand.h"
#include "Game.h"

class QLabel;
class QSpinBox;
class QCheckBox;
class QLCDNumber;

class Spielbrett;

class Window : public QWidget
{
  Q_OBJECT

  friend class Spielbrett;
  friend class UIEXEC;
public:
   Window(Game* game=0);
  
private:
  Spielbrett* spielbrett;
  Zustand* aZp;
  Game* gamep;
  int Zustandcounter;
  bool zustandInitialized;
  /**
     diverse Labels
     diverse Combo-/Spin-boxen
     */
  QLabel* town1;
  QLabel* town2;
  QLabel* town3;
  QLabel* town4;
  QLabel* town5;
  QLabel* town6;
  QLabel* player1;
  QLabel* player2;
  QLabel* player3;
  QLabel* player4;
  QLabel* player5;
  QLabel* player6;
  QLabel* toolBoxLabel;
  QSpinBox* vektorSpinBox;
  QCheckBox* showTownsCheckBox;
  QLCDNumber* counterLCD;
  void playAutomatically();
signals:
  void requestZp(int);
public slots:
  void setZp(Zustand* aktuellerZustand);
  void setZustandscounter(int i);
};

#endif // WINDOW_H
