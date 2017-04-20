/*
 * Liger.cpp
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */

#include <MultiInheritance/Liger.h>
#include <MultiInheritance/Animal.h>

namespace MultiInheritance {

Liger::Liger() {
	setSpecies("Panthera leo x Panthera tigris");

}

Liger::~Liger() {
	// TODO Auto-generated destructor stub
}


const char* Liger::getSpecies() const{
	return species;
}

} /* namespace MultiInheritance */
