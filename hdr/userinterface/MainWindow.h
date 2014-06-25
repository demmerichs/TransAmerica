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
#include "UserInputWindow.h"
#include "Initialize.h"
//==============================
// the actual class

/**
  This class manages the MainWindow.
  It contains several interactive menus and Push-Buttons
  with fundamental functions for the simulation.
  */

class MainWindow: public QMainWindow {
Q_OBJECT
public:
	MainWindow();
    ~MainWindow();
private:
	GameExec* myGameExe;
    Window* wp;
//    Initialize* dialog;
//    UserInputWindow* UIWp;
//    ShowSimulationWindow* SWp;

    //different menus
    QToolBar* myToolBar;
	QMenu* settingsMenu;
    QMenu* fileMenu;
    QMenu* gameMenu;

    //actions selectable by user
	QAction* newGameAct;
    QAction* saveAct;
    QAction* sendAct;
    QAction* quitAct;
	QAction* showDataAct;
    QAction* changeStyleAct;
    QAction* helpAct;

    //functions to help constructing the actions
	void createActions();
	void createToolBar();
	void createMenus();
	void createStatusBar();

private slots:
//  void openInit();

    //slots to connect with the actions
	void saveSpielbrett();
    void startSimulation(/*int games, vector<AI*> aiList, bool isPureSimulation*/);
	void displayOnStatusBar(QString string, int time = 0);
	void setStyle();
    void showHelp();
    void notImplemented();
};

#endif // MAINWINDOW_H
