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
//==============================
// included dependencies
#include <vector>
using std::vector;

#include "../game/AI.h"
#include "../game/Constants.h"
#include "../game/Connection.h"
#include "../game/State.h"
//==============================
// the actual class
class testKI: public AI {
public:
	testKI(PLAYERCOLOR farbe);
	virtual ~testKI();
	Move doMove(State &aktuell, vector<Move*> moveList);
	Vector setPawn(State &aktuell);
	bool countPoints(State&, vector<Connection*>) {
		return false;
	}
	void gatherInformationEndOfRound(const RoundLogger*) {
	}
	Vector getNaechsterPunktZu(Vector, State) const;

	static short sign(short);
};

#endif /* TESTKI_H_ */
