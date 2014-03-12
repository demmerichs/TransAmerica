#include "../../hdr/userinterface/MainWindow.h"

MainWindow::MainWindow() {

	wp = new ShowSimulationWindow(0);
	setCentralWidget(wp);
	showMaximized();
	connect(wp->newGameButton, SIGNAL(released()), this, SLOT(openInit()));
	openInit();
}

void MainWindow::startSimulation(int games, vector<AI*> aiList) {
	myGameExe = new GameExec(wp, aiList, games);
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
		vector<AI*> aiList;
		for (int i = 0; i < dialog.aiSelected.size(); i++)
			aiList.push_back(
					createAI(dialog.aiSelected[i]->aiName.toStdString(),
							dialog.aiSelected[i]->color));
		startSimulation(dialog.numberOfGames(), aiList);
	}
	return;
}

