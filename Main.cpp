/*
 * Main.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */
#include <QApplication>
#include"Konstant.h"
#include"Brett.h"
#include"Game.h"
#include"KIspieler.h"
#include"testKI.h"
#include"MyFirstKI.h"
#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	Brett board;
	board.Ausgabe();
	testKI virt[] = { testKI(-1), testKI(-2) };
	Game game1(2, 0, virt, board);
	game1.spielen();
	return a.exec();
}
/*
 A---D
 / \ /
 C---B
 */
