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

class StateList: public QObject{
  Q_OBJECT
	int capacity;
	int actualSize;
	Zustand** list;
public:
	StateList();
	virtual ~StateList();

	void push_back(const Zustand&);
  int size() const;
  Zustand* get(int i) const;
public slots:
  void callGet (int i); //kleine Hilfe um get aufzurufen
signals:
  void emitGet(Zustand* aZp);


};

#endif /* STATELIST_H_ */
