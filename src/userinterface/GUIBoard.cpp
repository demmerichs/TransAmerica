//==============================
// included dependencies
#include "../../hdr/userinterface/GUIBoard.h"

#include <QPen>
#include <QPainter>
#include <QMouseEvent>
#include <cassert>
#include <cmath>
using std::abs;

#include "QConstants.h"
#include "DynamicState.h"
#include "../game/Board.h"
//==============================
const QPen thinPen(Qt::darkGray, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen thinRedPen(Qt::red, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen fatPen(Qt::black, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen fatGreyPen(Qt::lightGray, 4, Qt::SolidLine, Qt::RoundCap,
		Qt::RoundJoin);
const QPen fatRedPen(QColor("#ff6c52"), 4, Qt::SolidLine, Qt::RoundCap,
		Qt::RoundJoin);
const double sL = 30.2;

enum Farbart {
	spielerfarbe, stadtfarbe
};

GUIBoard::GUIBoard(const Board* board, Counter points,
		DynamicState* dynamicState, const City** hand, int deadLine) :
		board(board), hand(hand), dynamicState(dynamicState), points(points), deadLine(
				deadLine) {
	drawCity = false;

	setBackgroundRole(QPalette::Base);
	setAutoFillBackground(false);
	setMouseTracking(true);

	background = new QPixmap("images/bg1.png");

	transform.translate(110.5, 57.5);
	transform.scale(1, sqrt(3) / 2.);
	transform.shear(-0.5, 0);
	invertedTransform = transform.inverted();
}

void GUIBoard::paintEvent(QPaintEvent*) {
	QPainter painter(this);
	painter.setWorldTransform(scale, true);
	painter.drawPixmap(0, 0, *background);

	if (!dynamicState) {
		painter.drawText(background->rect(), Qt::AlignCenter,
				"NO VALID DATA LOADED");
		return;
	}

	painter.setRenderHints(QPainter::Antialiasing, true);

	/**
	 draws the Railway-System
	 */
	drawGrid(&painter);
	drawRailway(&painter);
	drawCitys(&painter);
	drawHand(&painter);
	drawPawns(&painter);
	if (drawCity)
		drawCityNames(&painter);
	drawRat(&painter);
	painter.setWorldTransform(scale.inverted(), true);
}

void GUIBoard::drawCityChanged(bool enable) {
	drawCity = enable;
	update();
}

void GUIBoard::mouseReleaseEvent(QMouseEvent* event) {
	QPoint clickPoint = event->pos();
	clickPoint = scale.inverted().map(clickPoint);
	clickPoint = invertedTransform.map(clickPoint);
	double x, y, z;
	x = clickPoint.x() / sL;
	y = clickPoint.y() / sL;
	z = x - y;
	double xDev, yDev, zDev;
	int resultX, resultY;
	int resultDirection;
	xDev = fmod(x, 1.0) - 0.5;
	yDev = fmod(y, 1.0) - 0.5;
	zDev = ((fmod(z, 1.0) >= 0) ? fmod(z, 1.0) : 1.0 + fmod(z, 1.0)) - 0.5;
	if (abs(xDev) >= abs(yDev) && abs(xDev) >= abs(zDev)) {
		resultDirection = SOUTH_WEST;
		if (xDev > 0)
			resultX = ceil(x);
		else
			resultX = floor(x);
		resultY = floor(y);
	} else if (abs(yDev) >= abs(xDev) && abs(yDev) >= abs(zDev)) {
		resultDirection = EAST;
		resultX = floor(x);
		if (yDev > 0)
			resultY = ceil(y);
		else
			resultY = floor(y);
	} else if (abs(zDev) >= abs(xDev) && abs(zDev) >= abs(yDev)) {
		resultDirection = SOUTH_EAST;
		resultX = floor(x);
		resultY = floor(y);
	} else
		assert(false);
	dynamicState->fromUserSelectedRails[resultX][resultY][resultDirection] =
			!dynamicState->fromUserSelectedRails[resultX][resultY][resultDirection];
	update();
}

void GUIBoard::drawGrid(QPainter* painter) {
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++) {
			if (dynamicState->board.edges[i][j][0]) {
				if ((dynamicState->board.edges[i][j][0])->hindernis) {
					painter->setPen(thinRedPen);
				} else
					painter->setPen(thinPen);
				painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
						transform.map(QPoint(i * sL + sL, j * sL)));
			}
			if (dynamicState->board.edges[i][j][2]) {
				if (dynamicState->board.edges[i][j][2]->hindernis) {
					painter->setPen(thinRedPen);
				} else
					painter->setPen(thinPen);
				painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
						transform.map(QPoint(i * sL + sL, j * sL + sL)));
			}
			if (dynamicState->board.edges[i][j][1]) {
				if ((dynamicState->board.edges[i][j][1])->hindernis) {
					painter->setPen(thinRedPen);
				} else
					painter->setPen(thinPen);
				painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
						transform.map(QPoint(i * sL, j * sL + sL)));
			}
		}
	}
}

