#ifndef CITY_H
#define CITY_H
#include <iostream>
#include <string>

class City
{
public:
	City(std::string n = "", int pop = 0);
	void setName(std::string n);
	void setPopulation(int pop);
	std::string getName() const;
	int getPopulation() const;
	void printCity() const;

private:
	std::string name;
	int population;
};

#endif // !CITY_H