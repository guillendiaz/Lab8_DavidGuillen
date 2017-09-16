#ifndef NODO_H
#define NODO_H

#include "Luchador.h"
class nodo{
	friend class LinkedList;
	private:
		Luchador* elemento;
		nodo* next;

	public:
		nodo(Luchador*);
		~nodo();
};

#endif