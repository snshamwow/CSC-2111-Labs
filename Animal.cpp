#include "Animal.h"

Animal::Animal()
{
	setData("no-name", 0, 0);
}

Animal::Animal(string n, int a, int w)
{
	setData(n, a, w);
}

void Animal::setData(string n, int a, int w)
{
	setName(n);
	setAge(a);
	setWeight(w);
}

void Animal::setName(string n)
{
	name = n;
}

void Animal::setAge(int a)
{
	if (a > 0)
		age = a;
	else
		age = 0;
}

void Animal::setWeight(int w)
{
	if (w > 0)
		weight = w;
	else
		weight = 0;
}

string Animal::getName() const
{
	return name;
}

int Animal::getAge() const
{
	return age;
}

int Animal::getWeight() const
{
	return weight;
}

void Animal::printRecord() const
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Weight: " << weight << endl;
}

bool Animal::isOlder(const Animal &first, const Animal &second)
{
	if (first.getAge() > second.getAge())
		return true;
	else
		return false;
}