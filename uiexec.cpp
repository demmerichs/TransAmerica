#include "uiexec.h"

#include"KIspieler.h"
#include"testKI.h"
#include"MyFirstKI.h"
#include<iostream>

UIEXEC::UIEXEC(){
}
void UIEXEC::doTheMagic(){
    /**
      window implementation
      */
    wp = new Window;
    wp->setFixedSize(1500,1200);
    wp->setWindowTitle(tr("Transamerica - Testversion - GITHUB"));
    wp->show();
    /**
      call of the game algorithmus
      */
    board = new Brett;
    board->Ausgabe();
    testKI virt[] = { testKI(-1), testKI(-2) };
    game1 = new Game(2, 0, virt, *board);
    game1->spielen();

    /**
      connect this shit
      */
    // TODO some connects
     connect(wp, SIGNAL(requestZp(int)), &(game1->zustandsListe), SLOT(callGet(int)) );
     connect(&(game1->zustandsListe), SIGNAL(emitGet(Zustand*)), wp, SLOT(setZp(Zustand*)));



}
