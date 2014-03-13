/*
 * debuggerAI.h
 *
 *  Created on: 12.03.2014
 *      Author: David
 */

//==============================
// include guards
#ifndef DEBUGGERAI_H_
#define DEBUGGERAI_H_
//==============================
// forward declared dependencies
class Move;
class RoundLogger;
class State;
class Connection;
//==============================
// included dependencies
#include <vector>
using std::vector;

#include "../game/AI.h"
#include "../game/Constants.h"
//==============================
// the actual class
/**
 * This is a debbugerAI, where you actually can implement code. It exists for everyone, to enter code,
 * that should be, by the rules of the game, not possible. If you found a cheat, then please show here,
 * so that we can try to fix it (for example if it is possible for you, to somehow peak into the hands of
 * the other players.
 */
class debuggerAI: public AI {
public:
	debuggerAI(PLAYERCOLOR playerColor);
	virtual ~debuggerAI();
	Move doMove(State &currentState, vector<Move*> moveList);
	const Coordinate* setPawn(State &currentState);
	bool countPoints(State& currentState, vector<Connection*>& returnPath);
	void gatherInformationEndOfRound(const RoundLogger* informationAboutGame);
};

#endif /* DEBUGGERAI_H_ */
