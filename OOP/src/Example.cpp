/*
 * Example.cpp
 *
 *  Created on: Apr 11, 2017
 *      Author: udotson
 */

#include <Carton.h>
#include <Example.h>
#include <MultiInheritance/Liger.h>
#include <Node.h>
#include <NodeList.h>
#include <iostream>

#include "Derived.h"

using namespace std;
using namespace MultiInheritance;

Example::Example() {
	// TODO Auto-generated constructor stub

}

Example::~Example() {
	// TODO Auto-generated destructor stub
}

/**
 * \brief Inheritance example
 */

/**
 *
 */
void Example::Inheritance(void) {
	Box myBox;
	Carton myCarton;
	Carton candyCarton("Thin cardboard");

	cout << endl << "myBox occupies " << sizeof myBox << " bytes" << endl;
	cout << "myCarton occupies " << sizeof myCarton << " bytes" << endl;
	cout << "candyCarton occupies " << sizeof candyCarton << " bytes" << endl;

	myBox.setLength(10.0);
	candyCarton.setLength(10.0);

}

/**
 * \brief Destructor example
 *  <br> Virtual functions
 *  <br> Destructor constructor order
 *
 */
void Example::Destructor(void) {
	Base *myBase = new Derived(); // Why is this legal?

	delete myBase; //What happens here?
}

/**
 * \brief Copy Constructor example
 * <br> shows how to implement a copy constructor
 */
void Example::CopyConstructor(void) {
	Box myBox(2.0, 3.0, 4.0);
	Box copyBox(myBox);

	cout << "myBox Height = " << myBox.getHeight() << endl;
	cout << "myBox Length = " << myBox.getLength() << endl;
	cout << "myBox Breadth = " << myBox.getBreadth() << endl << endl;

	cout << "copyBox Height = " << copyBox.getHeight() << endl;
	cout << "copyBox Length = " << copyBox.getLength() << endl;
	cout << "copyBox Breadth = " << copyBox.getBreadth() << endl;

	Carton candyCarton("wood");
	candyCarton.setLength(5.4);
	candyCarton.setBreadth(9);
	candyCarton.setHeight(10);
	cout << "candyCarton Material = " << candyCarton.getMaterial() << endl;
	cout << "candyCarton Height = " << candyCarton.getHeight() << endl;
	cout << "candyCarton Length = " << candyCarton.getLength() << endl;
	cout << "candyCarton Breadth = " << candyCarton.getBreadth() << endl
			<< endl;
	Carton copyCarton(candyCarton);

	cout << "copyCarton Material = " << copyCarton.getMaterial() << endl;
	cout << "copyCarton Height = " << copyCarton.getHeight() << endl;
	cout << "copyCarton Length = " << copyCarton.getLength() << endl;
	cout << "copyCarton Breadth = " << copyCarton.getBreadth() << endl << endl;
}

/**
 * \brief Data Structure Linked List example
 */
void Example::DataStruct(void) {
	NodeList *myList = new NodeList();
	Node *node;
	for (int i = 0; i < 5; i++) {

		node = new Node(i);

		myList->add_SlowImplementation(node);
	}
}

void Example::DiamondProblem(void) {
	//Tiger myTiger;
	Lion myLion;
	Liger myLiger;

	cout << "myLion Species: " << myLion.getSpecies() << endl; //Question: Why won't this compile?
	cout << "myLiger Species: " << myLiger.getSpecies() << endl;



}
