#include <QtGui>
#include "../header/spielbrett.h"
#include <cmath>
#include "../header/QKonstanten.h"

const QPen thinPen(Qt::darkGray, 1);
const QPen thinRedPen(Qt::red, 1);
const QPen fatPen(Qt::black, 4);
const double sL = 30.2;

enum Farbart {
	spielerfarbe, stadtfarbe
};

QColor getQColor(PLAYERCOLOUR i) {
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

QPixmap getPixmap(CITYCOLOUR i) {
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

Spielbrett::Spielbrett(Window* parentalWindow, QWidget* parent) :
		parentalWindow(parentalWindow) {

	drawCity = false;
	setFixedSize(1220, 784);
	setBackgroundRole(QPalette::Base);
	setAutoFillBackground(true);
	setMouseTracking(true);
}
void Spielbrett::paintEvent(QPaintEvent*) {
	QPainter painter(this);

	if(!parentalWindow->zustandInitialized)
		return;

	QPixmap background("images/bg2.jpg");
//  QPixmap blueCity("images/blau.gif");
//  QPixmap greenCity("images/gruen.gif");
//  QPixmap yellowCity("images/gelb.gif");
//  QPixmap orangeCity("images/orange.gif");
//  QPixmap redCity("images/rot.gif");

	QTransform scale;
	scale.scale(2, 2);
	painter.setWorldTransform(scale, true);
	painter.drawPixmap(0, 0, background);
	QTransform transform;
	transform.translate(110.5, 40.5);
	transform.scale(1, sqrt(3) / 2.);
	transform.shear(-0.5, 0);
	QTransform inverseTransform = transform.inverted();
	painter.setWorldTransform(transform, true);

	painter.setRenderHints(QPainter::Antialiasing, true);

	/**
	 draws the Railway-System
	 */

	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++) {
			if (!(parentalWindow->aZp->Spielbrett.Kanten[i][j][0] == NULL)) {
				if (parentalWindow->aZp->schieneGelegt[i][j][0] == true) {
					painter.setPen(fatPen);
				} else if ((parentalWindow->aZp->Spielbrett.Kanten[i][j][0])->hindernis
						== true) {
					painter.setPen(thinRedPen);
				} else
					painter.setPen(thinPen);
				painter.drawLine(i * sL, j * sL, i * sL + sL, j * sL);
			}
			if (!(parentalWindow->aZp->Spielbrett.Kanten[i][j][2] == NULL)) {
				if (parentalWindow->aZp->schieneGelegt[i][j][2] == true) {
					painter.setPen(fatPen);
				} else if ((parentalWindow->aZp->Spielbrett.Kanten[i][j][2])->hindernis
						== true) {
					painter.setPen(thinRedPen);
				} else
					painter.setPen(thinPen);
				painter.drawLine(i * sL, j * sL, i * sL + sL, j * sL + sL);
			}
			if (!(parentalWindow->aZp->Spielbrett.Kanten[i][j][1] == NULL)) {
				if (parentalWindow->aZp->schieneGelegt[i][j][1] == true) {
					painter.setPen(fatPen);
				} else if ((parentalWindow->aZp->Spielbrett.Kanten[i][j][1])->hindernis
						== true) {
					painter.setPen(thinRedPen);
				} else
					painter.setPen(thinPen);
				painter.drawLine(i * sL, j * sL, i * sL, j * sL + sL);
			}
		}
	}
	/**
	 draws the names of the citys
	 */

	painter.setWorldTransform(inverseTransform, true);
	if (drawCity) {
		painter.drawText(transform.map(QPoint(0 + 5, 1 * sL)), tr("Portland"));
		painter.drawText(transform.map(QPoint(2 * sL + 5, 5 * sL)),
				tr("Sacramento"));
		painter.drawText(transform.map(QPoint(6 * sL + 5, 10 * sL)),
				tr("San Diego"));
		painter.drawText(transform.map(QPoint(19 * sL + 5, 12 * sL)),
				tr("Jacksonville"));
		painter.drawText(transform.map(QPoint(10 * sL + 5, 11 * sL)),
				tr("El Paso"));
	}
	/**
	 draw the city.gifs
	 */

	for (int i = 0; i < 35; i++) {
		if (parentalWindow->aZp->Spielbrett.Stadtliste[i] != NULL) {
			/*cout << "i = " << i << "  x = " <<parentalWindow->aZp->gameBoard.Stadtliste[i]->place.x
			 << "  y = " << parentalWindow->aZp->gameBoard.Stadtliste[i]->place.y << endl;
			 // << "  Stadt = " << parentalWindow->aZp->gameBoard.Stadtliste[i]->name<< endl;
			 */
			painter.drawPixmap(
					transform.map(
							QPoint(
									(parentalWindow->aZp->Spielbrett.Stadtliste[i]->x)
											* sL - 12,
									(parentalWindow->aZp->Spielbrett.Stadtliste[i]->y)
											* sL - 8.5)),
					getPixmap(
							parentalWindow->aZp->Spielbrett.Stadtliste[i]->cityColour));
		}
	}
	/* for(int i=0; i<2; i++)
	 {
	 for (int j=0; j<5; j++){
	 if (parentalWindow->simulationp->KIliste[i].handkarten[j]!=NULL)
	 {
	 painter.drawPixmap(transform.map(QPoint((parentalWindow->simulationp->KIliste[i].handkarten[j]->place.x)*sL-12,
	 (parentalWindow->simulationp->KIliste[i].handkarten[j]->place.y)*sL-8.5)),
	 QPixmap(getColor(parentalWindow->simulationp->KIliste[i].handkarten[j]->cityColour, stadtfarbe).s));
	 }
	 }
	 }*/

	//draws the poeppel
	for (int k = 0; k < parentalWindow->aZp->anzahlPoeppel; k++) {
		Pawn* i = parentalWindow->aZp->unsortedPawns[k];
		QBrush brush(getQColor(i->spielerfarbe));
		painter.setBrush(brush);
		QPoint point = transform.map(QPoint(i->x * sL - 18, i->y * sL - 25));
		painter.drawRoundedRect(point.x(), point.y(), 10, 25, 2, 2);
	}
}

void Spielbrett::zustandChanged(int counter) {
	update();
}
void Spielbrett::drawCityChanged(bool enable) {
	drawCity = enable;
	update();
}
/*
 QSize gameBoard::minimumSizeHint() const
 {
 return QSize(100,100);
 }


 QSize gameBoard::sizeHint() const
 {
 return QSize(1000,750);
 }
 */