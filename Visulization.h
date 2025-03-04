#pragma once
#include <string>

using namespace std;

class Visualization{
public:
	Visualization() = default;

	void setExample(int example);
	void setExpected(int expected);
	void setRoman(string _roman);
	void setNumInt();
	void setVisualizationData(int example, int expected, string _roman);

	void printSolution();
	void printCheck();

private:
	int _example, _expected, _numInt;
	string _roman;
};

