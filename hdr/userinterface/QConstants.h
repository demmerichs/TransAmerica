#ifndef QCONSTANTS_H_
#define QCONSTANTS_H_

class QColor;
class QPixmap;
class QString;

#include "../../hdr/game/Constants.h"

QColor getQColor(PLAYERCOLOR i);
QColor getQColorCity(CITYCOLOR i);
QPixmap getCityPixmap(CITYCOLOR i);
QPixmap getCity_hPixmap(CITYCOLOR i);
QPixmap getRatPixmap(PLAYERCOLOR i);

QString bannedStatusQString(BANNED_STATUS);
QString playercolorToQString(PLAYERCOLOR i);

#endif /* QCONSTANTS_H_ */

//Anmerkungen zur Zeichnung
//bg1.jpg: Auf 585 Pixel(x) befinden sich 16 Schienenzeichnungen
