#include "../../hdr/userinterface/MainWindow.h"

MainWindow::MainWindow() {

	wp = new Window();
	setCentralWidget(wp);
	show();
	connect(wp->newGameButton, SIGNAL(released()), this, SLOT(openInit()));
	openInit();
}

void MainWindow::startSimulation(int games) {
	myGameExe = new UIEXEC;
	myGameExe->simulateSimulation(games);
	wp->setsimulationp(myGameExe->simulationLogger);
	wp->update();

}

void MainWindow::openInit() {
	Initialize dialog("Initialize Simulation", this);
	if (dialog.exec() == QDialog::Accepted) {
		setWindowTitle(dialog.name());
		startSimulation(dialog.numberOfGames());
	}
	return;
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event) {
	QPoint clickPoint = event->pos();
	std::cout << "Mouse Click:" << "\t X:" << clickPoint.x() << "\t Y:"
			<< clickPoint.y() << std::endl;

}
