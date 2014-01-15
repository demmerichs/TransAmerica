/*
 * KIspieler.h
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#ifndef KISPIELER_H_
#define KISPIELER_H_

#include"Konstant.h"
#include"Move.h"
#include"State.h"
#include"Poeppel.h"
#include<string>
#include<iostream>

class Game;

class KIspieler {
protected:
	virtual Move zug(State &aktuell) const =0;	//hier wird der Zug implementiert
	virtual Vector poeppelSetzen(State &aktuell) const =0;	//hier muss der Poeppel gesetzt werden
	const City** handkarten;	//array von handkartenzeigern, eine einfache Stadtliste
public:
	KIspieler(short spielerfarbe);
	virtual ~KIspieler();
	const short spielerfarbe;
	string programmierer;	//Hier kann ein Name fuer die KI eingespeichert werden

	friend class Game;
    friend class Spielbrett;
};

#endif /* KISPIELER_H_ */
