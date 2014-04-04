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

    QApplication::setWindowIcon(QIcon("images/icons/TransamericaAppIcon.png")); //TODO create some .ico
    myGameExe = new GameExec(this);
	createActions();
	createToolBar();
	createStatusBar();
	createMenus();


	showMaximized();
    startSimulation();
}

MainWindow::~MainWindow(){
    delete myGameExe;
    if (wp)
        delete wp;
}

//void MainWindow::startSimulation(int games, vector<AI*> aiList, bool isPureSimulation) {
//	myGameExe = new GameExec(wp, aiList, games);
//    if (!isPureSimulation){
//        UIWp = new UserInputWindow(myGameExe->simulationLogger);
//        wp = UIWp;
//        aiList.push_back(new Human(dialog->humanColor, UIWp));

//        connect(wp, SIGNAL(requestDisplayOnStatusBar(QString,int)), this,
//                SLOT(displayOnStatusBar(QString,int)));
//        setCentralWidget(wp);
//    }
//	myGameExe->simulateSimulation();
//	if (wp)
//		delete wp;
//	wp = new ShowSimulationWindow(myGameExe->simulationLogger);
//    connect (showDataAct, SIGNAL(triggered()),wp, SLOT(showDataWidget()));
//    setCentralWidget(wp);
//}

void MainWindow::startSimulation(){
    myGameExe->execute();
    setCentralWidget(myGameExe->wp);
}

/*void MainWindow::openInit() {
    dialog = new Initialize("Initialize Simulation", this);
    if (dialog->exec() == QDialog::Accepted) {
        bool isPureSimulation = true;
        setWindowTitle(dialog->name());
		vector<AI*> aiList;
        if (dialog->humanPlayer) {
            isPureSimulation = false;
		}
        for (int i = 0; i < dialog->aiSelected.size(); i++)
			aiList.push_back(
                    createAI(dialog->aiSelected[i]->aiName.toStdString(),
                            dialog->aiSelected[i]->color));
        int numberOfGames = dialog->numberOfGames();
        if (isPureSimulation)
            connect(showDataAct, SIGNAL(triggered()), wp, SLOT(showDataWidget()));
        else
            showDataAct->setDisabled(true);

        startSimulation(numberOfGames, aiList, isPureSimulation);
	}
    return;
}
*/
void MainWindow::createActions() {
    newGameAct = new QAction(QIcon("images/icons/TGameIcon.png"),
            tr("&New Game"), this);
    newGameAct->setStatusTip(
            tr("Creates a new Game/Simulation with seclectable AIs"));
    newGameAct->setShortcut(QKeySequence::New);
    connect(newGameAct, SIGNAL(triggered()), this, SLOT(startSimulation()));


    showDataAct = new QAction(QIcon("images/icons/TDataIcon.png"), tr("Show &Data"),
			this);
	showDataAct->setStatusTip(
            tr("Switch to the Data & Statistic of the current simulation"));

    saveAct = new QAction(QIcon("images/icons/TSaveIcon.png"),
            tr("&Save"), this);
    saveAct->setStatusTip(
            tr("Save the currently displayed simulation as .trans-File"));
    saveAct->setShortcut(QKeySequence::Save);

    changeStyleAct = new QAction(QIcon("images/icons/TStyleIcon"),
                                 tr("&Change style"), this);
    changeStyleAct->setStatusTip("Changes the style of the application");

	connect(changeStyleAct, SIGNAL(triggered()), this, SLOT(setStyle()));

    sendAct = new QAction(QIcon("images/icons/TSendIcon.png"),
                          tr("Send"), this);
    sendAct->setStatusTip("Send the current simulation to a friend");

    quitAct = new QAction(QIcon("images/icons/TQuitIcon.png"),
                          tr("&Quit"), this);
    quitAct->setStatusTip("Quit");
    quitAct->setShortcut(QKeySequence::Close);
    connect(quitAct, SIGNAL(triggered()), this, SLOT(close()));

    connect(saveAct, SIGNAL(triggered()), this, SLOT(notImplemented()));
    connect(sendAct, SIGNAL(triggered()), this, SLOT(notImplemented()));

}

void MainWindow::createToolBar() {
    myToolBar = addToolBar("Tool Bar");
    addToolBar(Qt::LeftToolBarArea, myToolBar);
    myToolBar->setMovable(false);
    myToolBar->setIconSize(QSize(42,42));

	myToolBar->addAction(newGameAct);
	myToolBar->addAction(showDataAct);
	myToolBar->addSeparator();
    myToolBar->addAction(saveAct);
    myToolBar->addAction(sendAct);
    myToolBar->addSeparator();
    myToolBar->addAction(changeStyleAct);
    myToolBar->addSeparator();
    myToolBar->addAction(quitAct);
}
void MainWindow::createStatusBar() {
	statusBar()->showMessage(tr("Ready"));
}
void MainWindow::createMenus() {
    gameMenu = menuBar()->addMenu(tr("Game"));
    gameMenu->addAction(newGameAct);
    gameMenu->addAction(quitAct);

    fileMenu = menuBar()->addMenu(tr("File"));
    fileMenu->addAction(saveAct);
    fileMenu->addAction(sendAct);

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
void MainWindow::notImplemented(){
    QMessageBox::information(this, tr("Empty Slot"), tr("This Slot appears to be empty. \n"
                                                        "Implementation will be added later."),
                             QMessageBox::Ok);
}
