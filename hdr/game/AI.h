/*
 * AI.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

//==============================
// include guards
#ifndef AI_H_
#define AI_H_
//==============================
// forward declared dependencies
class RoundLogger;
//==============================
// included dependencies
#include<string>
#include<iostream>
#include<set>
using std::string;
using std::cout;
using std::endl;
using std::set;

#include"Constants.h"
#include"Move.h"
#include"State.h"
#include"Pawn.h"
//==============================
// the actual class
/**
 * If you want to create your own AI, you have to implement this class as a kind of interface.
 * You have to implement every abstract method.
 */
class AI {
protected:
	virtual Move doMove(State &aktuell, vector<Move*> moveList) =0; /**<Inside this methode you calculate your next move in the game.*/
	virtual Vector setPawn(State &aktuell) =0; /**<At the beginning of each round you have to define your starting position of your pawn.*/
	virtual bool countPoints(State &currentState,
			vector<Connection*>& returnPath) =0;
	/**<Here you can count your minus points at the end of each round.
	 * If you want to do so, you have to return true.
	 * For the beginning it is okay, if you just return false. Then the gamemaster will count the minuspoints.
	 * He counts in most cases the minimum of minuspoints you get, however in some cases the algorithm doesn't evaluate the best value.
	 */
	virtual void gatherInformationEndOfRound(
			const RoundLogger* currentInfos) =0;
	/**<At the end of each round you can take a look at the whole game and the playing cards of your opponents.
	 * This can be usefull, if you want to figure out there strategy and react to that over a simulation period.
	 */
	const City** hand; /**<This is just an array of City-Pointers, that represents your hand.*/
public:
	AI(PLAYERCOLOR playerColor); /**<A constructor where you can set the name of your AI and your name, but not much more ;) */
	virtual ~AI();
	const PLAYERCOLOR playerColor; /**< This represents your color during the game. You can try to change it, but hopefully you shouldn't be able.*/
	string owner; /**<Possibly your name.*/
	string AIname; /**<Possibly the name of your AI.*/

	friend class Game;
	friend class Round;
};

#endif /* AI_H_ */
