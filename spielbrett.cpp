#include <QtGui>
#include "spielbrett.h"
#include <cmath>
#include "QKonstanten.h"

const QPen thinPen(Qt::darkGray, 1);
const QPen thinRedPen(Qt::red, 1);
const QPen fatPen(Qt::black, 4);
const double sL = 30.2;

enum Farbart{
    spielerfarbe, stadtfarbe
};

struct Mycolor{
    QColor q;
    char* s;

};

Mycolor getColor (int i, Farbart art)
{
    Mycolor rV;
    switch (art)
    {
    case spielerfarbe:
        assert(i<=-1&&i>=-6);
        if (i==-1)  rV.q=(QColor(Qt::blue));
        else if (i==-2)  rV.q=(QColor(Qt::yellow));
        else if (i==-3)  rV.q=(QColor(Qt::green));
        else if (i==-4)  rV.q=(QColor(Qt::magenta));
        else if (i==-5)  rV.q=(QColor("#ffa500"));
        else if (i==-6)  rV.q=(QColor(Qt::white));
        break;
    case stadtfarbe:
        //assert(i>=0&&i<=5); //Müll, da Stadtliste nicht konsistent
        if (i==1)  rV.s=("images/blau.gif");
        else if (i==2)  rV.s=("images/gelb.gif");
        else if (i==3)  rV.s=("images/gruen.gif");
        else if (i==4)  rV.s=("images/orange.gif");
        else if (i==5)  rV.s=("images/rot.gif");
        else rV.s=(" ");
    default:
        rV.q=(QColor(Qt::black));

    }
    return rV;
}


Spielbrett::Spielbrett(Window* parentalWindow, QWidget* parent)
    :parentalWindow(parentalWindow)
{

  drawCity=false;
  setFixedSize(1220,784);
  setBackgroundRole(QPalette::Base);
  setAutoFillBackground(true);
}
void Spielbrett::paintEvent(QPaintEvent*)
{
  QPainter painter(this);


  if(parentalWindow->zustandInitialized==false) {return;}
  QPixmap background("images/bg2.jpg");
//  QPixmap blueCity("images/blau.gif");
//  QPixmap greenCity("images/gruen.gif");
//  QPixmap yellowCity("images/gelb.gif");
//  QPixmap orangeCity("images/orange.gif");
//  QPixmap redCity("images/rot.gif");

  QTransform scale;
  scale.scale(2,2);
  painter.setWorldTransform(scale, true);
  painter.drawPixmap(0,0, background);
  QTransform transform;
  transform.translate(110.5,40.5);
  transform.scale(1 ,sqrt(3)/2.);
  transform.shear(-0.5,0);
  QTransform inverseTransform = transform.inverted();
  painter.setWorldTransform(transform, true);


  painter.setRenderHints(QPainter::Antialiasing, true);

/**
  draws the Railway-System
  */

  for(int i=0; i<MAX_X; i++){
    for (int j=0; j<MAX_Y; j++){
       if (!(parentalWindow->aZp->Spielbrett.Kanten[i][j][0]==NULL))
       {
        if (parentalWindow->aZp->schieneGelegt[i][j][0]==true){ painter.setPen(fatPen);}
        else if((parentalWindow->aZp->Spielbrett.Kanten[i][j][0])->hindernis==true){ painter.setPen(thinRedPen);}
        else painter.setPen(thinPen);
        painter.drawLine(i*sL, j*sL, i*sL+sL, j*sL);
       }
       if (!(parentalWindow->aZp->Spielbrett.Kanten[i][j][2]==NULL))
       {
        if (parentalWindow->aZp->schieneGelegt[i][j][2]==true){ painter.setPen(fatPen);}
        else if((parentalWindow->aZp->Spielbrett.Kanten[i][j][2])->hindernis==true){ painter.setPen(thinRedPen);}
        else painter.setPen(thinPen);
        painter.drawLine(i*sL, j*sL, i*sL+sL, j*sL+sL);
       }
       if (!(parentalWindow->aZp->Spielbrett.Kanten[i][j][1]==NULL))
       {
        if (parentalWindow->aZp->schieneGelegt[i][j][1]==true){ painter.setPen(fatPen);}
        else if ((parentalWindow->aZp->Spielbrett.Kanten[i][j][1])->hindernis==true){ painter.setPen(thinRedPen);}
        else painter.setPen(thinPen);
        painter.drawLine(i*sL, j*sL, i*sL, j*sL+sL);
       }
    }
   }
  /**
    draws the names of the citys
    */

  painter.setWorldTransform(inverseTransform, true);
  if (drawCity){
      painter.drawText(transform.map(QPoint(0+5, 1*sL)), tr("Portland"));
      painter.drawText(transform.map(QPoint(2*sL+5, 5*sL)), tr("Sacramento"));
      painter.drawText(transform.map(QPoint(6*sL+5, 10*sL)), tr("San Diego"));
      painter.drawText(transform.map(QPoint(19*sL+5, 12*sL)), tr("Jacksonville"));
      painter.drawText(transform.map(QPoint(10*sL+5, 11*sL)), tr("El Paso"));
    }
  /**
    draw the city.gifs
    */

  for(int i= 0; i<35; i++){
      if (parentalWindow->aZp->Spielbrett.Stadtliste[i]!=NULL)
      {
      /*cout << "i = " << i << "  x = " <<parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.x
           << "  y = " << parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.y << endl;
          // << "  Stadt = " << parentalWindow->aZp->Spielbrett.Stadtliste[i]->name<< endl;
*/
      painter.drawPixmap(transform.map(QPoint((parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.x)*sL-12,
                                               (parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.y)*sL-8.5)),
                                        QPixmap(getColor(parentalWindow->aZp->Spielbrett.Stadtliste[i]->cityColour, stadtfarbe).s));
      }
    }
   //TODO find solution to draw Handkarten without segmentation fault
  /* for(int i=0; i<2; i++)
  {
      for (int j=0; j<5; j++){
          if (parentalWindow->gamep->KIliste[i].handkarten[j]!=NULL)
          {
              painter.drawPixmap(transform.map(QPoint((parentalWindow->gamep->KIliste[i].handkarten[j]->place.x)*sL-12,
                                                       (parentalWindow->gamep->KIliste[i].handkarten[j]->place.y)*sL-8.5)),
                                                QPixmap(getColor(parentalWindow->gamep->KIliste[i].handkarten[j]->cityColour, stadtfarbe).s));
          }
      }
  }*/

  //draws the poeppel
  for (int i=-1; i>=-2;i--)
  {
      QBrush brush(getColor(i, spielerfarbe).q);
      painter.setBrush(brush);
      QPoint point = transform.map(QPoint(parentalWindow->aZp->getPoeppel(i).startposition.x*sL-18,
              parentalWindow->aZp->getPoeppel(i).startposition.y*sL-25));

      painter.drawRoundedRect(point.x(),point.y(),
                              10, 25, 2, 2);

  }
 }

void Spielbrett::zustandChanged(int counter)
{
  update();
}
void Spielbrett::drawCityChanged(bool enable)
{
  drawCity=enable;
  update();
}
/*
QSize Spielbrett::minimumSizeHint() const
{
  return QSize(100,100);
}


QSize Spielbrett::sizeHint() const
{
 return QSize(1000,750);
}
*/
