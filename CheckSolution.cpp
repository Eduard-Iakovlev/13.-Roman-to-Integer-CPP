#include "CheckSolution.h"

void CheckSolution::setExpected(int expected) {
	_expected = expected;
}

void CheckSolution::setNumInt(int numInt){
	_numInt = numInt;
}

void CheckSolution::setCheckData(int expected, int numInt){
	setExpected(expected);
	setNumInt(numInt);
}

bool CheckSolution::check(){
	return _expected == _numInt;
}
