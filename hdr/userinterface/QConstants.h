#ifndef QCONSTANTS_H_
#define QCONSTANTS_H_

class QColor;
class QPixmap;

#include "../../hdr/game/Constants.h"

QColor getQColor(PLAYERCOLOR i);
QPixmap getCityPixmap(CITYCOLOR i);
QPixmap getCity_hPixmap(CITYCOLOR i);
QPixmap getRatPixmap(PLAYERCOLOR i);

#endif /* QCONSTANTS_H_ */

//Anmerkungen zur Zeichnung
//bg1.jpg: Auf 585 Pixel(x) befinden sich 16 Schienenzeichnungen
