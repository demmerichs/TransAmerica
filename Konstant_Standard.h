/*
 * Coordinate.h
 *
 *  Created on: 18.11.2013
 *      Author: David
 */

#ifndef KONSTANT_STANDARD_H_
#define KONSTANT_STANDARD_H_

#include<string>

//#define DEBUG

//Brett
//name der Brettdateien
const std::string BRETTNAME = "Standard";
//string BRETTNAME = "FlyEurope";

//schienennetznummer zu Beginn gleich der Farbnummer
const short KEINSCHIENENNETZ=0;

//Koordinatenwerte
const short NULL_KOOWERT=-1;
const short MAX_X=20; /**< The maximum possible x-value on the board.*/
const short MAX_Y=13;


//stadtfarben
//positiv von 1 bis n, mit n=MAX_FARBEN Anzahl der Farben
const short NULL_FARBE=0;
const short MAX_FARBEN=5;
const short BLAU=1;
const short GELB=2;
const short GRUEN=3;
const short ORANGE=4;
const short ROT=5;

//stadtnummern
//von 1 bis k, mit k=MAX_STADTNR
//ab SPIELER_GRENZE wird mit allen Staedten gespielt, sonst nur mit den ersten STADTNR_GRENZE
const short MAX_STADTNR=7;
const short SPIELER_GRENZE=4;
const short STADTNR_GRENZE=5;

//spielerfarben
//negativ von -1 bis -n mit MAX_SPIELER=n
const short SPIELER_BLAU=-1;
const short SPIELER_GELB=-2;
const short SPIELER_GRUEN=-3;
const short SPIELER_LILA=-4;
const short SPIELER_ORANGE=-5;
const short SPIELER_WEISS=-6;
const short MAX_SPIELER=6;

#endif /* KONSTANT_STANDARD_H_ */
