/*
 * Carton.h
 *
 *  Created on: Apr 5, 2017
 *      Author: udotson
 */

#ifndef CARTON_H_
#define CARTON_H_
#include "Box.h"

class Carton : public Box {
public:
	Carton(const char* pStr = "Cardboard");
	virtual ~Carton();  //I made the destructors virtual Why????

	//Copy Constructor
	Carton(const Carton& );
	char* getMaterial() const;

private:
	char* pMaterial;
};

#endif /* CARTON_H_ */
