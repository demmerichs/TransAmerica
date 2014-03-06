#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
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
private slots:
    void openInit();
};

#endif // MAINWINDOW_H
