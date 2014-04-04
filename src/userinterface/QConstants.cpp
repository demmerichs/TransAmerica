#include <QPixmap>

#include "../../hdr/userinterface/QConstants.h"

QColor getQColor(PLAYERCOLOR i) {
	if (i == P_BLUE)
		return QColor(Qt::blue);
	else if (i == P_YELLOW)
		return QColor(Qt::yellow);
	else if (i == P_GREEN)
		return QColor(Qt::green);
	else if (i == P_VIOLET)
		return QColor(Qt::magenta);
	else if (i == P_ORANGE)
		return QColor("#ffa500");
	else if (i == P_WHITE)
		return QColor(Qt::white);
	else
		return QColor(Qt::black);
}

QColor getQColorCity(CITYCOLOR i) {
	switch (i) {
	case C_BLUE:
		return QColor(Qt::blue);
	case C_GREEN:
		return QColor("#016523");
	case C_ORANGE:
		return QColor("#a35000");
	case C_RED:
		return QColor(Qt::red);
	case C_YELLOW:
		return QColor("#807500");
	default:
		return QColor(Qt::black);

	}
}

QPixmap getCityPixmap(CITYCOLOR i) {
	if (i == 0)
        return QPixmap("images/Tblau.png");
	else if (i == 4)
        return QPixmap("images/Tgelb.png");
	else if (i == 1)
        return QPixmap("images/Tgruen.png");
	else if (i == 2)
        return QPixmap("images/Torange.png");
	else if (i == 3)
        return QPixmap("images/Trot.png");
	else
		return QPixmap(" ");
}
QPixmap getCity_hPixmap(CITYCOLOR i) {
	if (i == 0)
        return QPixmap("images/Tblauh.png");
	else if (i == 4)
        return QPixmap("images/Tgelbh.png");
	else if (i == 1)
        return QPixmap("images/Tgruenh.png");
	else if (i == 2)
        return QPixmap("images/Torangeh.png");
	else if (i == 3)
        return QPixmap("images/Troth.png");
	else
		return QPixmap(" ");
}
QPixmap getRatPixmap(PLAYERCOLOR i) {
	if (i == P_BLUE)
        return QPixmap("images/ratblau.gif");
	else if (i == P_YELLOW)
		return QPixmap("images/ratgelb.gif");
	else if (i == P_GREEN)
		return QPixmap("images/ratgruen.gif");
	else if (i == P_VIOLET)
		return QPixmap("images/ratlila.gif");
	else if (i == P_ORANGE)
		return QPixmap("images/ratorange.gif");
	else if (i == P_WHITE)
		return QPixmap("images/ratrot.gif");
	else
		return QPixmap("");
}

QString bannedStatusQString(BANNED_STATUS status){
    if (status == MOVE_WITHOUT_RAILS)
        return QString("Es wurde ein Zug mit keiner Schiene initialisiert");
    if (status == MOVE_WRONG_COLOR)
        return QString("Spieler hat falsche Farbe initialisiert");
    else
        return QString("Not known/not implemented");

}

QString playercolorToQString(PLAYERCOLOR i){
    if (i == P_BLUE)
        return QString("blue");
    else if (i == P_YELLOW)
        return QString("yellow");
    else if (i == P_GREEN)
        return QString("green");
    else if (i == P_VIOLET)
        return QString("violett");
    else if (i == P_ORANGE)
        return QString("orange");
    else if (i == P_WHITE)
        return QString("white");
    else
        return QString("...");
}


