//=========================
// include guards
#ifndef INITIALIZE_H
#define INITIALIZE_H
//==============================
// forward declared dependencies
//==============================
// included dependencies
#include <QDialog>
#include <QLabel>
#include <QSpinBox>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QGridLayout>
#include <QListWidget>
#include <QMessageBox>
#include <QCheckBox>
#include <vector>
#include <set>
using std::vector;
using std::set;

#include "../game/Constants.h"
//==============================
// a small helper class
class ListElement: public QListWidgetItem {
public:
	ListElement(QString aiName, PLAYERCOLOR color) :
			QListWidgetItem(aiName, 0, QListWidgetItem::UserType), aiName(
					aiName), color(color) {
	}
	~ListElement() {
	}
	QString aiName;
	PLAYERCOLOR color;
};
//==============================
// the actual class
class Initialize: public QDialog {
Q_OBJECT
public:
	Initialize(const QString &title, QWidget* parent);
	virtual ~Initialize();
	QString name();
	int numberOfGames();
	QList<ListElement*> aiSelected;
	bool humanPlayer;
	PLAYERCOLOR humanColor;
private:
	QStringList aiAvailable;
    set<PLAYERCOLOR> notSelected;
    QLabel* nameLabel;
	QLineEdit* nameEdit;
    QCheckBox* hasHumanBox;
    QLabel* hasHumanLabel;
	QLabel* simulationLabel;
	QSpinBox* simulationSpin;
	QListWidget* listWidgetA;
	QListWidget* listWidgetB;
	QDialogButtonBox* buttonBox;
	QGridLayout* layout;

	void setAIAvailable();
private slots:
	void addAI(QListWidgetItem* add);
	void removeAI(QListWidgetItem* remove);
	void verify();

    friend class GameExec;
};

#endif // INITIALIZE_H
