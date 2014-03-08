/*
 * Game.h
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

//==============================
// include guards
#ifndef GAME_H_
#define GAME_H_
//==============================
// forward declared dependencies
class Counter;
//==============================
// included dependencies
#include <QtCore/QtCore>
#include <cassert>

#include "../../hdr/logger/GameLogger.h"
//#include"Counter.h"
#include "Round.h"
//==============================
// the actual class
class Game {
	GameLogger* gameLogger;
	bool played;

	bool noLoser() const;
	void setNewDeadLine();
public:
	Game(GameLogger* gameLogger);
	virtual ~Game();

	void play();
};

#endif /* GAME_H_ */
