#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "ADTList.h"
#include <iostream>
#include "Luchador.h"
#include "nodo.h"

using namespace std;

class LinkedList : public ADTList{
	protected:
		nodo* head;
	
	public:
		LinkedList();
		virtual ~LinkedList();
		virtual bool insert(Luchador*, int);
		virtual Luchador* remove(int);
		virtual Luchador* first()const;
		virtual Luchador* last()const;
		virtual void clear();
		virtual int indexOf(Luchador*)const;
		virtual Luchador* get(int);
		virtual int Capacity()const;
		virtual bool isEmpty()const;
		virtual bool isFull()const;
};

#endif