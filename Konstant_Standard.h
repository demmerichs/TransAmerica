/*
 * Coordinate.h
 *
 *  Created on: 18.11.2013
 *      Author: David
 */

#ifndef KONSTANT_STANDARD_H_
#define KONSTANT_STANDARD_H_

#include<string>
#include<fstream>
#include<vector>

//#define DEBUG

//Brett
//name der Brettdateien
const std::string BRETTNAME = "Standard";
//string BRETTNAME = "FlyEurope";

//schienennetznummer zu Beginn gleich der Farbnummer
const short KEINSCHIENENNETZ=0;

//Koordinatenwerte
const short NULL_COORDINATE_VALUE=-1;
const short MAX_X=20; /**< The maximum possible x-value on the board.*/
const short MAX_Y=13;


//stadtfarben
//positiv von 1 bis n, mit n=NUMBER_CITYCOLOURS Anzahl der Farben
const short NUMBER_CITYCOLOURS=5;
enum CITYCOLOURS{C_BLUE,C_GREEN,C_ORANGE,C_RED,C_YELLOW,C_NULLCOLOUR};
const CITYCOLOURS CITYCOLOURS_LIST[]={C_BLUE,C_GREEN,C_ORANGE,C_RED,C_YELLOW};
CITYCOLOURS operator>>(std::ifstream &infile,CITYCOLOURS &citycolour);

//stadtnummern
//von 1 bis k, mit k=MAX_STADTNR
//ab SPIELER_GRENZE wird mit allen Staedten gespielt, sonst nur mit den ersten STADTNR_GRENZE
const short MAX_STADTNR=7;
const short SPIELER_GRENZE=4;
const short STADTNR_GRENZE=5;

//spielerfarben
//negativ von -1 bis -n mit MAX_PLAYER=n
enum PLAYERCOLOURS{P_BLUE,P_GREEN,P_ORANGE,P_VIOLET,P_WHITE,P_YELLOW};
const short MAX_PLAYER=6;

#endif /* KONSTANT_STANDARD_H_ */
