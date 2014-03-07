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

class AI {
	static std::set<PLAYERCOLOUR> participatingPlayerColours;
protected:
	virtual Move doMove(State &aktuell) =0; /**<hier wird der Zug implementiert*/
	virtual Vector setPawn(State &aktuell) =0; /**<hier muss der Pawn gesetzt werden*/
	virtual bool countPoints(State &currentState,
			std::vector<Connection*> path) =0; /**<Diese Funktion zaehlt die Minuspunkte am Ende einer Runde*/
	virtual void gatherInformationEndOfRound(
			const RoundLogger* currentInfos) =0;
	const City** handkarten; /**<array von handkartenzeigern, eine einfache Stadtliste*/
public:
	AI(PLAYERCOLOUR spielerfarbe);
	virtual ~AI();
	const PLAYERCOLOUR spielerfarbe;
	string owner; /**<wem die KI gehoert*/
	string AIname; /**<name der KI*/

	friend class Game;
	friend class Round;
};

#endif /* AI_H_ */
