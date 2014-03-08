#ifndef INITIALIZE_H
#define INITIALIZE_H

class AI;

#include <QDialog>
#include <QLabel>
#include <QSpinBox>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QGridLayout>
#include <QListWidget>
#include <vector>

class Initialize: public QDialog {
public:
	Initialize(const QString &title, QWidget* parent);
	QString name();
	int numberOfGames();
	std::vector<AI*> players;
private:
	QStringList aiList;
	QLabel* nameLabel;
	QLineEdit* nameEdit;
	QLabel* simulationLabel;
	QSpinBox* simulationSpin;
	QListWidget* listWidget;
	QDialogButtonBox* buttonBox;
	QGridLayout* layout;
};

#endif // INITIALIZE_H
