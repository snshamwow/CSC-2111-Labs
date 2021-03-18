#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal();
	Animal(string, int, int);
	void setData(string, int, int);
	void setName(string);
	void setAge(int);
	void setWeight(int);
	string getName() const;
	int getAge() const;
	int getWeight() const;
	void printRecord() const;

	static bool isOlder(const Animal &first, const Animal &second);

private:
	string name;
	int age;
	int weight;
};

#endif // ! ANIMAL_H
