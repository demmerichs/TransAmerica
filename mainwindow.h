#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "uiexec.h"
#include "window.h"

class QToolBar;

class MainWindow : QMainWindow
{
public:
    MainWindow();
private:
    UIEXEC* myGameExe;
    Window* wp;
    QToolBar* myToolBar;
};

#endif // MAINWINDOW_H
