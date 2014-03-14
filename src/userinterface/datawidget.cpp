#include "../../hdr/userinterface/datawidget.h"

DataWidget::DataWidget(QWidget *parent) :
    QWidget(parent)
{
    testLabel = new QLabel("This is a place for"
                           "some /n data about the Simulation");
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(testLabel);
    setLayout(mainLayout);
}
