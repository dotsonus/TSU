/*
 * BoxList.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */

#include <NodeList.h>
#include <cstddef>

NodeList::NodeList() {
	head = tail = NULL;

	//FIXME: Temp node to go bye bye when add_SlowImplementation removed
	tempNode = NULL;
}

NodeList::~NodeList() {
	//TODO: delete head and everything in list
}

/**
 * This was our first implementation
 * Traversing the entire list to add to the end is a performance hit.
 * best case:  O(1)
 * worst case: O(N)
 *
 */
void NodeList::add_SlowImplementation(Node *node) {
	if (head == NULL) {
		head = node;
	} else {
		tempNode = head;
		while (tempNode->getNext() != NULL) {
			tempNode = tempNode->getNext();
		}
		tempNode->setNext(node);
	}
}

/**
 * Cleaner implementation of adding to link list
 * best case:  O(1)
 * worst case: O(1)
 */
void NodeList::add_FastImplementation(Node *node) {
	if (head == NULL) {
		//This is the first entry so point both head and tail to the new node
		head = tail = node;
	} else {
		//1st - preserve the link from the previous node by pointing the tail to the new node.
		tail->setNext(node);
		//2nd - move the tail pointer to the end, which happens to be the new node.
		tail = node;

	}
}
