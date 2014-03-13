#ifndef QKONSTANTEN_H
#define QKONSTANTEN_H

class QColor;
class QPixmap;

#include "../../hdr/game/Constants.h"

QColor getQColor(PLAYERCOLOR i);
QPixmap getCityPixmap(CITYCOLOR i);
QPixmap getCity_hPixmap(CITYCOLOR i);
QPixmap getRatPixmap(PLAYERCOLOR i);

#endif // QKONSTANTEN_H


//Anmerkungen zur Zeichnung
//bg1.jpg: Auf 585 Pixel(x) befinden sich 16 Schienenzeichnungen
