//==============================
// include guards
#ifndef SPIELBRETT_H
#define SPIELBRETT_H
//==============================
// forward declared dependencies
class Window;
class City;
//==============================
// included dependencies
#include <QWidget>
#include <QColor>
#include <QPen>
#include <QPixmap>

#include "../game/Constants.h"
#include "../game/State.h"
#include "../../hdr/game/Board.h"
#include "../../hdr/game/City.h"
#include "../../hdr/game/Connection.h"
#include "../../hdr/game/Pawn.h"
#include "../../hdr/userinterface/Window.h"
#include "../../hdr/userinterface/DynamicState.h"
#include "../../hdr/userinterface/QKonstanten.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/game/Counter.h"
//==============================
// the actual class
class Spielbrett: public QWidget {
Q_OBJECT
	friend class Window;
	friend class ShowSimulationWindow;
public:
	const Board& board;
	Spielbrett(const Board& board, DynamicState* dynamicState, Counter points);
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
	QPixmap* background;
	const City** hand;
	DynamicState* dynamicState;
	Counter points;

	void drawGrid(QPainter* painter);
	void drawRailway(QPainter* painter);
	void drawPawns(QPainter* painter);
	void drawCitys(QPainter* painter);
	void drawCityNames(QPainter* painter);
	void drawHand(QPainter* painter);
	/**
	 some functions to get along with proper drawings
	 */
	void resizeEvent(QResizeEvent* event);
	QSize sizeHint();
	QSize minimumSizeHint();

};

#endif // SPIELBRETT_H
