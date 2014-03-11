#ifndef QKONSTANTEN_H
#define QKONSTANTEN_H

#include <QtGui>
#include <QTimer>
#include <QPixmap>

class QPixmap;
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

QPixmap getPixmap(CITYCOLOR i) {
    if (i == 0)
        return QPixmap("images/blau.gif");
    else if (i == 4)
        return QPixmap("images/gelb.gif");
    else if (i == 1)
        return QPixmap("images/gruen.gif");
    else if (i == 2)
        return QPixmap("images/orange.gif");
    else if (i == 3)
        return QPixmap("images/rot.gif");
    else
        return QPixmap(" ");
}

//const QPen thinPen(Qt::darkGray, 1);
//const QPen thinRedPen(Qt::red, 1);
//const QPen fatPen(Qt::black, 4);
//const double sL = 30.4;






#endif // QKONSTANTEN_H
