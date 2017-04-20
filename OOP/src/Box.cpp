/*
 * Box.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */
#include <cstddef>
#include "Box.h"
#include <iostream>

Box::Box(double lv, double bv, double hv) :
		length(lv), breadth(bv), height(hv) {
	//Init an Id for this box
	static int id = 0;
	this->id = id++;
	std::cout << "This is the Box constructor ID:" << this->getId()	<< std::endl;
}

Box::~Box() {
	// TODO Auto-generated destructor stub
	std::cout << "This is the Box Destructor ID:" << this->getId()	<< std::endl;
}


int Box::getId() const {
	return id;
}

double Box::getBreadth() const {
	return breadth;
}

double Box::getHeight() const {
	return height;
}

double Box::getLength() const {
	return length;
}

void Box::setLength(double newLength) {
	this->length = newLength;
}

void Box::setBreadth(double breadth) {
	this->breadth = breadth;
}

void Box::setHeight(double height) {
	this->height = height;
}

void Box::setId(int id) {
	this->id = id;
}
