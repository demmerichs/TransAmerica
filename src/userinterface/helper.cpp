#include "../../hdr/userinterface/helper.h"

Helper::Helper(QWidget* parent)
{
    QVBoxLayout* layout = new QVBoxLayout;
    view = new QWebView(parent);
    view->load(QUrl("https://github.com/OEtzi007/TransAmerica/wiki/Gameplay"));
    layout->addWidget(view);
    setLayout(layout);
    showMaximized();

}
Helper::~Helper(){

}
