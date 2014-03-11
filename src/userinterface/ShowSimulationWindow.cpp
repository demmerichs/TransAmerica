/*
 * ShowSimulationWindow.cpp
 *
 *  Created on: 11.03.2014
 *      Author: David
 */

#include "ShowSimulationWindow.h"
#include "../../hdr/logger/SimulationLogger.h"
#include "../../hdr/logger/GameLogger.h"
#include "../../hdr/logger/RoundLogger.h"
#include "../../hdr/userinterface/DynamicState.h"

ShowSimulationWindow::ShowSimulationWindow(SimulationLogger* simulationp) :
		Window(simulationp->getBoard()), simulationp(simulationp) {
	gameSpinBox = new QSpinBox;
	roundSpinBox = new QSpinBox;
	moveSpinBox = new QSpinBox;
	gameSpinBox->setWrapping(false);
	gameSpinBox->setSuffix(tr(". Spiel"));
	gameSpinBox->setSuffix(tr(". Spiel"));
	roundSpinBox->setWrapping(false);
	roundSpinBox->setSuffix(tr(". Runde"));
	moveSpinBox->setWrapping(false);
	moveSpinBox->setSuffix(tr(". Zug"));
	toolLayout->addRow(tr("Geladenes Spiel:"), gameSpinBox);
	toolLayout->addRow(tr("Geladene Runde: "), roundSpinBox);
	toolLayout->addRow(tr("Geladener Zug:  "), moveSpinBox);
	connect(gameSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(gameSpinChanged(int)));
	connect(roundSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(roundSpinChanged(int)));
	connect(moveSpinBox, SIGNAL(valueChanged(int)), this,
			SLOT(moveSpinChanged(int)));
	gameCounter = 1;
	roundCounter = 1;
	moveCounter = 0;
	if (simulationp)
		updateSpinBoxes();
}

ShowSimulationWindow::~ShowSimulationWindow() {
	// TODO Auto-generated destructor stub
}

void ShowSimulationWindow::setZp() {
	if (simulationp != 0) {
		if (aZp != 0)
			delete aZp;
		aZp = new DynamicState(
				simulationp->calculateDynamicState(gameCounter - 1,
						roundCounter - 1, moveCounter));
	}
	spielbrett->update();
}

/**
 Slot-Implementationen
 */

bool ShowSimulationWindow::setGameCounter(int i) {
	cout << "game" << endl;
	int newGameCounter;
	if (i == gameSpinBox->maximum())
		newGameCounter = i - 1;
	else if (i == gameSpinBox->minimum()) {
		newGameCounter = i + 1;
	} else
		newGameCounter = i;
	if (newGameCounter == gameCounter)
		return false;
	gameCounter = newGameCounter;
	updateSpinBoxes();
	return true;
}

bool ShowSimulationWindow::setRoundCounter(int i) {
	cout << "round" << endl;
	int newRoundCounter;
	if (i == roundSpinBox->maximum())
		if (setGameCounter(gameCounter + 1))
			newRoundCounter = roundSpinBox->minimum() + 1;
		else
			newRoundCounter = i - 1;
	else if (i == roundSpinBox->minimum()) {
		if (setGameCounter(gameCounter - 1))
			newRoundCounter = roundSpinBox->maximum() - 1;
		else
			newRoundCounter = i + 1;
	} else
		newRoundCounter = i;
	if (newRoundCounter == roundCounter)
		return false;
	roundCounter = newRoundCounter;
	updateSpinBoxes();
	return true;
}

bool ShowSimulationWindow::setMoveCounter(int i) {
	cout << "move" << endl;
	int newMoveCounter;
	if (i == moveSpinBox->maximum())
		if (setRoundCounter(roundCounter + 1))
			newMoveCounter = moveSpinBox->minimum() + 1;
		else
			newMoveCounter = i - 1;
	else if (i == moveSpinBox->minimum()) {
		if (setRoundCounter(roundCounter - 1))
			newMoveCounter = moveSpinBox->maximum() - 1;
		else
			newMoveCounter = i + 1;
	} else
		newMoveCounter = i;
	if (newMoveCounter == moveCounter) {
		updateSpinBoxes();
		return false;
	}
	moveCounter = newMoveCounter;
	updateSpinBoxes();
	return true;
}

void ShowSimulationWindow::gameSpinChanged(int i) {
	setMoveCounter(0);
	setRoundCounter(1);
	setGameCounter(i);
	setZp();
}

void ShowSimulationWindow::roundSpinChanged(int i) {
	setMoveCounter(0);
	setRoundCounter(i);
	setZp();
}

void ShowSimulationWindow::moveSpinChanged(int i) {
	setMoveCounter(i);
	setZp();
}

void ShowSimulationWindow::updateSpinBoxes() {
	gameSpinBox->blockSignals(true);
	roundSpinBox->blockSignals(true);
	moveSpinBox->blockSignals(true);
	gameSpinBox->setRange(0, simulationp->getGameList().size() + 1);
	if (1 <= gameCounter
			&& gameCounter <= (int) simulationp->getGameList().size()) {
		roundSpinBox->setRange(0,
				simulationp->getGameList()[gameCounter - 1]->getRoundList().size()
						+ 1);
		if (1 <= roundCounter
				&& roundCounter
						<= (int) simulationp->getGameList()[gameCounter - 1]->getRoundList().size())
			moveSpinBox->setRange(-1,
					simulationp->getGameList()[gameCounter - 1]->getRoundList()[roundCounter
							- 1]->getMoveList().size() + 1);
	}
	gameSpinBox->setValue(gameCounter);
	roundSpinBox->setValue(roundCounter);
	moveSpinBox->setValue(moveCounter);
	gameSpinBox->blockSignals(false);
	roundSpinBox->blockSignals(false);
	moveSpinBox->blockSignals(false);
}
