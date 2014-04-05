#ifndef HELPER_H
#define HELPER_H

#include <QWidget>
#include <QtWebKit/QWebView>
#include <QVBoxLayout>

class QWebView;

class Helper: public QWidget{
public:
    Helper(QWidget *parent);
    ~Helper();
private:
    QWebView* view;
};
#endif // HELPER_H
