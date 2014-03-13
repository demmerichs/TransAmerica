//==============================
// include guards
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//==============================
// forward declared dependencies
class QToolBar;
//==============================
// included dependencies
#include <QMainWindow>
#include "GameExec.h"
#include "ShowSimulationWindow.h"
#include "Initialize.h"
//==============================
// the actual class
class MainWindow: public QMainWindow {
Q_OBJECT
public:
	MainWindow();
private:
	GameExec* myGameExe;
	ShowSimulationWindow* wp;
    QTabWidget* tabWidget;
	QToolBar* myToolBar;
	QAction* newSimulation;
private slots:
	void openInit();
	void startSimulation(int games, vector<AI*> aiList);
};

#endif // MAINWINDOW_H
