/*
 * GraphicGame.h
 *
 *  Created on: 16.01.2014
 *      Author: David
 */

#ifndef GRAPHICGAME_H_
#define GRAPHICGAME_H_

#include "Game.h"

class GraphicGame: public Game {
public:
	GraphicGame(short anzahl, short starter, AI* KIaufgelistet, Board &bord);
	virtual ~GraphicGame();

	friend class UIEXEC;
	friend class Window;
};

#endif /* GRAPHICGAME_H_ */
