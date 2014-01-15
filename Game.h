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
#include"Brett.h"
#include"State.h"
#include"Move.h"
#include"KIspieler.h"
#include"Poeppel.h"
#include"Konstant.h"
#include"StateList.h"
#include"window.h"

class Game {
  friend class UIEXEC;
  friend class Window;
	const short spieleranzahl;
	const KIspieler* KIliste;
	short startstartspieler;
	Brett &Spielbrett;
	State aktuellerZustand;
    StateList zustandsListe;
    short* punkte;
	const City *** handkarten;
	short grenzwert;

	void setzeGrenzwertNeu();
	void spieleRunde(short);
	void kartenAusteilen();
	void PoeppelAufstellen(short);
	bool keinVerlierer() const;
	bool keinRundenGewinner() const;
	bool RundenGewinner(short spieler) const;
	int punkteabzug(int spieler);

	/**
	 * This method gets called when the game
	 * calculations finished and the graphical UserInterface shall come up.
	 */
	void graphicOutput() const;

public:
	Game(short anzahl, short starter, KIspieler* KIaufgelistet, Brett &bord);
	Game(short anzahl, short starter, KIspieler* KIaufgelistet, Brett &bord, unsigned seed);
	virtual ~Game();

        void spielen();


};

#endif /* GAME_H_ */
