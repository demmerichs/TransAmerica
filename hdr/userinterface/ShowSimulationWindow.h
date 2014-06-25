
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

/**
  This class is used to display the simulation.
  It holds the board as well as providing
  the ability to change the displayed data
  */

class ShowSimulationWindow: public Window {
Q_OBJECT
	friend class GUIBoard;
	friend class MainWindow;
public:
	ShowSimulationWindow(SimulationLogger* simulationp);
	virtual ~ShowSimulationWindow();

    //set the reference to the simulation
	void setsimulationp(SimulationLogger* game);
private:
    //reference to the simulation
	SimulationLogger* simulationp;

    //actual displayed move of the game
	int gameCounter;
	int roundCounter;
	int moveCounter;

    //visual interface
	QSpinBox* moveSpinBox;
	QSpinBox* roundSpinBox;
	QSpinBox* gameSpinBox;

    //visualize games data
	DataWidget* dataWidget;

    //function to change the displayed move
	void updateSpinBoxes();
	bool setGameCounter(int i);
	bool setRoundCounter(int i);
	bool setMoveCounter(int i);
	void setZp();

    //constructing teh dataWidget
	void fillTabWidget();
private slots:

    //slots to achieve interactivity
	void gameSpinChanged(int i);
	void roundSpinChanged(int i);
	void moveSpinChanged(int i);
	void showDataWidget();
	void showSpielbrett();
};

#endif /* SHOWSIMULATIONWINDOW_H_ */
