/*
 * Main.cpp
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#include"Konstant.h"
#include"Brett.h"
#include"Game.h"
#include"KIspieler.h"
#include"testKI.h"
#include"MyFirstKI.h"
#include<iostream>
using namespace std;

int main() {
	Brett board;
	board.Ausgabe();
	testKI virt[] = { testKI(-1), testKI(-2) };
	Game game1(2, 0, virt, board);
	game1.spielen();
	return 0;
}
/*
  A---D
 / \ /
C---B
*/
