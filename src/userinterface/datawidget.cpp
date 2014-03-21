#include <QStandardItemModel>
#include <QHeaderView>
#include "../../hdr/userinterface/datawidget.h"
#include "../../hdr/userinterface/QConstants.h"

DataWidget::DataWidget(SimulationLogger* sLogger,
                       QWidget *parent) :
    QWidget(parent),
    statLogger(sLogger->getStatisticsLogger()),
    simLogger(sLogger)
{

    pointsGroupBox = new QGroupBox("Games won:");

    pointModel = new QStandardItemModel;

    pointView = new QTableView;
    pointView->setAlternatingRowColors(true);
    pointView->setSortingEnabled(true);
    pointView->horizontalHeader()->setStretchLastSection(true);
    pointView->verticalHeader()->setHidden(true);

    QVBoxLayout* pointsLayout = new QVBoxLayout();
    pointsLayout->addWidget(pointView);
    pointsGroupBox->setFlat(false);
    pointsGroupBox->setLayout(pointsLayout);

    statusGroupBox = new QGroupBox("Committed Infringements:");


    infringementModel = new QSortFilterProxyModel;
    infringementModel->setDynamicSortFilter(true);

    infringementView = new QTableView;
    infringementView->setAlternatingRowColors(true);
    infringementView->setModel(infringementModel);
    infringementView->setSortingEnabled(true);
    infringementView->horizontalHeader()->setStretchLastSection(true);
    infringementView->verticalHeader()->setHidden(true);

    sortCaseSensitivityCheckBox = new QCheckBox(tr("Case sensitive sorting"));
    filterCaseSensitivityCheckBox = new QCheckBox(tr("Case sensitive filter"));

    filterPatternLineEdit = new QLineEdit;
    filterPatternLabel = new QLabel(tr("&Filter pattern:"));
    filterPatternLabel->setBuddy(filterPatternLineEdit);

    filterSyntaxComboBox = new QComboBox;
    filterSyntaxComboBox->addItem(tr("Regular expression"), QRegExp::RegExp);
    filterSyntaxComboBox->addItem(tr("Wildcard"), QRegExp::Wildcard);
    filterSyntaxComboBox->addItem(tr("Fixed string"), QRegExp::FixedString);
    filterSyntaxLabel = new QLabel(tr("Filter &syntax:"));
    filterSyntaxLabel->setBuddy(filterSyntaxComboBox);

    filterColumnComboBox = new QComboBox;
    filterColumnComboBox->addItem(tr("Position"));
    filterColumnComboBox->addItem(tr("AI"));
    filterColumnComboBox->addItem(tr("Banned Status"));
    filterColumnLabel = new QLabel(tr("Filter &column:"));
    filterColumnLabel->setBuddy(filterColumnComboBox);

    connect(filterPatternLineEdit, SIGNAL(textChanged(QString)),
            this, SLOT(filterRegExpChanged()));
    connect(filterSyntaxComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(filterRegExpChanged()));
    connect(filterColumnComboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(filterColumnChanged()));
    connect(filterCaseSensitivityCheckBox, SIGNAL(toggled(bool)),
            this, SLOT(filterRegExpChanged()));
    connect(sortCaseSensitivityCheckBox, SIGNAL(toggled(bool)),
            this, SLOT(sortChanged()));


    QGridLayout *infringementLayout = new QGridLayout;
    infringementLayout->addWidget(infringementView, 0, 0, 1, 3);
    infringementLayout->addWidget(filterPatternLabel, 1, 0);
    infringementLayout->addWidget(filterPatternLineEdit, 1, 1, 1, 2);
    infringementLayout->addWidget(filterSyntaxLabel, 2, 0);
    infringementLayout->addWidget(filterSyntaxComboBox, 2, 1, 1, 2);
    infringementLayout->addWidget(filterColumnLabel, 3, 0);
    infringementLayout->addWidget(filterColumnComboBox, 3, 1, 1, 2);
    infringementLayout->addWidget(filterCaseSensitivityCheckBox, 4, 0, 1, 2);
    infringementLayout->addWidget(sortCaseSensitivityCheckBox, 4, 2);
    statusGroupBox->setLayout(infringementLayout);

    QVBoxLayout *mainLayout = new QVBoxLayout;

    mainLayout->addWidget(pointsGroupBox);
    mainLayout->addWidget(statusGroupBox);


    setInfringeModel(createInfringeModel(this));
    setPointModel(createPointModel(this));

    infringementView->resizeColumnsToContents();
    pointView->resizeColumnsToContents();


    setLayout(mainLayout);


    infringementView->sortByColumn(1, Qt::AscendingOrder);
    filterColumnComboBox->setCurrentIndex(2);

    filterPatternLineEdit->setText("");
    filterCaseSensitivityCheckBox->setChecked(false);
    sortCaseSensitivityCheckBox->setChecked(false);
}
void DataWidget::setInfringeModel(QAbstractItemModel *model)
{
    infringementModel->setSourceModel(model);
}

