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
#include "hdr/userinterface/uiexec.h"
#include "hdr/userinterface/mainwindow.h"

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
