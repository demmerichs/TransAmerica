/*
 * Human.h
 *
 *  Created on: 10.03.2014
 *      Author: David
 */

//==============================
// include guard
#ifndef HUMAN_H_
#define HUMAN_H_
//==============================
// forward declared dependencies
class UIEXEC;
//==============================
// included dependencies
#include "../../hdr/game/AI.h"

//==============================
// the actual class

class Human: public AI {
	UIEXEC* uiexec;
public:
	Human(PLAYERCOLOR playerColor, UIEXEC* uiexec);
	virtual ~Human();

	Move doMove(State&, vector<Move*>);
	Vector setPawn(State&);
	bool countPoints(State&, vector<Connection*>);
	void gatherInformationEndOfRound(const RoundLogger*);
};

#endif /* HUMAN_H_ */
