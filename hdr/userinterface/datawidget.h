#ifndef DATAWIDGET_H
#define DATAWIDGET_H

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



class DataWidget: public QWidget {
    Q_OBJECT
public:
    explicit DataWidget(SimulationLogger *sLogger,
                        QWidget *parent = 0);
    void setInfringeModel(QAbstractItemModel *model);
    void setPointModel(QAbstractItemModel *model);

signals:

private slots:
    void filterRegExpChanged();
    void filterColumnChanged();
    void sortChanged();

private:
    StatisticsLogger* statLogger;
    SimulationLogger* simLogger;
    QGroupBox* pointsGroupBox;
    QGroupBox* statusGroupBox;
    QGroupBox* searchGroupBox;

    QSortFilterProxyModel *infringementModel;
    QStandardItemModel *pointModel;

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

    QAbstractItemModel* createInfringeModel(QObject* parent);
    QAbstractItemModel* createPointModel(QObject* parent);
    void addStatusRow(QAbstractItemModel* model, const QPair<int,QPair<PLAYERCOLOR,BANNED_STATUS> > data);
    void addPointsRow(QAbstractItemModel* model, PLAYERCOLOR , double, int);
};

#endif // DATAWIDGET_H


