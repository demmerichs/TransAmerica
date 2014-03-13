/*
 * testKI.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

//==============================
// include guards
#ifndef TESTKI_H_
#define TESTKI_H_
//==============================
// forward declared dependencies
class Move;
class RoundLogger;
class State;
class Connections;
//==============================
// included dependencies
#include <vector>
using std::vector;

#include "../game/AI.h"
#include "../game/Constants.h"
//==============================
// the actual class
class testKI: public AI {
public:
	testKI(PLAYERCOLOR playerColor);
	virtual ~testKI();
	Move doMove(State &currentState, vector<Move*> moveList);
	const Coordinate* setPawn(State &currentState);
	bool countPoints(State& currentState, vector<Connection*>& returnPath);
	void gatherInformationEndOfRound(const RoundLogger* informationAboutGame);
	Vector getNaechsterPunktZu(Vector, State) const;

	static short sign(short);
};

#endif /* TESTKI_H_ */
