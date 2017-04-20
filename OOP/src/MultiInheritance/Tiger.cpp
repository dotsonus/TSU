/*
 * Tiger.cpp
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */

#include <MultiInheritance/Tiger.h>

namespace MultiInheritance {

Tiger::Tiger() {
	setSpecies("Panthera Tigris");
	setNumOfStripes(0);
}

Tiger::~Tiger() {
}

int Tiger::getNumOfStripes() const {
	return numOfStripes;
}

void Tiger::setNumOfStripes(int numOfStripes) {
	this->numOfStripes = numOfStripes;
}

const char* Tiger::getSpecies() const {
	return species;
}

} /* namespace MultiInheritance */
