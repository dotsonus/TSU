// OOP.cpp : Defines the entry point for the console application.
//

#include "Example.h"

int main(int argc, char* argv[]) {
	int exampleNum = 5;

	switch (exampleNum) {
	case 1:
		Example::Inheritance();
		break;
	case 2:
		Example::DataStruct();
		break;
	case 3:
		Example::Destructor();
		break;
	case 4:
		Example::CopyConstructor();
		break;
	case 5:
		Example::DiamondProblem();
		break;
	}

	return 0;
}

