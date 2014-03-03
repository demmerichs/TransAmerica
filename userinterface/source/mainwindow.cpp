#include "../header/mainwindow.h"
#include "../header/window.h"

MainWindow::MainWindow()
{
	myGameExe = new UIEXEC;
    wp = new Window(myGameExe->simulation);
    myGameExe->doTheMagic();
    setCentralWidget(wp);
    myToolBar = addToolBar(tr("Test"));
   // connect(wp->newGameButton, SIGNAL(toggled(bool)), this, SLOT(newGame(bool))));

    //myToolBar = new QToolBar();
    showMaximized();
}