void DataWidget::setPointModel(QAbstractItemModel *model){
    pointView->setModel(model);
}

void DataWidget::filterRegExpChanged()
{
    QRegExp::PatternSyntax syntax =
            QRegExp::PatternSyntax(filterSyntaxComboBox->itemData(
                    filterSyntaxComboBox->currentIndex()).toInt());
    Qt::CaseSensitivity caseSensitivity =
            filterCaseSensitivityCheckBox->isChecked() ? Qt::CaseSensitive
                                                       : Qt::CaseInsensitive;

    QRegExp regExp(filterPatternLineEdit->text(), caseSensitivity, syntax);
    infringementModel->setFilterRegExp(regExp);
}

void DataWidget::filterColumnChanged()
{
    infringementModel->setFilterKeyColumn(filterColumnComboBox->currentIndex());
}

void DataWidget::sortChanged()
{
    infringementModel->setSortCaseSensitivity(
            sortCaseSensitivityCheckBox->isChecked() ? Qt::CaseSensitive
                                                     : Qt::CaseInsensitive);
}

QAbstractItemModel* DataWidget::createInfringeModel(QObject *parent){
    QStandardItemModel* model = new QStandardItemModel(0,3,parent);

    model->setHeaderData(1, Qt::Horizontal, QObject::tr("AI"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Banned Status"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Position"));


    if (statLogger){
        QList<QPair<int, QPair<PLAYERCOLOR, BANNED_STATUS> > > statusList = statLogger->getPositionList();
        for (int i=0; i<statLogger->getNumberOfEvents(); i++){
            addStatusRow(model, statusList.at(i));
        }
    }

    return model;
 }

void DataWidget::addStatusRow(QAbstractItemModel *model, const QPair<int, QPair<PLAYERCOLOR, BANNED_STATUS> > data){
    model->insertRow(0);
    model->setData(model->index(0,0), data.first);
    model->setData(model->index(0,1), playercolorToQString(data.second.first)); //TODO change to statLogger->
    model->setData(model->index(0,2), bannedStatusQString(data.second.second));


}

QAbstractItemModel* DataWidget::createPointModel(QObject *parent){
    QStandardItemModel* model = new QStandardItemModel(0,3,parent);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("AI"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Victorys"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Other Stuff"));

    for (int i=0; i< simLogger->getPlayerList().size(); i++){
        addPointsRow(model, simLogger->getPlayerList()[i]->playerColor,
                     simLogger->getGamesWon().get(simLogger->getPlayerList()[i]), 0);
    }
    return model;

}

void DataWidget::addPointsRow(QAbstractItemModel *model, PLAYERCOLOR player, double won, int stuff){
    model->insertRow(0);

    model->setData(model->index(0,0), playercolorToQString(player));
    model->setData(model->index(0,1), QString::number(won/6. /*TODO @OEtzi why???*/));
    model->setData(model->index(0,2), "... more data");
}
