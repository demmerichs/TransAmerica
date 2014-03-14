/*
 * ShowSimulationWindow.h
 *
 *  Created on: 11.03.2014
 *      Author: David
 */

//==============================
// include guard
#ifndef SHOWSIMULATIONWINDOW_H_
#define SHOWSIMULATIONWINDOW_H_
//==============================
// forward declared dependencies
class QSpinBox;
class QProgressBar;
class SimulationLogger;
//==============================
// included dependencies
#include "Window.h"
#include "datawidget.h"
//==============================
// the actual class

class ShowSimulationWindow: public Window {
Q_OBJECT
	friend class GUIBoard;
	friend class MainWindow;
public:
	ShowSimulationWindow(SimulationLogger* simulationp);
	virtual ~ShowSimulationWindow();
	void setsimulationp(SimulationLogger* game);
private:
	SimulationLogger* simulationp;
	int gameCounter;
	int roundCounter;
	int moveCounter;
	QSpinBox* moveSpinBox;
	QSpinBox* roundSpinBox;
	QSpinBox* gameSpinBox;
	QProgressBar* simulationProgress;
	DataWidget* dataWidget;
	void updateSpinBoxes();
	bool setGameCounter(int i);
	bool setRoundCounter(int i);
	bool setMoveCounter(int i);
	void setZp();
	void createProgressBar();
	void fillTabWidget();
private slots:
	void gameSpinChanged(int i);
	void roundSpinChanged(int i);
	void moveSpinChanged(int i);
	void advanceProgressBar();
	void showDataWidget();
	void showSpielbrett();
};

#endif /* SHOWSIMULATIONWINDOW_H_ */
