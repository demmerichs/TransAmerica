/*
 * Main.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include <QApplication>

#include "hdr/logger/SimulationLogger.h"
#include "hdr/ai/testKI.h"
#include "hdr/game/AI.h"
#include "hdr/game/Simulation.h"
#include "hdr/userinterface/MainWindow.h"

QString versionnumber("0.00.00");

int main(int argc, char* argv[]) {
   // Q_INIT_RESOURCE(QApplication);

    QApplication a(argc,argv);
    a.setApplicationName("Transamerica");
    a.setApplicationVersion(versionnumber);
    //TODO @OEtzi007: would be great to insert the current version
	MainWindow mainWindow;
	return a.exec();
}
/*
 A---D
 / \ /
 C---B
 */
