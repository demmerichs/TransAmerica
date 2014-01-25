/*
 * Round.h
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#ifndef ROUND_H_
#define ROUND_H_

#include<cassert>
#include"PlayingOrder.h"
#include"RoundLogger.h"
#include"State.h"
#include"AI.h"
#include"Board.h"

class Round {
	RoundLogger* roundLogger;
	bool played;

	void setPawns();
	void dealCards();
	int losingPoints(AI* player) const;
	bool checkRoundWinner() const;
	bool isRoundWinner(AI*) const;
public:
	State currentState;

	Round(RoundLogger* roundLogger);
	virtual ~Round();

	void play();
};

#endif /* ROUND_H_ */
