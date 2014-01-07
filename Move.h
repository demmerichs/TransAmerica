/*
 * Move.h
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#ifndef MOVE_H_
#define MOVE_H_

#include"Konstant.h"
#include"Verbindung.h"
#include"Zustand.h"

class Move {
private:
	bool gueltigkeit;
	bool gueltigkeitUEberprueft;
	bool richtigBelegt;	//TODO
	short spielerfarbe;
	short anzahlSchienen;
	const Verbindung* Belegt[2];

public:
	Move(short spielerfarbe, const Verbindung* belegt1, const Verbindung* belegt2);
	virtual ~Move();

	bool gueltig(Zustand, short);
	void ausfuehren(Zustand&) const;

	void dump() const;
	Move& operator=(const Move& zuweisung) {
		this->spielerfarbe = zuweisung.spielerfarbe;
		this->anzahlSchienen = zuweisung.anzahlSchienen;
		this->gueltigkeitUEberprueft=zuweisung.gueltigkeitUEberprueft;
		this->richtigBelegt=zuweisung.richtigBelegt;
		for(int i=0;i<anzahlSchienen;i++)
			Belegt[i]=zuweisung.Belegt[i];
		return *this;
	}
};

#endif /* MOVE_H_ */
