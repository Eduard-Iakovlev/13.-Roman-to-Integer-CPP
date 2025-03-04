#pragma once
class CheckSolution{
public:
	CheckSolution() = default;
	void setExpected(int expected);
	void setNumInt(int numInt);
	void setCheckData(int expected, int numInt);
	bool check();
private:
	int _expected, _numInt;
};

