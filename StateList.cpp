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

void StateList::push_back(const State* state) {
	if (capacity < actualSize+1) {
		if (capacity == 0)
			capacity++;
		else
			capacity *= 2;
		State** newList=new State*[capacity];
		for(int i=0;i<actualSize;i++){
			newList[i]=new State(*list[i]);
			delete list[i];
		}
		delete list;
		list=newList;
	}
	list[actualSize] =new State(*state);
	actualSize++;
}


int StateList::size() const{
	return actualSize;
}


State* StateList::get(int i) const{
    if(i>=size()) {return list[size()-1];}
    if(i<0) {return list[0];}
    return list[i];
}

