#include <iostream>
#include <string>
#include "Visulization.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int expected;
	int example = 0;
	string roman;

	Visualization visualization;

	example++;
	roman = "III";
	expected = 3;
	visualization.setVisualizationData(example, expected, roman);
	visualization.printSolution();

	example++;
	roman = "LVIII";
	expected = 58;
	visualization.setVisualizationData(example, expected, roman);
	visualization.printSolution();

	example++;
	roman = "MCMXCIV";
	expected = 1994;
	visualization.setVisualizationData(example, expected, roman);
	visualization.printSolution();


}
