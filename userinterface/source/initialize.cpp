#include "initialize.h"


Initialize::Initialize(const QString &title, QWidget *parent)
    : QDialog(parent)
{
    nameLabel = new QLabel(tr("Name:"));
    nameEdit = new QLineEdit;

    simulationLabel = new QLabel(tr("Number of simulations:"));
    simulationSpin = new QSpinBox;
    simulationSpin->setRange(1,1000);


    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                     | QDialogButtonBox::Cancel);

    aiAvailable << "KI1" << "KI2" << "KI3" << "Davids gute KI"
           << "Niklas perfekte KI" << "Julians KI" << "Standard KI";
    listWidgetA = new QListWidget;
    listWidgetA->addItems(aiAvailable);
    listWidgetB = new QListWidget;
    layout = new QGridLayout;
    layout->addWidget(nameLabel, 0, 0);
    layout->addWidget(nameEdit, 0, 1);
    layout->addWidget(simulationLabel, 1, 0);
    layout->addWidget(simulationSpin, 1, 1);
    layout->addWidget(listWidgetA, 2, 0, 1, 2);
    layout->addWidget(listWidgetB, 2, 1, 1, 2);
    layout->addWidget(buttonBox, 3, 0, 1, 2);
    setLayout(layout);
    setWindowTitle(title);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
    connect(listWidgetA, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(addAI(QListWidgetItem*)));
}
QString Initialize::name()
{
    return nameEdit->text();
}
int Initialize::numberOfGames()
{
    return simulationSpin->value();
}
void Initialize::addAI(QListWidgetItem* add)
{
    if (aiSelected.size()>=6)
    {
        QMessageBox::warning(this, tr("AI Selection"), tr("Maximum has been reached!"),
                             QMessageBox::Ok);
        return;
    }
    aiSelected.push_back(qMakePair(add->text(), PLAYERCOLOUR_LIST[aiSelected.size()]));
    listWidgetB->addItem(add->text());
}
