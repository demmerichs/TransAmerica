/*
 * GameLogger.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef GAMELOGGER_H_
#define GAMELOGGER_H_

#include<vector>
#include"PlayingOrder.h"
#include"Constants.h"
#include"RoundLogger.h"
#include"Counter.h"

class GameLogger {
public:
	GameLogger();
	virtual ~GameLogger();

	PLAYERCOLOUR startingPlayer;
	PlayingOrder playingOrder;

	Counter points;

	unsigned rounds;
	std::vector<RoundLogger> roundList;
};

#endif /* GAMELOGGER_H_ */
