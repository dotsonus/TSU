/*
 * Derived.h
 *
 *  Created on: Apr 11, 2017
 *      Author: udotson
 */

#ifndef DERIVED_H_
#define DERIVED_H_

#include <Base.h>

class Derived: public Base {
public:
	Derived();
	~Derived();
	char* getName() const;

private:
	char* name;
};

#endif /* DERIVED_H_ */
