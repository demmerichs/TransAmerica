#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMouseEvent>
#include "uiexec.h"
#include "window.h"

class QToolBar;

class MainWindow : public QMainWindow
{
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
