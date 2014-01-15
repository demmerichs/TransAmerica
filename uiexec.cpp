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
    wp = new Window(game1);
    wp->setWindowTitle(tr("Transamerica - Testversion - GITHUB"));
    wp->show();
    wp->playAutomatically();
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
     connect(&(game1->zustandsListe), SIGNAL(emitGet(State*)), wp, SLOT(setZp(State*)));



}
