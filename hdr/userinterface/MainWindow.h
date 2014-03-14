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
	QToolBar* myToolBar;
    QMenu* settingsMenu;
    QAction* newSimulationAct;
    QAction* newGameAct;
    QAction* saveSpielbrettAct;
    QAction* showDataAct;
    QAction* changeStyleAct;

    void createActions();
    void createToolBar();
    void createMenus();
    void createStatusBar();


private slots:
	void openInit();
    void saveSpielbrett();
	void startSimulation(int games, vector<AI*> aiList);
    void displayOnStatusBar(QString string, int time=0);
    void setStyle();
};

#endif // MAINWINDOW_H
