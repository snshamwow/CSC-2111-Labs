#ifndef HORSE_H
#define HORSE_H
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Horse : public Animal
{
public:
	Horse();
	Horse(string, int, int, string);
	void setData(string, int, int, string);
	void setColor(string);
	string getColor() const;
	void printRecord() const;

private:
	string color;
};

#endif // !HORSE_H
