//==============================
// included dependencies
#include "../../hdr/userinterface/GUIBoard.h"

#include <QPen>
#include <QPainter>
#include <QMouseEvent>
#include <cassert>
#include <cmath>
#include <iostream>
using std::abs;

#include "QConstants.h"
#include "DynamicState.h"
#include "../game/Board.h"
//==============================
const QPen thinPen(Qt::darkGray, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen thinRedPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen fatPen(Qt::black, 8, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen fatGreyPen(Qt::lightGray, 8, Qt::SolidLine, Qt::RoundCap,
		Qt::RoundJoin);
const QPen fatRedPen(QColor("#ff6c52"), 8, Qt::SolidLine, Qt::RoundCap,
		Qt::RoundJoin);
const double sL = 30.2;

enum Farbart {
	spielerfarbe, stadtfarbe
};

GUIBoard::GUIBoard(const Board* board, Counter points,
		DynamicState* dynamicState, const City** hand, int deadLine) :
		board(board), hand(hand), dynamicState(dynamicState), points(points), deadLine(
				deadLine), selectConnections(false), selectCoordinates(false) {
	drawCity = false;

	setBackgroundRole(QPalette::Dark);
	setAutoFillBackground(false);
	setMouseTracking(true);

	background = new QPixmap("images/tbg1.png");

	transform.translate(110.5 * 2, 57.5 * 2);
	transform.scale(1 * 2, sqrt(3) / 2. * 1.95);
	transform.shear(-0.5, 0);
	invertedTransform = transform.inverted();
	this->update();
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
	drawSelectedCoordinates(&painter);
	if (drawCity)
		drawCityNames(&painter);
	drawRat(&painter);
	drawPoints(&painter);
	painter.setWorldTransform(scale.inverted(), true);
}

void GUIBoard::drawCityChanged(bool enable) {
	drawCity = enable;
	update();
}

double distance(QPoint point) {
	double retVal = sqrt(
			(double) point.x() * point.x() + point.y() * point.y());
	return retVal;
}

void GUIBoard::mouseReleaseEvent(QMouseEvent* event) {
	if (selectConnections || selectCoordinates) {
		bool preferConnection;
		QPoint clickPoint = event->pos();
		clickPoint = scale.inverted().map(clickPoint);
		clickPoint = invertedTransform.map(clickPoint);
		QPointF clickF(clickPoint);
		clickPoint = transform.map(clickPoint);
		clickF = clickF / sL;
		int xMin, yMin;
		xMin = floor(clickF.x());
		yMin = floor(clickF.y());
		QPoint possiblePoints[] = { transform.map(QPoint(xMin, yMin) * sL),
				transform.map(QPoint(xMin + 1, yMin) * sL), transform.map(
						QPoint(xMin, yMin + 1) * sL), transform.map(
						QPoint(xMin + 1, yMin + 1) * sL) };
		Vector possibleVectors[] = { Vector(xMin, yMin), Vector(xMin + 1, yMin),
				Vector(xMin, yMin + 1), Vector(xMin + 1, yMin + 1) };
		Vector nearest = possibleVectors[0], secondNearest = possibleVectors[1];
		double nearDis = distance(clickPoint - possiblePoints[0]),
				secondNearDis = distance(clickPoint - possiblePoints[1]);
		for (int i = 1; i < 4; i++) {
			if (distance(clickPoint - possiblePoints[i]) < nearDis) {
				secondNearDis = nearDis;
				secondNearest = nearest;
				nearDis = distance(clickPoint - possiblePoints[i]);
				nearest = possibleVectors[i];
			} else if (distance(clickPoint - possiblePoints[i])
					< secondNearDis) {
				secondNearDis = distance(clickPoint - possiblePoints[i]);
				secondNearest = possibleVectors[i];
			}
		}
		if (selectCoordinates && selectConnections) {
			QPoint midPoint = transform.map(
					(QPoint(nearest.x + secondNearest.x,
							nearest.y + secondNearest.y)) * sL / 2.);
			if (distance(midPoint - clickPoint)
					< distance(
							transform.map(QPoint(nearest.x, nearest.y) * sL)
									- clickPoint))
				preferConnection = true;
			else
				preferConnection = false;
		}
		if (selectCoordinates && (!selectConnections || !preferConnection)) {
			const Coordinate* target =
					dynamicState->board.grid[nearest.x][nearest.y];
			dynamicState->setFromUserSelectedCoordinate(target);
		} else if (selectConnections
				&& (!selectCoordinates || preferConnection)) {
			Vector possibleConnection(0, 0);
			DIRECTION possibleConnectionDirection;
			if (nearest.x + nearest.y < secondNearest.x + secondNearest.y) {
				possibleConnection = nearest;
				possibleConnectionDirection =
						(secondNearest - nearest).direction();
			} else {
				possibleConnection = secondNearest;
				possibleConnectionDirection =
						(nearest - secondNearest).direction();
			}
			const Connection* targetConnection =
					dynamicState->board.edges[possibleConnection.x][possibleConnection.y][possibleConnectionDirection];
			dynamicState->setFromUserSelectedConnection(targetConnection);
		}
		update();
	}
}

void GUIBoard::drawGrid(QPainter* painter) {
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++) {
			if (dynamicState->board.edges[i][j][0]) {
				if ((dynamicState->board.edges[i][j][0])->barrier) {
					painter->setPen(thinRedPen);
				} else
					painter->setPen(thinPen);
				painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
						transform.map(QPoint(i * sL + sL, j * sL)));
			}
			if (dynamicState->board.edges[i][j][2]) {
				if (dynamicState->board.edges[i][j][2]->barrier) {
					painter->setPen(thinRedPen);
				} else
					painter->setPen(thinPen);
				painter->drawLine(transform.map(QPoint(i * sL, j * sL)),
						transform.map(QPoint(i * sL + sL, j * sL + sL)));
			}
			if (dynamicState->board.edges[i][j][1]) {
				if ((dynamicState->board.edges[i][j][1])->barrier) {
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
								QPoint(lastMove[i]->first->x * sL,
										lastMove[i]->first->y * sL)),
						transform.map(
								QPoint(lastMove[i]->second->x * sL,
										lastMove[i]->second->y * sL)));
	}
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			for (int k = 0; k < 3; k++)
				if (dynamicState->board.edges[i][j][k]) {
					if (dynamicState->getFromUserSelectedConnections()[i][j][k]) {
						const Connection* const current =
								dynamicState->board.edges[i][j][k];
						if (current->barrier)
							painter->setPen(fatRedPen);
						else
							painter->setPen(fatGreyPen);
						painter->drawLine(
								transform.map(
										QPoint(current->first->x * sL,
												current->first->y * sL)),
								transform.map(
										QPoint(current->second->x * sL,
												current->second->y * sL)));
					}
				}
}

