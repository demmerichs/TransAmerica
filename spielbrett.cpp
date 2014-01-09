#include <QtGui>
#include "spielbrett.h"
#include <cmath>


const QPen thinPen(Qt::darkGray, 1);
const QPen fatPen(Qt::black, 4);
const double sL = 30.4;

bool testValid (int x,int y, int dir)
{
  if (x==MAX_X-1&&(dir==0||dir==1)) {return false;}
  else if (y==MAX_Y-1&&(dir==1||dir==2)) {return false;}
  else if (y>4&&x<y-4) {return false;}
  else if (y>4&&x==y-4&&dir==2) {return false;}
  else if (y==4&&x==0) {return false;}

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
  //if (!((parentalWindow->aktuellerZustand)==NULL)) {return;}
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
        if (Schienen[i][j][0]==true){ painter.setPen(fatPen);}
        else painter.setPen(thinPen);
        if (testValid(i,j,0)) painter.drawLine(i*sL, j*sL, i*sL+sL, j*sL);

        if (Schienen[i][j][1]==true){ painter.setPen(fatPen);}
        else painter.setPen(thinPen);
        if (testValid(i,j,1)) painter.drawLine(i*sL, j*sL, i*sL+sL, j*sL+sL);

        if (Schienen[i][j][2]==true){ painter.setPen(fatPen);}
        else painter.setPen(thinPen);
        if (testValid(i,j,2)) painter.drawLine(i*sL, j*sL, i*sL, j*sL+sL);
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
    painter.drawPixmap(transform.map(QPoint(0-blauCity.width()/2., 1*sL-blauCity.height()/2.)), blauCity);



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
