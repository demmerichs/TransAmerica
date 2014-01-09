#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QLabel;
class QSpinBox;
class QCheckBox;

class Spielbrett;

class Window : public QWidget
{
  Q_OBJECT

  friend class Spielbrett;
public:
   Window();
  
private:
  Spielbrett* spielbrett;
  /* diverse Labels
     diverse Combo-/Spin-boxen
     */
  QLabel* pofp1;
  QLabel* pofp2;
  QLabel* pofp3;
  QLabel* pofp4;
  QLabel* pofp5;
  QLabel* pofp6;
  QLabel* player1;
  QLabel* player2;
  QLabel* player3;
  QLabel* player4;
  QLabel* player5;
  QLabel* player6;
  QLabel* toolBoxLabel;
  QSpinBox* vektorSpinBox;
  QCheckBox* showTownsCheckBox;
};

#endif // WINDOW_H
