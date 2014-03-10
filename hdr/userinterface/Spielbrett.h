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
#include <QPixmap>

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
    void mouseReleaseEvent(QMouseEvent* event);

private:
	bool drawCity;
    QTransform transform;
    QTransform invertedTransform;
    QTransform scale;
	Window* parentalWindow;
    QPixmap* background;

    void drawGrid(QPainter* painter);
    void drawRailway(QPainter* painter);
    void drawPawns(QPainter* painter);
    void drawCitys(QPainter* painter);
    void drawCityNames(QPainter* painter);
    /**
      some functions to get along with proper drawings
    */
    void resizeEvent(QResizeEvent* event);
    QSize sizeHint();
    QSize minimumSizeHint();


};

#endif // SPIELBRETT_H
