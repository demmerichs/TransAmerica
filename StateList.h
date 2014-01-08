/*
 * StateList.h
 *
 *  Created on: 08.01.2014
 *      Author: David
 */

#ifndef STATELIST_H_
#define STATELIST_H_

#include"Zustand.h"

class StateList{
	int capacity;
	int actualSize;
	Zustand** list;
public:
	StateList();
	virtual ~StateList();

	void push_back(const Zustand&);
	const Zustand& get(int i) const;
	int size() const;
};

#endif /* STATELIST_H_ */
