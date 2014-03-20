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

	QLabel* toolBoxLabel;
	QCheckBox* showTownsCheckBox;
	QTabWidget* tabWidget;
private slots:
    virtual void showDataWidget()=0;
signals:
    void requestDisplayOnStatusBar(QString text, int time=0); //TODO @OEtzi use this with emit req... ;

};

#endif /* WINDOW_H_ */
