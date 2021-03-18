#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Bird : public Animal
{
public:
	Bird();
	Bird(string, int, int, double);
	void setData(string, int, int, double);
	void setWingspan(double);
	double getWingspan() const;
	void printRecord() const;

private:
	double wingSpan;
};

#endif // !BIRD_H
