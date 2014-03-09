//==============================
// include guards
#ifndef SPIELBRETT_H
#define SPIELBRETT_H
//==============================
// forward declared dependencies
class Window;
//==============================
// included dependencies
#include <QWidget>
#include <QColor>
#include <QPen>

#include "../game/Constants.h"
#include "../game/State.h"
//==============================
// the actual class
class Spielbrett: public QWidget {
Q_OBJECT
public:
	Spielbrett(Window* parentalWindow);
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
    void drawGrid(QPainter* painter);
    void drawRailway(QPainter* painter);
    void drawPawns(QPainter* painter);
};

#endif // SPIELBRETT_H
