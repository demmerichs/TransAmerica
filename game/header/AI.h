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

#include"Constants.h"
#include"Move.h"
#include"State.h"
#include"Pawn.h"

class AI {
protected:
	virtual Move zug(State &aktuell) const =0;	//hier wird der Zug implementiert
	virtual Vector poeppelSetzen(State &aktuell) const =0;	//hier muss der Pawn gesetzt werden
	const City** handkarten;	//array von handkartenzeigern, eine einfache Stadtliste
public:
	AI(PLAYERCOLOUR spielerfarbe);
	virtual ~AI();
	const PLAYERCOLOUR spielerfarbe;
	string programmierer;	//Hier kann ein Name fuer die KI eingespeichert werden

	friend class Game;
};

#endif /* AI_H_ */
