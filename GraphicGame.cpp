/*
 * GraphicGame.cpp
 *
 *  Created on: 16.01.2014
 *      Author: David
 */

#include "GraphicGame.h"

GraphicGame::GraphicGame(short anzahl, short starter, AI* KIaufgelistet,
		Board &bord) :
		Game(anzahl, starter, KIaufgelistet, bord) {
}

GraphicGame::~GraphicGame() {
}

