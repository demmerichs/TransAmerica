/*
 * Main.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include "logger/header/SimulationLogger.h"
#include "AI/testKI.h"
#include "game/header/AI.h"
#include "game/header/Simulation.h"
#include "userinterface/header/uiexec.h"
#include <vector>
#include <QApplication>

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	UIEXEC uiexec;
	uiexec.doTheMagic();

	return a.exec();
}
/*
 A---D
 / \ /
 C---B
 */
