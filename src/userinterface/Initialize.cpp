#include "../../hdr/userinterface/Initialize.h"

#include <fstream>
#include <string>
using std::ifstream;
using std::string;


#include "../../hdr/userinterface/QKonstanten.h"

Initialize::Initialize(const QString &title, QWidget *parent) :
		QDialog(parent) {
	nameLabel = new QLabel(tr("Name:"));
	nameEdit = new QLineEdit;

	simulationLabel = new QLabel(tr("Number of simulations:"));
	simulationSpin = new QSpinBox;
	simulationSpin->setRange(1, 1000);

	buttonBox = new QDialogButtonBox(
			QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
	setAIAvailable();
	listWidgetA = new QListWidget;
	listWidgetA->addItems(aiAvailable);
	listWidgetB = new QListWidget;
	layout = new QGridLayout;
	layout->addWidget(nameLabel, 0, 0);
	layout->addWidget(nameEdit, 0, 1);
	layout->addWidget(simulationLabel, 1, 0);
	layout->addWidget(simulationSpin, 1, 1);
	layout->addWidget(listWidgetA, 2, 0, 1, 2);
	layout->addWidget(listWidgetB, 2, 1, 1, 2);
	layout->addWidget(buttonBox, 3, 0, 1, 2);
	setLayout(layout);
	setWindowTitle(title);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(verify()));
	connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
	connect(listWidgetA, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this,
			SLOT(addAI(QListWidgetItem*)));
	connect(listWidgetB, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this,
			SLOT(removeAI(QListWidgetItem*)));
	for (int i = 0; i < MAX_PLAYER; i++)
		notSelected.insert(PLAYERCOLOR_LIST[i]);
	this->show();
}

QString Initialize::name() {
	return nameEdit->text();
}

int Initialize::numberOfGames() {
	return simulationSpin->value();
}

void Initialize::addAI(QListWidgetItem* add) {
	if (aiSelected.size() >= 6) {
		QMessageBox::warning(this, tr("AI Selection"),
				tr("Maximum has been reached!"), QMessageBox::Ok);
		return;
	}
	PLAYERCOLOR choosedColor = *notSelected.begin();
	notSelected.erase(choosedColor);
	ListElement* added = new ListElement(add->text(), choosedColor);
	added->setBackgroundColor(getQColor(choosedColor));
	aiSelected.push_back(added);
	listWidgetB->addItem(added);
}

void Initialize::removeAI(QListWidgetItem* removeItem) {
	ListElement* remove = dynamic_cast<ListElement*>(removeItem);
	PLAYERCOLOR colorRemoved = remove->color;
	aiSelected.removeOne(remove);
	listWidgetB->removeItemWidget(remove);
	delete remove;
	notSelected.insert(colorRemoved);
	listWidgetB->show();
}

void Initialize::setAIAvailable() {
	ifstream inAI("hdr/ai/AIList.h");
	while (!inAI.eof()) {
		string input = " ";
		while (input[0] != '"') {
			if (inAI.eof())
				return;
			inAI >> input; //ignore #input
		}
		input = input.substr(1, input.length() - 4); //ignore "(...) and (...).h"
		aiAvailable << input.data();
	}
}
void Initialize::verify(){
    if (aiSelected.size()>=2) {
        accept();
        return;
    }

    QMessageBox::StandardButton answer;
    answer = QMessageBox::warning(this, tr("Incomplete Form"),
        tr("The form does not contain all the necessary information.\n"
           "Do you want to discard it?"),
        QMessageBox::Yes | QMessageBox::No);

    if (answer == QMessageBox::Yes)
        reject();
}

