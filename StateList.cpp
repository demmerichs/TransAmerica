/*
 * StateList.cpp
 *
 *  Created on: 08.01.2014
 *      Author: David
 */

#include "StateList.h"

StateList::StateList() :
		capacity(0), actualSize(0), list(0){

}

StateList::~StateList() {
	for (int i = 0; i < capacity; i++)
		delete list[i];
	delete list;
}

void StateList::push_back(const Zustand &state) {
	if (capacity < actualSize+1) {
		if (capacity == 0)
			capacity++;
		else
			capacity *= 2;
		Zustand** newList=new Zustand*[capacity];
		for(int i=0;i<actualSize;i++){
			newList[i]=new Zustand(*list[i]);
			delete list[i];
		}
		delete list;
		list=newList;
	}
	list[actualSize] =new Zustand(state);
	actualSize++;
}

const Zustand& StateList::get(int i) const {
	return *list[i];
}

int StateList::size() const{
	return actualSize;
}
