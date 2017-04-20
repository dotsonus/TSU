/*
 * Node.h
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node(int);
	virtual ~Node();

	Node* getNext();
	void setNext(Node* next);
	int getNodeNum() const;

private:
	int nodeNum;

	Node *next;
};

#endif /* NODE_H_ */
