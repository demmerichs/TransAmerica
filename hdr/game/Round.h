/*
 * Round.h
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

//==============================
// include guards
#ifndef ROUND_H_
#define ROUND_H_
//==============================
// forward declared dependencies
class Board;
//==============================
// included dependencies
#include <cassert>

#include "PlayingOrder.h"
#include "../logger/RoundLogger.h"
#include "State.h"
#include "AI.h"
//#include "Board.h"
//==============================
// the actual class
class Round {
	RoundLogger* roundLogger;
	bool played;

	void setPawns();
	void dealCards();
	int losingPoints(AI* player) const;
	bool checkRoundWinnerOrAllBanned() const;
	bool isRoundWinner(AI*) const;
	bool isPlayerConnectedToHisCities(AI* player, const State& state) const;
public:
	State currentState;

	Round(RoundLogger* roundLogger);
	virtual ~Round();

	void play();
};

#endif /* ROUND_H_ */
