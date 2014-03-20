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
#include <QTreeView>



class DataWidget: public QWidget {
    Q_OBJECT
public:
    explicit DataWidget(SimulationLogger *simLogger,StatisticsLogger* statLogger = 0,
                        QWidget *parent = 0);
    void setSourceModel(QAbstractItemModel *model);

signals:

private slots:
    void filterRegExpChanged();
    void filterColumnChanged();
    void sortChanged();

private:
    StatisticsLogger* statLogger;
    QGroupBox* pointsGroupBox;
    QGroupBox* statusGroupBox;

    QSortFilterProxyModel *infringementModel;

    QTreeView *infringementView;
    QCheckBox *filterCaseSensitivityCheckBox;
    QCheckBox *sortCaseSensitivityCheckBox;
    QLabel *filterPatternLabel;
    QLabel *filterSyntaxLabel;
    QLabel *filterColumnLabel;
    QLineEdit *filterPatternLineEdit;
    QComboBox *filterSyntaxComboBox;
    QComboBox *filterColumnComboBox;

    QAbstractItemModel* createInfringeModel(QObject* parent);
    void addRow(QAbstractItemModel* model, const QPair<int,QPair<PLAYERCOLOR,BANNED_STATUS> > data);
};

#endif // DATAWIDGET_H


