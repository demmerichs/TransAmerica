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
//==============================
// the actual class
class Window: public QWidget {
Q_OBJECT
public:
	Window(const Board* board);
	~Window();
protected:
	GUIBoard* spielbrett;
	QFormLayout* toolLayout;
	QGridLayout* mainLayout;
	/**
	 diverse Labels
	 diverse Combo-/Spin-boxen
	 */
	QLabel* toolBoxLabel;
	QCheckBox* showTownsCheckBox;
	QTabWidget* tabWidget;
private slots:
    virtual void showDataWidget()=0;
};

#endif /* WINDOW_H_ */
