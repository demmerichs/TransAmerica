//==============================
// include guards
#ifndef WINDOW_H_
#define WINDOW_H_
//==============================
// forward declared dependencies
class QLabel;
class QCheckBox;
class QFormLayout;
class QGridLayout;
class QTabWidget;
class GUIBoard;
class Board;
//==============================
// included dependencies
#include <QWidget>
#include <QGroupBox>
//==============================
// the actual class

/**
  This is the base of ShowSimulation- and UserInputWindow.
  It implements the basic needs for a window, which shows
  the game's board as well as some interactive settings
  at the side of it.
  */
class Window: public QWidget {
Q_OBJECT
public:
	Window(const Board* board);
	~Window();
protected:
    //Layouts
	QFormLayout* toolLayout;
	QGridLayout* mainLayout;

    //Visual Interface
    GUIBoard* spielbrett;
    QGroupBox* toolBox;
    QCheckBox* showTownsCheckBox;
	QTabWidget* tabWidget;
private slots:
    virtual void showDataWidget()=0;
signals:
    void requestDisplayOnStatusBar(QString text, int time=0); //TODO @OEtzi use this with emit req... ;

};

#endif /* WINDOW_H_ */
