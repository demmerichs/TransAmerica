#include "mainwindow.h"

MainWindow::MainWindow()
{
    myGameExe = new UIEXEC;
    wp = new Window(myGameExe->game1);
    myGameExe->doTheMagic();
    setCentralWidget(wp);

    //myToolBar = new QToolBar();
    showMaximized();

}
