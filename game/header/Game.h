/*
 * Game.h
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#ifndef GAME_H_
#define GAME_H_

#include"../../logger/header/GameLogger.h"
#include"Counter.h"
#include"Round.h"

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
