#include "initialize.h"


Initialize::Initialize(const QString &title, QWidget *parent)
    : QDialog(parent)
{
    nameLabel = new QLabel(tr("Name:"));
    nameEdit = new QLineEdit;

    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                         | QDialogButtonBox::Cancel);

    aiList << "KI1" << "KI2" << "KI3";
    tableWidget = new QTableWidget(aiList.count(),1);
    for(int row=0; row < aiList.count(); row++)
    {
        QTableWidgetItem* ai = new QTableWidgetItem(aiList[row]);
        ai->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
        tableWidget->setItem(row, 0, ai);

    }
    layout = new QVBoxLayout;
    layout->addWidget(nameLabel);
    layout->addWidget(nameEdit);
    layout->addWidget(tableWidget);
    layout->addWidget(buttonBox);
    setLayout(layout);
    setWindowTitle(title);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
}
QString Initialize::name()
{
    return nameEdit->text();
}
