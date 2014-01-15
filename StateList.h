/*
 * StateList.h
 *
 *  Created on: 08.01.2014
 *      Author: David
 */

#ifndef STATELIST_H_
#define STATELIST_H_

#include"Zustand.h"
#include <QObject>

class StateList{
	int capacity;
	int actualSize;
	Zustand** list;
public:
	StateList();
	virtual ~StateList();

	void push_back(const Zustand&);
  int size() const;
  Zustand* get(int i) const;


};

#endif /* STATELIST_H_ */
