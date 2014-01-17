#include "mainwindow.h"

MainWindow::MainWindow()
{
    myGameExe = new UIEXEC;
    wp = new Window(myGameExe->game1);

    setCentralWidget(wp);
    showMaximized();

}
