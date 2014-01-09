/*
 * Main.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */
#include <QApplication>
#include "uiexec.h"

using namespace std;

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
  UIEXEC uiexec;

	return a.exec();
}
/*
 A---D
 / \ /
 C---B
 */
