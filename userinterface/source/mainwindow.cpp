#include "../header/mainwindow.h"
#include "../header/window.h"
#include "initialize.h"

MainWindow::MainWindow()
{
	myGameExe = new UIEXEC;
    myGameExe->doTheMagic();
    wp = new Window(myGameExe->simulationLogger);
    setCentralWidget(wp);
    show();
    connect(wp->newGameButton, SIGNAL(released()), this, SLOT(openInit()));
}

void MainWindow::openInit()
{
    Initialize dialog("Dies ist ein kleiner Test", this);
    if (dialog.exec() == QDialog::Accepted);
    setWindowTitle(dialog.name());
    return;
}
