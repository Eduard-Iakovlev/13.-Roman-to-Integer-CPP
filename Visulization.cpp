#include "Visulization.h"
#include "CheckSolution.h"
#include "Solution.h"
#include <iostream>

using namespace std;

void Visualization::setExample(int example){
	_example = example;
}

void Visualization::setExpected(int expected) {
	_expected = expected;
}

void Visualization::setRoman(string roman){
	_roman = roman;
}

void Visualization::setNumInt() {
	Solution solution;
	_numInt = solution.romanToInt(_roman);
}

void Visualization::setVisualizationData(int example, int expected, string _roman) {
	setExample(example);
	setExpected(expected);
	setRoman(_roman);
}

void Visualization::printSolution(){
	cout << "============ Тест " << _example << " ============" << endl;
	cout << "Римское число: " << _roman << endl;
	cout << "Ожидаемый результат: " << _expected << endl;
	setNumInt();
	cout << "Полученный результат: " << _numInt << endl;
	cout << "============ Проверка ============" << endl;
	printCheck();
	cout << "====================================\n" << endl;
}

void Visualization::printCheck(){
	CheckSolution checkSolution;
	checkSolution.setCheckData(_expected, _numInt);
	if (checkSolution.check()) {
		cout << "Результат теста " << _example << " - ПРОЙДЕН" << endl;
	}
	else {
		cout << "Результат теста " << _example << " - НЕ ПРОЙДЕН" << endl;
	}
}


