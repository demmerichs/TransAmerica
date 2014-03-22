/*
 * DavidAI.h
 *
 *  Created on: 15.03.2014
 *      Author: David
 */

//==============================
// include guards
#ifndef DAVIDAI_H_
#define DAVIDAI_H_
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
//==============================
// the actual class
/**
 * This is a template for your AI. Everywhere, where TODO adpat appears,
 * you have to insert your AIname instead of templateAI. For explanation of the methods,
 * look into the AI-class documentation. Also you have to add this headerfile into the include-list
 * in the file "hdr/ai/AIList.h".
 */
class DavidAI: public AI {
public:
	DavidAI(PLAYERCOLOR playerColor);
	virtual ~DavidAI();
	Move doMove(State currentState, vector<Move*> moveList);
	const Coordinate* setPawn(State currentState);
	bool countPoints(State currentState, vector<const Connection*>& returnPath);
	void gatherInformationEndOfRound(const RoundLogger* informationAboutGame);
};

#endif /* DAVIDAI_H_ */
