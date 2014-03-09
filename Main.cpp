/*
 * Main.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include <vector>
#include <QApplication>

#include "hdr/logger/SimulationLogger.h"
#include "hdr/ai/testKI.h"
#include "hdr/game/AI.h"
#include "hdr/game/Simulation.h"
#include "hdr/userinterface/Uiexec.h"
#include "hdr/userinterface/MainWindow.h"

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	MainWindow mainWindow;
	return a.exec();
}
/*
 A---D
 / \ /
 C---B
 */
