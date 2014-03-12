//==============================
// included dependencies
#include <cmath>
using std::abs;

#include "../../hdr/userinterface/Spielbrett.h"

//==============================
const QPen thinPen(Qt::darkGray, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen thinRedPen(Qt::red, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen fatPen(Qt::black, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
const QPen fatGreyPen(Qt::lightGray, 4, Qt::SolidLine, Qt::RoundCap,
		Qt::RoundJoin);
const QPen fatRedPen(QColor("#ff6c52"), 4, Qt::SolidLine, Qt::RoundCap,
		Qt::RoundJoin); //TODO light red
const double sL = 30.2;

enum Farbart {
	spielerfarbe, stadtfarbe
};

Spielbrett::Spielbrett(const Board& board, DynamicState* dynamicState,
		Counter points) :
		board(board), dynamicState(dynamicState), points(points) {
	drawCity = false;
	setBackgroundRole(QPalette::Base);
	setAutoFillBackground(false);
	setMouseTracking(true);

	background = new QPixmap("images/bg2.jpg");

	transform.translate(110.5, 40.5);
	transform.scale(1, sqrt(3) / 2.);
	transform.shear(-0.5, 0);
	invertedTransform = transform.inverted();
}

void Spielbrett::paintEvent(QPaintEvent*) {
	QPainter painter(this);
	painter.setWorldTransform(scale, true);
	painter.drawPixmap(0, 0, *background);

	if (!dynamicState) {
		painter.drawText(this->width() / 2, this->height() / 2,
				"NO VALID SIMULATION LOADED");
		return;
	}

	painter.setRenderHints(QPainter::Antialiasing, true);

	/**
	 draws the Railway-System
	 */
	drawGrid(&painter);
	drawRailway(&painter);

	drawCitys(&painter);
	if (drawCity)
		drawCityNames(&painter);
	drawPawns(&painter);
	painter.setWorldTransform(scale.inverted(), true);
}

void Spielbrett::zustandChanged(int counter) {
	update();
}

void Spielbrett::drawCityChanged(bool enable) {
	drawCity = enable;
	update();
}

void Spielbrett::mouseReleaseEvent(QMouseEvent* event) {
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

void Spielbrett::drawGrid(QPainter* painter) {
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

void Spielbrett::drawRailway(QPainter *painter) {
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

void Spielbrett::drawPawns(QPainter *painter) {
	painter->setPen(thinPen);
	for (int k = 0; k < dynamicState->numberPawns; k++) {
		Pawn* i = dynamicState->unsortedPawns[k];
		QBrush brush(getQColor(i->spielerfarbe));
		painter->setBrush(brush);
		QPoint point = transform.map(QPoint(i->x * sL - 18, i->y * sL - 25));
		painter->drawRoundedRect(point.x(), point.y(), 10, 25, 2, 2);
	}
}

void Spielbrett::drawCitys(QPainter *painter) {
	for (int i = 0; i < 35; i++) {
		if (dynamicState->board.cityList[i] != NULL) {
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
					getPixmap(dynamicState->board.cityList[i]->cityColor));
		}
	}
}

void Spielbrett::drawCityNames(QPainter* painter) {
	QPixmap* schild = new QPixmap("images/schildkl.gif");
	const City* const * townList = dynamicState->board.cityList;
	painter->setPen(fatPen);
	painter->setFont(QFont("Times", 7, QFont::Bold));
	for (int i = 0; i < dynamicState->board.numberCities; i++) {
		QRect* rect = new QRect(
				transform.map(
						QPoint(townList[i]->x * sL - 200 + 5,
								townList[i]->y * sL + 10)), QSize(400, 50));
		QRect* boundingRect = new QRect;
		painter->drawText(*rect, Qt::AlignHCenter | Qt::AlignTop,
				QString::fromStdString(townList[i]->name), boundingRect);
		boundingRect->setWidth(boundingRect->width() + 4);
		boundingRect->setHeight(boundingRect->height() + 2);
		boundingRect->setTopLeft(
				transform.map(QPoint(townList[i]->x * sL, townList[i]->y * sL))
						+ QPoint(-boundingRect->width() / 2, 8));
		boundingRect->setTop(boundingRect->top() - 1);
		painter->drawPixmap(boundingRect->topLeft(),
				schild->scaled(boundingRect->size()));
		painter->drawText(*boundingRect, Qt::AlignCenter,
				QString::fromStdString(townList[i]->name));
	}
}

void Spielbrett::drawHand(QPainter* painter) {

}

void Spielbrett::resizeEvent(QResizeEvent *event) {
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
QSize Spielbrett::minimumSizeHint() {
	return QSize(610, 392);
}
QSize Spielbrett::sizeHint() {
	return QSize(1220, 784);
}
