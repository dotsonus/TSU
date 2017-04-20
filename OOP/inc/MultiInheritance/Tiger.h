/*
 * Tiger.h
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */

#ifndef TIGER_H_
#define TIGER_H_

#include <MultiInheritance/Animal.h>

namespace MultiInheritance {

class Tiger: virtual public Animal {
public:
	Tiger();
	virtual ~Tiger();

	int getNumOfStripes() const;
	void setNumOfStripes(int numOfStripes);
	virtual const char* getSpecies() const;

private:
	int numOfStripes;
};


} /* namespace MultiInheritance */


#endif /* TIGER_H_ */