void GUIBoard::drawRailway(QPainter *painter) {
	painter->setPen(fatPen);
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++) {
			if (dynamicState->board.edges[i][j][0]) {
				if (dynamicState->railSet[i][j][0]) {
					painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
							transform.map(QPoint(i * sL + sL, j * sL)));
				}
			}
			if (dynamicState->board.edges[i][j][2]) {
				if (dynamicState->railSet[i][j][2]) {
					painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
							transform.map(QPoint(i * sL + sL, j * sL + sL)));
				}
			}
			if (dynamicState->board.edges[i][j][1]) {
				if (dynamicState->railSet[i][j][1]) {
					painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
							transform.map(QPoint(i * sL, j * sL + sL)));
				}
			}
		}
	}
	if (dynamicState->lastMove) {
		painter->setPen(
				QPen(getQColor(dynamicState->lastMove->getSpielerfarbe()), 4,
						Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
		const Connection* const * lastMove =
				dynamicState->lastMove->getBelegt();
		for (int i = 0; i < 2; i++)
			if (lastMove[i])
				painter->drawLine(
						transform.map(
								QPoint(lastMove[i]->first.x * sL,
										lastMove[i]->first.y * sL)),
						transform.map(
								QPoint(lastMove[i]->second.x * sL,
										lastMove[i]->second.y * sL)));
	}
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			for (int k = 0; k < 3; k++)
				if (dynamicState->board.edges[i][j][k]) {
					if (!dynamicState->railSet[i][j][k]
							&& dynamicState->fromUserSelectedRails[i][j][k]) {
						const Connection* const current =
								dynamicState->board.edges[i][j][k];
						if (current->hindernis)
							painter->setPen(fatRedPen);
						else
							painter->setPen(fatGreyPen);
						painter->drawLine(
								transform.map(
										QPoint(current->first.x * sL,
												current->first.y * sL)),
								transform.map(
										QPoint(current->second.x * sL,
												current->second.y * sL)));
					}
				}
}

void GUIBoard::drawPawns(QPainter *painter) {
	for (int k = 0; k < dynamicState->numberPawns; k++) {
		Pawn* i = dynamicState->unsortedPawns[k];
		QBrush brush(getQColor(i->spielerfarbe));
		painter->setBrush(brush);
		QPoint point = transform.map(QPoint(i->x * sL - 18, i->y * sL - 25));
		painter->setPen(thinPen);
		painter->drawRoundedRect(point.x(), point.y(), 10, 25, 2, 2);
		if (dynamicState->playerStatus[i->spielerfarbe] != NOT_BANNED) {
			QString qstring = QString::fromStdString(
					bannedStatusToString(
							dynamicState->playerStatus[i->spielerfarbe]));
			QRect rect(point.x(), point.y(), 10, 25);
			painter->setPen(fatPen);
			painter->setFont(QFont("Times", 10, QFont::Bold));
			painter->drawText(rect, Qt::AlignCenter, qstring);
		}
	}
}

void GUIBoard::drawCitys(QPainter *painter) {
	for (int i = 0; i < board->numberCities; i++) {
		if (dynamicState->board.cityList[i]) {
			/*cout << "i = " << i << "  x = " <<dynamicState->gameBoard.cityList[i]->place.x
			 << "  y = " << dynamicState->gameBoard.cityList[i]->place.y << endl;
			 // << "  Stadt = " << dynamicState->gameBoard.cityList[i]->name<< endl;
			 */
			painter->drawPixmap(
					transform.map(
							QPoint(
									(dynamicState->board.cityList[i]->x) * sL
											- 13,
									(dynamicState->board.cityList[i]->y) * sL
											- 8.5)),
					getCityPixmap(dynamicState->board.cityList[i]->cityColor));
		}
	}
}

void GUIBoard::drawCityNames(QPainter* painter) {
	QPixmap* schild = new QPixmap("images/schildkl.gif");
	const City* const * townList = dynamicState->board.cityList;
	painter->setPen(fatPen);
	painter->setFont(QFont("Times", 8, QFont::Bold));
	for (int i = 0; i < dynamicState->board.numberCities; i++) {
		QRect* rect = new QRect(
				transform.map(
						QPoint(townList[i]->x * sL - 200 + 5,
								townList[i]->y * sL + 10)), QSize(400, 50));
		QRect boundingRect;
		boundingRect = painter->boundingRect(*rect,
				Qt::AlignHCenter | Qt::AlignTop,
				QString::fromStdString(townList[i]->name));
		boundingRect.setWidth(boundingRect.width() + 4);
		boundingRect.setHeight(boundingRect.height());
		boundingRect.setTopLeft(
				transform.map(QPoint(townList[i]->x * sL, townList[i]->y * sL))
						+ QPoint(-boundingRect.width() / 2, 8));
		boundingRect.setTop(boundingRect.top() - 1);
		painter->drawPixmap(boundingRect.topLeft(),
				schild->scaled(boundingRect.size()));
		painter->drawText(boundingRect, Qt::AlignCenter,
				QString::fromStdString(townList[i]->name));
	}
}

void GUIBoard::drawHand(QPainter* painter) {
	if (hand) {
		double size = 101.66;
		painter->setPen(fatPen);
		painter->setFont(QFont("Times", 10, QFont::Bold));
		QRect positionRect(0, background->height() - 20, size, 20);
		//Higlighted Cities
		for (int i = 0; i < 5; i++) {
			if (hand[i]) {
				painter->drawPixmap(
						transform.map(
								QPoint((hand[i]->x) * sL - 13,
										(hand[i]->y) * sL - 8.5)),
						getCity_hPixmap(hand[i]->cityColor));
				positionRect.moveRight(size * (i + 2));
				painter->drawText(positionRect, Qt::AlignCenter,
						QString::fromStdString(hand[i]->name));
			}
		}
	}
}

void GUIBoard::drawRat(QPainter *painter) {
	for (int i = 0; i < dynamicState->numberPawns; i++) {
		painter->drawPixmap(
				585. / 16.
						* (points.get(
								dynamicState->unsortedPawns[i]->spielerfarbe)
								+ 2) + 6.5 + 3 * i, i,
				getRatPixmap(dynamicState->unsortedPawns[i]->spielerfarbe));
	}
	painter->setPen(fatPen);
	painter->drawLine(585. / 16. * (deadLine + 3), 0,
			585. / 16. * (deadLine + 3), 20);
}

void GUIBoard::resizeEvent(QResizeEvent *event) {
	QSize size = event->size();
	double Width = size.rwidth();
	double Height = size.rheight();
	double ImageWidth = background->width();
	double ImageHeight = background->height();
	double scaleFactor;
	if (Width / ImageWidth <= Height / ImageHeight)
		scaleFactor = Width / ImageWidth;
	else
		scaleFactor = Height / ImageHeight;
	scale = QTransform::fromScale(scaleFactor, scaleFactor);
}
QSize GUIBoard::minimumSizeHint() {
	return QSize(610, 392);
}
QSize GUIBoard::sizeHint() {
	return QSize(1220, 784);
}

void GUIBoard::setBoard(const Board* board) {
	this->board = board;
}
void GUIBoard::setDynamicState(const DynamicState* dynamicState) {
	if (this->dynamicState)
		delete this->dynamicState;
	this->dynamicState = dynamicState;
	this->board = &(dynamicState->board);
}

void GUIBoard::setHand(const City** hand) {
	this->hand = hand;
}

void GUIBoard::setPoints(Counter points) {
	this->points = points;
}

void GUIBoard::setDeadLine(int deadLine) {
	this->deadLine = deadLine;
}
