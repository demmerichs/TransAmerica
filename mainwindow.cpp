#include "mainwindow.h"

MainWindow::MainWindow()
{
    myGameExe = new UIEXEC;
    wp = new Window(myGameExe->doTheMagic());

    setCentralWidget(wp);
    showMaximized();

}
