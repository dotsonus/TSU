/*
 * Animal.cpp
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */

#include <MultiInheritance/Animal.h>

namespace MultiInheritance {

Animal::Animal() {
	setGender(MALE);
}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

char* Animal::getName() const {
	return name;
}

void Animal::setName(char* name) {
	this->name = name;
}


void Animal::setSpecies(const char* species) {
	this->species = species;
}

Gender Animal::getGender() const {
	return gender;
}

void Animal::setGender(Gender gender) {
	this->gender = gender;
}

} /* namespace MultiInheritance */
