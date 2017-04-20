/*
 * Example.h
 *
 *  Created on: Apr 11, 2017
 *      Author: udotson
 */

#ifndef EXAMPLE_H_
#define EXAMPLE_H_

class Example {
public:
	Example();
	virtual ~Example();

	static void CopyConstructor(void);
	static void DataStruct(void);
	static void Destructor(void);
	static void DiamondProblem(void);
	static void Inheritance(void);
};

#endif /* EXAMPLE_H_ */
