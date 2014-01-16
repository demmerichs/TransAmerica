/*
 * Game.h
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#ifndef GAME_H_
#define GAME_H_

#include<vector>
#include<cstdlib>
#include<ctime>
using std::vector;
#include"Board.h"
#include"State.h"
#include"Move.h"
#include"AI.h"
#include"Pawn.h"
#include"Konstant.h"
#include"StateList.h"

class Game {
protected:
	const short spieleranzahl;
	const AI* KIliste;
	short startstartspieler;
	Board &gameBoard;
	State currentState;
	StateList stateList;
	short* points;
	std::vector<City***> playingCards;
	short grenzwert;
	short round, turn;

	void setzeGrenzwertNeu();
	void spieleRunde(short);
	void kartenAusteilen();
	void PoeppelAufstellen(short);
	bool keinVerlierer() const;
	bool keinRundenGewinner() const;
	bool RundenGewinner(short spieler) const;
	int punkteabzug(int spieler);

public:
	Game(short anzahl, short starter, AI* KIaufgelistet, Board &bord);
	Game(short anzahl, short starter, AI* KIaufgelistet, Board &bord,
			unsigned seed);
	virtual ~Game();

	void spielen();

};

#endif /* GAME_H_ */
