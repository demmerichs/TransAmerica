#ifndef DATAWIDGET_H
#define DATAWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class DataWidget: public QWidget {
Q_OBJECT
public:
	explicit DataWidget(QWidget *parent = 0);

signals:

public slots:

private:
	QLabel* testLabel;

};

#endif // DATAWIDGET_H
