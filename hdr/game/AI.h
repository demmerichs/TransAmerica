/*
 * AI.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef AI_H_
#define AI_H_

#include<string>
#include<iostream>
#include<set>

#include"Constants.h"
#include"Move.h"
#include"State.h"
#include"Pawn.h"
//#include"../../logger/header/SimulationLogger.h"

class RoundLogger;

/**
 * If you want to create your own AI, you have to implement this class as a kind of interface.
 * You have to implement every abstract method.
 */

class AI {
	static std::set<PLAYERCOLOR> participatingPlayerColours;
protected:
	virtual Move doMove(State &aktuell) =0; /**<Inside this methode you calculate your next move in the game.*/
	virtual Vector setPawn(State &aktuell) =0; /**<At the beginning of each round you have to define your starting position of your pawn.*/
	virtual bool countPoints(State &currentState,
			std::vector<Connection*> path) =0;
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
	AI(PLAYERCOLOR playercolor); /**<A constructor where you can set the name of your AI and your name, but not much more ;) */
	virtual ~AI();
	const PLAYERCOLOR playercolor; /**< This represents your color during the game. You can try to change it, but hopefully you shouldn't be able.*/
	string owner; /**<Possibly your name.*/
	string AIname; /**<Possibly the name of your AI.*/

	friend class Game;
	friend class Round;
};

#endif /* AI_H_ */