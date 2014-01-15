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

class StateList: public QObject{
  Q_OBJECT
	int capacity;
	int actualSize;
	State** list;
public:
	StateList();
	virtual ~StateList();

	void push_back(const State&);
  int size() const;
  State* get(int i) const;
public slots:
  void callGet (int i); //kleine Hilfe um get aufzurufen
signals:
  void emitGet(State* aZp);


};

#endif /* STATELIST_H_ */
