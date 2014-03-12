#include "../../hdr/userinterface/MainWindow.h"

MainWindow::MainWindow() {

	wp = new ShowSimulationWindow(0);
	setCentralWidget(wp);
	showMaximized();
	connect(wp->newGameButton, SIGNAL(released()), this, SLOT(openInit()));
	openInit();
}

void MainWindow::startSimulation(int games) {
    myGameExe = new GameExec(wp, games);
	wp->simulationp = myGameExe->simulationLogger;
	myGameExe->simulateSimulation();
	wp->updateSpinBoxes();
	wp->setZp();
	wp->update();
	wp->showMaximized();
}

void MainWindow::openInit() {
	Initialize dialog("Initialize Simulation", this);
	if (dialog.exec() == QDialog::Accepted) {
		setWindowTitle(dialog.name());
		startSimulation(dialog.numberOfGames());
	}
	return;
}


