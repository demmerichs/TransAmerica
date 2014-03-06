#ifndef INITIALIZE_H
#define INITIALIZE_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QVBoxLayout>
#include <QTableWidget>
class Initialize: public QDialog
{
public:
    Initialize(const QString &title, QWidget* parent);
    QString name();
private:
    QStringList aiList;
    QLabel* nameLabel;
    QLineEdit* nameEdit;
    QTableWidget* tableWidget;
    QDialogButtonBox* buttonBox;
    QVBoxLayout* layout;
};

#endif // INITIALIZE_H
