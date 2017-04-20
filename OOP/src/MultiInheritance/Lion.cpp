/*
 * Lion.cpp
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */


#include <MultiInheritance/Lion.h>

namespace MultiInheritance {

Lion::Lion() {
	setSpecies("Panthera Leo");
	setManeLength(0);

}

Lion::~Lion() {
	// TODO Auto-generated destructor stub
}

double Lion::getManeLength() const {
	return maneLength;
}

void Lion::setManeLength(double maneLength) {
	this->maneLength = maneLength;
}

const char* Lion::getSpecies() const {
	return species;
}


} /* namespace MultiInheritance */
