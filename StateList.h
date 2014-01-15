/*
 * StateList.h
 *
 *  Created on: 08.01.2014
 *      Author: David
 */

#ifndef STATELIST_H_
#define STATELIST_H_

#include"State.h"
#include <QObject>

class StateList{
	int capacity;
	int actualSize;
	State** list;
public:
	StateList();
	virtual ~StateList();

	void push_back(const State&);
  int size() const;
  State* get(int i) const;
  
};

#endif /* STATELIST_H_ */
