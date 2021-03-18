#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
#include "Animal.h"
#include "Horse.h"
#include "Bird.h"

class Zoo
{
public:
	Zoo(const Horse &h, const Bird &b);
	void printZooData() const;

private:
	Horse horse;
	Bird bird;
};

#endif // !ZOO_H
