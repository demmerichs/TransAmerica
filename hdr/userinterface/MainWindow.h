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
#include <QMouseEvent>
#include "Uiexec.h"
#include "Window.h"
#include "Initialize.h"
//==============================
// the actual class
class MainWindow: public QMainWindow {
Q_OBJECT
public:
	MainWindow();
private:
	UIEXEC* myGameExe;
	Window* wp;
	QToolBar* myToolBar;
	QAction* newSimulation;
private slots:
	void openInit();
	void startSimulation(int games);
protected:
	void mouseReleaseEvent(QMouseEvent* event);
};

#endif // MAINWINDOW_H
