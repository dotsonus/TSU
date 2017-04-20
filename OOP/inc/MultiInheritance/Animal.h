/*
 * Animal.h
 *
 *  Created on: Apr 12, 2017
 *      Author: udotson
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

namespace MultiInheritance {


enum Gender {MALE, FEMALE}; //Question - Why do you not need typedef enum?
const int MALE2 = 0;

class Animal {
public:
	Animal();
	virtual ~Animal();
	char* getName() const;
	void setName(char* name);
	virtual const char* getSpecies() const = 0;
	void setSpecies(const char* species);
	Gender getGender() const;
	void setGender(Gender gender);

protected:
	const char* species;
private:
	char* name;
	Gender gender;
};

} /* namespace MultiInheritance */

#endif /* ANIMAL_H_ */
