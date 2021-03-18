#ifndef STATE_H
#define STATE_H
#include <string>
#include <vector>
#include <algorithm>
#include "City.h"

class State
{
public:
	State();
	void runProgram();

private:
	void displayChoices() const;
	void addCity();
	void deleteLastElement();
	void printSpecificCity();
	void printAll();

	std::vector<City> cities;
};
#endif // !STATE_H



