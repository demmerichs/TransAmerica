/*
 * KIspieler.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "KIspieler.h"

KIspieler::KIspieler(short farb): spielerfarbe(farb){
	handkarten=new const City*[MAX_FARBEN];
	programmierer="";
}

KIspieler::~KIspieler() {
	for(int i=0;i<MAX_FARBEN;i++)
		delete handkarten[i];
	delete[] handkarten;
}
