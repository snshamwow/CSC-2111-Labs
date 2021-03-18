#include "City.h"

City::City(std::string n, int pop)
	:name(n), population(pop) {}

void City::setName(std::string n)
{
	name = n;
}

void City::setPopulation(int pop)
{
	population = pop;
}

std::string City::getName() const
{
	return name;
}

int City::getPopulation() const
{
	return population;
}

void City::printCity() const
{
	std::cout << "Name: " << name;
	std::cout << "\tPopulation: " << population << std::endl;
}
