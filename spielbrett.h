#ifndef SPIELBRETT_H
#define SPIELBRETT_H

#include <QWidget>
#include <vector>
#include "Konstant.h"
#include "Zustand.h"
#include "window.h"


class Spielbrett: public QWidget
{
  Q_OBJECT
public:
  Spielbrett(Window* parentalWindow, QWidget* parent = 0);
  QSize minimumSizeHint ()const;
  QSize sizeHint ()const;

public slots:
  void zustandChanged(int);
  void drawCityChanged(bool);

protected:
  void paintEvent(QPaintEvent* event);

private:
  bool Schienen[MAX_X][MAX_Y][3];
  bool drawCity;
  Window* parentalWindow;

};

#endif // SPIELBRETT_H
