#include <QStandardItemModel>
#include "../../hdr/userinterface/datawidget.h"
#include "../../hdr/userinterface/QConstants.h"

DataWidget::DataWidget(SimulationLogger* simLogger,StatisticsLogger *statLogger,
                       QWidget *parent) :
    QWidget(parent), statLogger(statLogger)
{
    // TODO get the statisticLogger working
    delete statLogger;
    statLogger = new StatisticsLogger(simLogger);


    pointsGroupBox = new QGroupBox("Games won:");
    QVBoxLayout* pointsLayout = new QVBoxLayout();
    pointsLayout->addWidget(new QLabel("This is a place for a table with "
                                   "points of the AIs"));
    
    statusGroupBox = new QGroupBox("Committed Infringements:");

    infringementModel = new QSortFilterProxyModel;
    infringementModel->setDynamicSortFilter(true);

    infringementView = new QTreeView;
    infringementView->setRootIsDecorated(false);
    infringementView->setAlternatingRowColors(true);
    infringementView->setModel(infringementModel);
    infringementView->setSortingEnabled(true);

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
    filterColumnComboBox->addItem(tr("AI"));
    filterColumnComboBox->addItem(tr("Banned Status"));
    filterColumnComboBox->addItem(tr("Position"));
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

    statLogger->addEvent(1,P_BLUE,static_cast<BANNED_STATUS>(NORAILS));

    setSourceModel(createInfringeModel(this));

    setLayout(mainLayout);


    infringementView->sortByColumn(1, Qt::AscendingOrder);
    filterColumnComboBox->setCurrentIndex(1);

    filterPatternLineEdit->setText("...");
    filterCaseSensitivityCheckBox->setChecked(true);
    sortCaseSensitivityCheckBox->setChecked(true);
}
void DataWidget::setSourceModel(QAbstractItemModel *model)
{
    infringementModel->setSourceModel(model);
    infringementView->setModel(model);
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

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("AI"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Banned Status"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Position"));

    if (statLogger){
        qDebug("Drin!");
        QList<QPair<int, QPair<PLAYERCOLOR, BANNED_STATUS> > > statusList = statLogger->getPositionList();
        for (int i=0; i<statLogger->getNumberOfEvents(); i++){
            addRow(model, statusList.at(i));
        }
    }
    addRow(model, qMakePair(1, qMakePair(P_BLUE, MOVE_WRONG_COLOR)));
    addRow(model, qMakePair(2, qMakePair(P_GREEN, MOVE_WITHOUT_RAILS)));
    return model;
 }

void DataWidget::addRow(QAbstractItemModel *model, const QPair<int, QPair<PLAYERCOLOR, BANNED_STATUS> > data){
    model->insertRow(0);
    // TODO convert enum to QString which is readable
    model->setData(model->index(0,2), data.first);
    model->setData(model->index(0,0), playercolorToQString(data.second.first));
    model->setData(model->index(0,1), bannedStatusQString(data.second.second));

}
