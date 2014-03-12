/*
 * Coordinate.h
 *
 *  Created on: 18.11.2013
 *      Author: David
 */

#ifndef KONSTANT_FLYEUROPE_H_
#define KONSTANT_FLYEUROPE_H_

#include<string>

//Board
//name der Brettdateien
const string BOARDNAME = "hdr/game/boardSettings/flyeurope/";

//schienennetznummer zu Beginn gleich der Farbnummer
const short KEINSCHIENENNETZ = 0;

//Koordinatenwerte
const short NULL_KOOWERT = -1;
const short MAX_X = 19;
const short MAX_Y = 14;

//stadtfarben
//positiv von 1 bis n, mit n=NUMBER_CITYCOLORS Anzahl der Farben
const short NULL_FARBE = 0;
const short NUMBER_CITYCOLORS = 5;
const short BLAU = 1;
const short GRAU = 2;
const short ORANGE = 3;
const short ROT = 4;
const short WEISS = 5;

//stadtnummern
//von 1 bis k, mit k=MAX_STADTNR
//ab SPIELER_GRENZE wird mit allen Staedten gespielt, sonst nur mit den ersten STADTNR_GRENZE
const short MAX_STADTNR = 7;
const short SPIELER_GRENZE = 4;
const short STADTNR_GRENZE = 5;

//spielerfarben
//negativ von -1 bis -n mit MAX_PLAYER=n
const short SPIELER_BLAU = -1;
const short SPIELER_GELB = -2;
const short SPIELER_GRUEN = -3;
const short SPIELER_LILA = -4;
const short SPIELER_ORANGE = -5;
const short SPIELER_WEISS = -6;
const short MAX_PLAYER = 6;

#endif /* KONSTANT_FLYEUROPE_H_ */
