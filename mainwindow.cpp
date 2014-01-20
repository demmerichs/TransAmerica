#include "mainwindow.h"

MainWindow::MainWindow()
{
    myGameExe = new UIEXEC;
    wp = new Window(myGameExe->game1);
    myGameExe->doTheMagic();
    setCentralWidget(wp);
    myToolBar = addToolBar(tr("Test"));
   // connect(wp->newGameButton, SIGNAL(toggled(bool)), this, SLOT(newGame(bool))));

    //myToolBar = new QToolBar();
    showMaximized();

}

void MainWindow::newGame(bool isTrue)
{
//    UIEXEC newGameExe;
//    wp->setGamep(newGameExe->game1);
//    newGameExe->dotheMagic();
}

