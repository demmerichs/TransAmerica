//==============================
// include guard
#ifndef DATAWIDGET_H
#define DATAWIDGET_H
//==============================
// included dependencies
#include "../logger/StatisticsLogger.h"

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QFormLayout>
#include <QAbstractItemModel>
#include <QCheckBox>
#include <QComboBox>
#include <QAbstractAnimation>
#include <QLineEdit>
#include <QSortFilterProxyModel>
#include <QStandardItemModel>
#include <QTableView>
//==============================
// the actual class

/**
  Vizualisation of the game's statistics.
  The DataWidget is a class that holds several informations
  about the current simulations and visualize them with
  some sortable tableViews.
  */

class DataWidget: public QWidget {
    Q_OBJECT
public:
    explicit DataWidget(SimulationLogger *sLogger,
                        QWidget *parent = 0);
    //public functions to set private variables
    void setInfringeModel(QAbstractItemModel *model);
    void setPointModel(QAbstractItemModel *model);

private slots:
    //handling the interactivity
    void filterRegExpChanged();
    void filterColumnChanged();
    void sortChanged();

private:
    //References to the game's dataLoggers
    StatisticsLogger* statLogger;
    SimulationLogger* simLogger;

    //Structure of the interface
    QGroupBox* pointsGroupBox;
    QGroupBox* statusGroupBox;
    QGroupBox* searchGroupBox;

    //Containers for the data
    QSortFilterProxyModel *infringementModel;
    QStandardItemModel *pointModel;

    //Visual interface
    QTableView *infringementView;
    QTableView *pointView;
    QCheckBox *filterCaseSensitivityCheckBox;
    QCheckBox *sortCaseSensitivityCheckBox;
    QLabel *filterPatternLabel;
    QLabel *filterSyntaxLabel;
    QLabel *filterColumnLabel;
    QLineEdit *filterPatternLineEdit;
    QComboBox *filterSyntaxComboBox;
    QComboBox *filterColumnComboBox;

    //Functions to construct the containers of the data
    QAbstractItemModel* createInfringeModel(QObject* parent);
    QAbstractItemModel* createPointModel(QObject* parent);

    //minor assisting functions to fill the ItemModels
    void addStatusRow(QAbstractItemModel* model, const QPair<int,QPair<PLAYERCOLOR,BANNED_STATUS> > data);
    void addPointsRow(QAbstractItemModel* model, PLAYERCOLOR , double, int);
};

#endif // DATAWIDGET_H


