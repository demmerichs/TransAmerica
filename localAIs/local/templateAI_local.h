/*
 * templateAI.h
 *
 *  Created on: 12.03.2014
 *      Author: David
 */

//==============================
// include guards /*TODO adapt*/
#ifndef TEMPLATEAI_H_
#define TEMPLATEAI_H_
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
 * This is a template for your AI. Everywhere, where TODO adpat appears,
 * you have to insert your AIname instead of templateAI. For explanation of the methods,
 * look into the AI-class documentation. Also you have to add this headerfile into the include-list
 * in the file "hdr/ai/AIList.h".
 */
class templateAI: public AI { /*TODO adapt*/
public:
	templateAI(PLAYERCOLOR playerColor)/*TODO adapt*/;
	virtual ~templateAI()/*TODO adapt*/;
	Move doMove(State &currentState, vector<Move*> moveList);
	const Coordinate* setPawn(State &currentState);
	bool countPoints(State& currentState,
			vector<const Connection*>& returnPath);
	void gatherInformationEndOfRound(const RoundLogger* informationAboutGame);
};

#endif /* TEMPLATEAI_H_ */
