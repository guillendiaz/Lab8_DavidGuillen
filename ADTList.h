#ifndef ADTLIST_H
#define ADTLIST_H
#include "Luchador.h"

class ADTList{
		protected:
			int size;
		public:
			ADTList();
			virtual ~ADTList();
			int Size()const;
			virtual bool insert(Luchador*, int)=0;
			virtual Luchador* remove(int)=0;
			virtual Luchador* first()const=0;
			virtual Luchador* last()const=0;
			virtual void clear()=0;
			virtual int indexOf(Luchador*)const=0;
			virtual Luchador* get(int)=0;
			virtual int Capacity()const=0;
			virtual bool isEmpty()const=0;
			virtual bool isFull()const=0;

};

#endif