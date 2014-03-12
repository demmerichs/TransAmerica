//=========================
// include guards
#ifndef INITIALIZE_H
#define INITIALIZE_H
//==============================
// forward declared dependencies
class AI;
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
#include <vector>
#include <set>
using std::vector;
using std::set;

#include "../game/Constants.h"
//==============================
// the actual class
class Initialize: public QDialog {
Q_OBJECT
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
public:
	Initialize(const QString &title, QWidget* parent);
	QString name();
	int numberOfGames();
	vector<AI*> players;
private:
	QStringList aiAvailable;
	set<PLAYERCOLOR> notSelected;
	QList<ListElement*> aiSelected;
	QLabel* nameLabel;
	QLineEdit* nameEdit;
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
};

#endif // INITIALIZE_H
