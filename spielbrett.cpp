#include <QtGui>
#include "spielbrett.h"
#include <cmath>
#include "QKonstanten.h"

const QPen thinPen(Qt::darkGray, 1);
const QPen thinRedPen(Qt::red, 1);
const QPen fatPen(Qt::black, 4);
const double sL = 30.4;


bool testValid (int x,int y, int dir)
{
  if (x==MAX_X-1&&(dir==0||dir==1)) {return false;}
  else if (y==MAX_Y-1&&(dir==1||dir==2)) {return false;}
  else if (y>4&&x<y-4) {return false;}
  return true;
}
Spielbrett::Spielbrett(Window* parentalWindow, QWidget* parent)
    : QWidget(parent), parentalWindow(parentalWindow)
{

  //Füllen der Schienen
//  for(int a=0; a<0; a++){
//    zustandsvector.push_back();
//    for(int i=0; i<MAX_X; i++){
//      for (int j=0; j<MAX_Y; j++){
//          for (int k=0; k<3; k++){
//            Schienen[i][j][k]=false;
//          }
//      }
//   }
//  Schienen[5][7][0]=1;
  drawCity=false;
  setBackgroundRole(QPalette::Base);
  setAutoFillBackground(true);
}
void Spielbrett::paintEvent(QPaintEvent*)
{
  if(parentalWindow->zustandInitialized==false) {return;}
  QPainter painter(this);
  QTransform scale;
  scale.scale(2,2);
  painter.setWorldTransform(scale, true);
  painter.setPen(thinPen);
  painter.setRenderHints(QPainter::Antialiasing, true);
  painter.setPen(fatPen);
  QPixmap background;
  background.load("images/bg2.jpg");
  painter.drawPixmap(0,10.5, background);
  QPixmap blauCity;
  blauCity.load("images/blau.gif");
  QTransform transform;
  transform.translate(110.5,50.5);
  transform.scale(1 ,sqrt(3)/2.);
  transform.shear(-0.5,0);
  QTransform inverseTransform = transform.inverted();

  painter.setWorldTransform(transform, transform.isInvertible());
  //painter.drawLine(0,0,100,100);
  //painter.drawLine(0,0,0,100);
  //painter.drawLine(0,0,100,0);
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
  //aZp->Spielbrett.Stadtliste[i in range 34]->
  for(int i= 0; i<35; i++){
      if (parentalWindow->aZp->Spielbrett.Stadtliste[i]!=NULL)
      {
      cout << "i = " << i << "  x = " <<parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.x
           << "  y = " << parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.y << endl;
          // << "  Stadt = " << parentalWindow->aZp->Spielbrett.Stadtliste[i]->name<< endl;


      painter.drawPixmap(transform.map(QPoint(static_cast <short> (parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.x*sL)*sL-8.5,
                                               static_cast <short> (parentalWindow->aZp->Spielbrett.Stadtliste[i]->place.y)*sL-8.5)), blauCity);
      }
    }
  /**
    draws the poeppel
  for (int i=0; i<(parentalWindow->aZp->anzahlPoeppel); i++)
  {
      painter.drawRoundedRect(parentalWindow->aZp->getPoeppel(i).startposition.x,
                              parentalWindow->aZp->getPoeppel(i).startposition.y,
                              12, 25, 4, 4);

  }
*/
 }
void Spielbrett::zustandChanged(int counter)
{
  Schienen[counter][counter/2][0]=true;
  update();
}
void Spielbrett::drawCityChanged(bool enable)
{
  drawCity=enable;
  update();
}
QSize Spielbrett::minimumSizeHint() const
{
  return QSize(100,100);
}


QSize Spielbrett::sizeHint() const
{
 return QSize(1000,750);
}
