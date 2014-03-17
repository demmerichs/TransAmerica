#include "../../hdr/userinterface/MainWindow.h"

#include <QAction>
#include <QToolBar>
#include <QStatusBar>
#include <QMenuBar>
#include <QMenu>
#include <QStyleFactory>
#include <QInputDialog>
#include <QApplication>

#include "../../hdr/userinterface/styletransamerica.h"
#include "../../hdr/userinterface/UserInputWindow.h"
#include "../../hdr/game/Human.h"

MainWindow::MainWindow() :
		wp(0) {

	QApplication::setWindowIcon(QIcon("images/TransamericaAppIcon.png")); //TODO create some .ico
	/*
	 wp = new ShowSimulationWindow(0);
	 setCentralWidget(wp);
	 */
	createActions();
	createToolBar();
	createStatusBar();
	createMenus();

	showMaximized();
	openInit();
}

void MainWindow::startSimulation(int games, vector<AI*> aiList) {
	myGameExe = new GameExec(wp, aiList, games);
	myGameExe->simulateSimulation();
	if (wp)
		delete wp;
	wp = new ShowSimulationWindow(myGameExe->simulationLogger);
	wp->showMaximized();
}

void MainWindow::openInit() {
	Initialize dialog("Initialize Simulation", this);
	if (dialog.exec() == QDialog::Accepted) {
		setWindowTitle(dialog.name());
		vector<AI*> aiList;
		if (dialog.humanPlayer) {
			UserInputWindow* UIWp = new UserInputWindow(new Board(true));
			wp = UIWp;
			connect(wp, SIGNAL(requestDisplayOnStatusBar(QString,int)), this,
					SLOT(displayOnStatusBar(QString,int)));
			setCentralWidget(wp);
			aiList.push_back(new Human(dialog.humanColor, UIWp));
		}
		for (int i = 0; i < dialog.aiSelected.size(); i++)
			aiList.push_back(
					createAI(dialog.aiSelected[i]->aiName.toStdString(),
							dialog.aiSelected[i]->color));
		int numberOfGames = dialog.numberOfGames();
		startSimulation(numberOfGames, aiList);
	}
	return;
}

void MainWindow::createActions() {
	newSimulationAct = new QAction(QIcon("images/SimulationIcon.png"),
			tr("&New Simulation"), this);
	newSimulationAct->setStatusTip(
			tr("Creates a new Simulation with selectable AIs"));
	newSimulationAct->setShortcut(QKeySequence::New);
	connect(newSimulationAct, SIGNAL(triggered()), this, SLOT(openInit()));

	newGameAct = new QAction(QIcon("images/GameIcon.png"), tr("New &Game"),
			this);
	newGameAct->setStatusTip(tr("Creates a new Game with a human player"));

	showDataAct = new QAction(QIcon("images/DataIcon.png"), tr("Show &Data"),
			this);
	showDataAct->setStatusTip(
			tr("Switch to the Data & Statistic of the current Simulation"));

	if (wp)
		connect(showDataAct, SIGNAL(triggered()), wp, SLOT(showDataWidget()));
	else
		showDataAct->setDisabled(true);

	saveSpielbrettAct = new QAction(QIcon("images/SaveIcon.png"),
			tr("&Save as image"), this);
	saveSpielbrettAct->setStatusTip(
			tr("Save the currently displayed board as image"));
	saveSpielbrettAct->setShortcut(QKeySequence::Save);

	changeStyleAct = new QAction("Change Style", this);
	changeStyleAct->setStatusTip("Changes the Style of the Application");

	connect(changeStyleAct, SIGNAL(triggered()), this, SLOT(setStyle()));
	connect(saveSpielbrettAct, SIGNAL(triggered()), this,
			SLOT(saveSpielbrett()));

	newGameAct->setDisabled(true);
//    showDataAct->setDisabled(true);
//    saveSpielbrettAct->setDisabled(true);
}

void MainWindow::createToolBar() {
	myToolBar = addToolBar("ToolBar");
	myToolBar->addAction(newSimulationAct);
	myToolBar->addAction(newGameAct);
	myToolBar->addAction(showDataAct);
	myToolBar->addSeparator();
	myToolBar->addAction(saveSpielbrettAct);
}
void MainWindow::createStatusBar() {
	statusBar()->showMessage(tr("Ready"));
}
void MainWindow::createMenus() {
	settingsMenu = menuBar()->addMenu(tr("Settings"));
	settingsMenu->addAction(changeStyleAct);
}

void MainWindow::saveSpielbrett() {

}
void MainWindow::displayOnStatusBar(QString string, int time) {
	statusBar()->showMessage(string, time);
}
void MainWindow::setStyle() {
	QStringList items;
	items.append("TransamericaStyle");
	items.append(QStyleFactory::keys());

	bool ok = false;
	QString style = QInputDialog::getItem(this, tr("Style Selection"),
			tr("Style:"), items, 0, false, &ok);
	if (ok && !style.isEmpty()) {
		if (style == "TransamericaStyle")
			QApplication::setStyle(new StyleTransamerica);
		else
			QApplication::setStyle(QStyleFactory::create(style));
	}

}

