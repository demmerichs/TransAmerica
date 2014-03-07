#include "../header/mainwindow.h"
#include "../header/window.h"
#include "initialize.h"

MainWindow::MainWindow()
{

    wp = new Window;
    setCentralWidget(wp);
    show();
    connect(wp->newGameButton, SIGNAL(released()), this, SLOT(openInit()));
    openInit();
}

void MainWindow::startSimulation(int games)
{
    myGameExe = new UIEXEC;
    myGameExe->simulateSimulation(games);
    wp->setsimulationp(myGameExe->simulationLogger);
    wp->update();

}

void MainWindow::openInit()
{
    Initialize dialog("Initialize Simulation", this);
    if (dialog.exec() == QDialog::Accepted)
      {
        setWindowTitle(dialog.name());
        startSimulation(dialog.numberOfGames());
       }
    return;
}
