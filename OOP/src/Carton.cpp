/*
 * Carton.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */

#include "Carton.h"
#include <cstring>
#include <iostream>

Carton::Carton(const char* pStr) {
	pMaterial = new char[strlen(pStr) + 1];
	strcpy(pMaterial, pStr);
	std::cout << "This is the Carton constructor ID:" << this->getId()
			<< std::endl;
}

//Destructor
Carton::~Carton() {
	delete[] pMaterial;
	std::cout << "This is the Carton Destructor ID:" << this->getId()
			<< std::endl;
}

Carton::Carton(const Carton& aCarton) {
	pMaterial = new char[strlen(aCarton.pMaterial) + 1];
	strcpy(pMaterial, aCarton.pMaterial);
	setLength(aCarton.getLength());
	setHeight(aCarton.getHeight());
	setBreadth(aCarton.getBreadth());



	std::cout << "Carton copy Constructor" << std::endl;
}

char* Carton::getMaterial() const {
	return pMaterial;
}
