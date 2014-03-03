#include "../header/mainwindow.h"

MainWindow::MainWindow()
{
    myGameExe = new UIEXEC;
    wp = new Window(myGameExe->simulation);

    setCentralWidget(wp);
    showMaximized();

}
