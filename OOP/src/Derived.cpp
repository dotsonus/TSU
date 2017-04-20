/*
 * Derived.cpp
 *
 *  Created on: Apr 11, 2017
 *      Author: udotson
 */

#include <iostream>
#include <cstring>

#include "Derived.h"

Derived::Derived() {
	std::cout << "This is the Derived constructor" << std::endl;
	this->name = new char[10];
	strcpy(this->name, "I'm Derived");

	std::cout << "\tDerived name = " << this->name << std::endl;
	std::cout << "\tDerived address = " << this << std::endl;
}

Derived::~Derived() {
	std::cout << "This is the Derived destructor" << std::endl;
}

char* Derived::getName() const {
	return name;
}
