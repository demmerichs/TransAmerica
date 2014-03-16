//==============================
// include guards
#ifndef GUIBOARD_H_
#define GUIBOARD_H_
//==============================
// forward declared dependencies
class Window;
class City;
class DynamicState;
class QPixmap;
class Move;
class Board;
//==============================
// included dependencies
#include <QWidget>

#include "../game/Counter.h"
//==============================
// the actual class
class GUIBoard: public QWidget {
Q_OBJECT
private:
	bool drawCity;
	QTransform transform;
	QTransform invertedTransform;
	QTransform scale;
	QPixmap* background;

	vector<AI*> playerList;
	const Board* board;
	const City** hand;
	const DynamicState* dynamicState;
	Counter points;
	int deadLine;

	/*draw group*/
	void drawGrid(QPainter* painter);
	void drawRailway(QPainter* painter);
	void drawPawns(QPainter* painter);
	void drawCitys(QPainter* painter);
	void drawCityNames(QPainter* painter);
	void drawHand(QPainter* painter);
	void drawRat(QPainter* painter);
    void drawPoints(QPainter* painter);
	void drawSelectedCoordinates(QPainter* painter);
	/**
	 some functions to get along with proper drawings
	 */
	void resizeEvent(QResizeEvent* event);
	QSize sizeHint();
	QSize minimumSizeHint();
protected:
	void paintEvent(QPaintEvent* event);
	void mouseReleaseEvent(QMouseEvent* event);
public:
	bool selectConnections;
	bool selectCoordinates;
	GUIBoard(const Board* board, Counter points, DynamicState* dynamicState = 0,
			const City** hand = 0, int deadLine = 0);
	void setPlayerList(vector<AI*> aiList);
	void setBoard(const Board* board);
	void setDynamicState(const DynamicState* dynamicState);
	void setHand(const City** hand);
	void setPoints(Counter points);
	void setDeadLine(int deadLine);
public slots:
	void drawCityChanged(bool);
};

#endif /* GUIBOARD_H_ */
