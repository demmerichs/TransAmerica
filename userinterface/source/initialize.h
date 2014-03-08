#ifndef INITIALIZE_H
#define INITIALIZE_H

#include <QDialog>
#include <QLabel>
#include <QSpinBox>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QGridLayout>
#include <QListWidget>
#include <QMessageBox>
#include <vector>
#include "../game/header/AI.h"
#include "../game/header/Constants.h"

class Initialize: public QDialog
{
    Q_OBJECT
public:
    Initialize(const QString &title, QWidget* parent);
    QString name();
    int numberOfGames();
    std::vector<AI*> players;
private:
    QStringList aiAvailable;
    QList<QPair<QString, PLAYERCOLOUR> >aiSelected;
    QLabel* nameLabel;
    QLineEdit* nameEdit;
    QLabel* simulationLabel;
    QSpinBox* simulationSpin;
    QListWidget* listWidgetA;
    QListWidget* listWidgetB;
    QDialogButtonBox* buttonBox;
    QGridLayout* layout;
private slots:
    void addAI(QListWidgetItem* add);
};

#endif // INITIALIZE_H
