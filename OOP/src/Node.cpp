/*
 * Node.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */

#include "Node.h"
#include <cstddef>
#include <iostream>

Node::Node(int num) {
	next = NULL;
	this->nodeNum = num;
	std::cout << "This is the Node constructor Num:" << this->getNodeNum() << std::endl;

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* next) {
	this->next = next;
}

int Node::getNodeNum() const {
	return nodeNum;
}
