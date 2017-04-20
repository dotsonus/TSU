/*
 * BoxList.h
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */

/**
 * LESSON:
 * Include guards
 *  "#pragma once" vs "#ifndef NODELIST_H_
					   #define NODELIST_H_"
	What are the advantages disadvantages of these two Include guards?
	What is an Include guard?

 */

#ifndef NODELIST_H_
#define NODELIST_H_

#include "Node.h"

/**
 * \brief The NodeList is a general purpose container that can be used as a linked list, stack,
 * queue, tree, or map
 */
class NodeList {
public:
	NodeList();
	virtual ~NodeList();  //I made the destructors virtual Why????

	//Linked List
	void add_SlowImplementation(Node*);
	void add_FastImplementation(Node*);

	//Stack
	void push(Node*);
	Node* pop();

	//Queue
	void enqueue(Node*);
	Node* dequeue();

	//Binary Tree

	//Set Associative Data Structure

	const char* toString(void);
private:
	//Pointers to head and tail of list  - Moved these back to private were they should be
	Node *head;
	Node *tail;

	//This is not needed for a faster implementation of the linked list add
	Node *tempNode;
};

#endif /* NODELIST_H_ */
