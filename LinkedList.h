#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "ADTList.h"
#include <iostream>

using namespace std;

class LinkedList : public ADTList{
	struct Node{
		Object* data;
		Node* next;
	};
	private:
		
	public:
		LinkedList();
		~LinkedList();
	
};

#endif