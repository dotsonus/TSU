/*
 * Base.cpp

 *
 *  Created on: Apr 11, 2017
 *      Author: udotson
 */
#include <iostream>

#include "Base.h"

Base::Base() {
	std::cout << "This is the Base constructor" << std::endl;
	std::cout << "\tBase address = " << this << std::endl;
}

Base::~Base() {
	std::cout << "This is the Base destructor" << std::endl;
}

