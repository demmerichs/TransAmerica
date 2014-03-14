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
class UserInputWindow;
//==============================
// included dependencies
#include "../../hdr/game/AI.h"

//==============================
// the actual class

class Human: public AI {
	UserInputWindow* userInput;
public:
	Human(PLAYERCOLOR playerColor, UserInputWindow* uiexec);
	virtual ~Human();

	Move doMove(State&, vector<Move*>);
	const Coordinate* setPawn(State&);
	bool countPoints(State&, vector<Connection*>&);
	void gatherInformationEndOfRound(const RoundLogger*);
};

#endif /* HUMAN_H_ */