void GUIBoard::drawPawns(QPainter *painter) {
	for (int k = 0; k < dynamicState->numberPawns; k++) {
		Pawn* i = dynamicState->unsortedPawns[k];
		Vector pos = *i;
		QBrush brush(getQColor(i->spielerfarbe));
		painter->setBrush(brush);
		QPoint point = transform.map(QPoint(pos.x * sL - 18, pos.y * sL - 25));
		painter->setPen(thinPen);
		painter->drawRoundedRect(point.x(), point.y(), 10 * 2, 25 * 2, 2, 2);
		if (dynamicState->playerStatus[i->spielerfarbe] != NOT_BANNED) {
			QString qstring = QString::fromStdString(
					bannedStatusToString(
							dynamicState->playerStatus[i->spielerfarbe]));
			QRect rect(point.x(), point.y(), 10 * 2, 25 * 2);
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
	painter->setFont(QFont("Times", 8 * 2, QFont::Bold));
	for (int i = 0; i < dynamicState->board.numberCities; i++) {
		QRect* rect = new QRect(
				transform.map(
						QPoint((townList[i]->x * sL - 200 + 5),
								(townList[i]->y * sL + 10))), QSize(800, 100));
		QRect boundingRect;
		boundingRect = painter->boundingRect(*rect,
				Qt::AlignHCenter | Qt::AlignTop,
				QString::fromStdString(townList[i]->name));
		boundingRect.setWidth(boundingRect.width() + 4);
		boundingRect.setHeight(boundingRect.height());
		boundingRect.setTopLeft(
				transform.map(QPoint(townList[i]->x * sL, townList[i]->y * sL))
						+ QPoint(-boundingRect.width() / 2, 16));
		boundingRect.setTop(boundingRect.top() - 1);
		painter->drawPixmap(boundingRect.topLeft(),
				schild->scaled(boundingRect.size()));
		painter->drawText(boundingRect, Qt::AlignCenter,
				QString::fromStdString(townList[i]->name));
	}
}

void GUIBoard::drawHand(QPainter* painter) {
	QPen coloredPen(fatPen);
	if (hand) {
		double size = 101.66 * 2;
		painter->setFont(QFont("Times", 10 * 2, QFont::Bold));
		QRect positionRect(0, background->height() - 40, size, 40);
		//Higlighted Cities
		for (int i = 0; i < 5; i++) {
			if (hand[i]) {
				painter->drawPixmap(
						transform.map(
								QPoint((hand[i]->x) * sL - 13,
										(hand[i]->y) * sL - 8.5)),
						getCity_hPixmap(hand[i]->cityColor));
				positionRect.moveRight(size * (i + 2));
				coloredPen.setColor(getQColorCity(hand[i]->cityColor));
				painter->setPen(coloredPen);
				painter->drawText(positionRect, Qt::AlignCenter,
						QString::fromStdString(hand[i]->name));
			}
		}
	}
}

void GUIBoard::drawRat(QPainter *painter) {
	for (int i = 0; i < (int) playerList.size(); i++) {
		painter->drawPixmap(
				585. / 16. * (points.get(playerList[i]) + 2) + 6.5 + 3 * i, i,
				getRatPixmap(playerList[i]->playerColor));
	}
	painter->setPen(fatPen);
	painter->drawLine(585. / 16. * (deadLine + 3), 0,
			585. / 16. * (deadLine + 3), 20);
}

void GUIBoard::drawPoints(QPainter* painter) {
	QRectF bRect(0, 272 * 2, 103 * 2, 19.2 * 2);
	QPen coloredPen(fatPen);
	painter->setFont(QFont("Times", 8 * 2, QFont::Bold));
	for (int i = 0; i < (int) playerList.size(); i++) {
		QString printString;
		printString = QString(" %1 (%2) %3").arg(
				QString::fromStdString(playerList[i]->AIname)).arg(
				QString::fromStdString(playerList[i]->owner)).arg(
				points.get(playerList[i]));
		coloredPen.setColor(getQColor(playerList[i]->playerColor));
		painter->setPen(coloredPen);
		painter->drawText(bRect, Qt::AlignCenter, printString);
		bRect.moveTop(bRect.top() + 19.2 * 2);
	}
}

void GUIBoard::drawSelectedCoordinates(QPainter* painter) {
	QPen special(fatPen);
	special.setWidth(10);
	painter->setPen(special);
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			if (dynamicState->board.grid[i][j]) {
				if (dynamicState->getFromUserSelectedCoordinates()[i][j]) {
					painter->drawPoint(transform.map(QPoint(i * sL, j * sL)));
				}
			}
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

void GUIBoard::setPlayerList(vector<AI*> playerList) {
	this->playerList = playerList;
}

void GUIBoard::setBoard(const Board* board) {
	this->board = board;
}
void GUIBoard::setDynamicState(const DynamicState* dyState) {
	if (dynamicState)
		delete dynamicState;
	dynamicState = dyState;
	board = &(dyState->board);
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
