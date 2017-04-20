/*
 * Liger.h
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */

#ifndef MULTIINHERITANCE_LIGER_H_
#define MULTIINHERITANCE_LIGER_H_

#include <MultiInheritance/Lion.h>
#include <MultiInheritance/Tiger.h>


namespace MultiInheritance {

class Liger: public Lion, public Tiger {
public:
	Liger();
	virtual ~Liger();
	virtual const char* getSpecies() const;
};

} /* namespace MultiInheritance */

#endif /* MULTIINHERITANCE_LIGER_H_ */
