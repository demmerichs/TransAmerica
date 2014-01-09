/*
 * StateList.h
 *
 *  Created on: 08.01.2014
 *      Author: David
 */

#ifndef STATELIST_H_
#define STATELIST_H_

#include"State.h"

class StateList{
	int capacity;
	int actualSize;
	State** list;
public:
	StateList();
	virtual ~StateList();

	void push_back(const State&);
	const State& get(int i) const;
	int size() const;
};

#endif /* STATELIST_H_ */
