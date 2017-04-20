/*
 * Lion.h
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */

#ifndef LION_H_
#define LION_H_

#include <MultiInheritance/Animal.h>

namespace MultiInheritance {

class Lion: virtual public Animal {
public:
	Lion();
	virtual ~Lion();

	double getManeLength() const;
	void setManeLength(double maneLength);
	virtual const char* getSpecies() const;

private:
	double maneLength;
};


} /* namespace MultiInheritance */

#endif /* LION_H_ */
