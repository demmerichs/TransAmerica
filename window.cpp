#include <QtGui>

#include "window.h"
#include "spielbrett.h"
#include <iostream>



Window::Window()
{
  pofp1 =new QLabel (tr("Portland"));
  pofp2 =new QLabel (tr("Sacramento"));
  pofp3 =new QLabel (tr("San Diego"));
  pofp4 =new QLabel (tr("El Paso"));
  pofp5 =new QLabel (tr("Jacksonville"));
  pofp6 =new QLabel (tr(""));

  toolBoxLabel =new QLabel (tr("ToolBox"));
  QFont font = toolBoxLabel->font();
  font.setBold(true);
  font.setUnderline(true);
  font.setPointSize(font.pointSize()*1.4);

  toolBoxLabel->setFont(font);
  vektorSpinBox =new QSpinBox;
  showTownsCheckBox = new QCheckBox;
  vektorSpinBox->setRange(0,1000);
  vektorSpinBox->setWrapping(false);
  vektorSpinBox->setSuffix(tr(". Zustand"));
  spielbrett = new Spielbrett(this);

  /**
    Layout-Design
    */
  QGridLayout* mainLayout = new QGridLayout;
  QFormLayout* toolLayout = new QFormLayout;
  mainLayout->addWidget(pofp1, 1,0,Qt::AlignHCenter );
  mainLayout->addWidget(pofp2, 1,1,Qt::AlignHCenter );
  mainLayout->addWidget(pofp3, 1,2,Qt::AlignHCenter );
  mainLayout->addWidget(pofp4, 1,3,Qt::AlignHCenter );
  mainLayout->addWidget(pofp5, 1,4,Qt::AlignHCenter );
  mainLayout->addWidget(pofp6, 1,5,Qt::AlignHCenter );
  mainLayout->addWidget(spielbrett, 0, 0, 1, 6);
  mainLayout->addLayout(toolLayout, 0, 7, 3, 1);
  toolLayout->addRow(toolBoxLabel);
  toolLayout->addRow(tr("Geladener Zustand:"), vektorSpinBox);
  toolLayout->addRow(tr("Zeige Staedte:"), showTownsCheckBox);
  setLayout(mainLayout);

  /**
    Connect-Implementationen
    */
  setWindowTitle(tr("Transamerica - Das Spiel (Testversion 1.0)"));
  //connect(vektorSpinBox, SIGNAL(valueChanged(int)), spielbrett, SLOT(zustandChanged(int)));
  connect(vektorSpinBox, SIGNAL(valueChanged(int)), this, SLOT(setZustandscounter(int)));
  connect(showTownsCheckBox, SIGNAL(toggled(bool)), spielbrett, SLOT(drawCityChanged(bool)));
  //setStyleSheet(" background-color: blue");
}

void Window::setZp(Zustand *aktuellerZustand){
    cout << "Aufruf von setZp" << endl;
    aZp=aktuellerZustand;
    zustandInitialized=true;
    spielbrett->update();
}
void Window::setZustandscounter(int i){
    cout << i << endl;
    Zustandcounter= i;
    requestZp(i);
}
