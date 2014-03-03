#ifndef SPIELBRETT_H
#define SPIELBRETT_H

#include <QWidget>
#include <QColor>
<<<<<<< HEAD
#include "../../game/header/Constants.h"
#include "../../game/header/State.h"
=======
#include "Konstant.h"
#include "State.h"
>>>>>>> refs/remotes/origin/master
#include "window.h"

class Window;

class Spielbrett: public QWidget
{
  Q_OBJECT
public:
  Spielbrett(Window* parentalWindow, QWidget* parent = 0);
  //QSize minimumSizeHint ()const;
  //QSize sizeHint ()const;

public slots:
  void zustandChanged(int);
  void drawCityChanged(bool);

protected:
  void paintEvent(QPaintEvent* event);

private:
  bool drawCity;
  Window* parentalWindow;


};

#endif // SPIELBRETT_H
