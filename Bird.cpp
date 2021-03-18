#include "Bird.h"

Bird::Bird()
{
	wingSpan = 0.0;
}

Bird::Bird(string n, int a, int w, double ws):Animal(n, a, w)
	// TODO: Before the opening brace, use the syntax from the example slides
	// to construct the base class using the base class parameterized
	// constructor.  Pass the base class content (name, age and weight)
	// up to the base class.
{
	setWingspan(ws);
}

void Bird::setData(string n, int a, int w, double ws)
{
	setName(n);
	setAge(a);
	setWeight(w);
	setWingspan(ws);
}

void Bird::setWingspan(double ws)
{
	// TODO:  Provided that the parameter value is >= 0, set the member
	// variable wingSpan according to the parameter.  Otherwise, set the
	// member variable wingSpan to 0.0.
	if (ws >= 0)
		wingSpan = ws;
	else
		wingSpan = 0.0;
}

double Bird::getWingspan() const
{
	return wingSpan;
}

void Bird::printRecord() const
{
	// TODO:  The base class and derived classes both have printRecord functions.
	// The derived class printRecord function overrides the base class one.  However,
	// we can invoke the base class version of the function here if we scope to it.
	// Since the member variables name, age, and weight are stored
	// in the base class, use the base class's printRecord function output those
	// base class values.

	// Then output the derived class member variable directly.
	Animal::printRecord();
	cout << "Wingspan: " << wingSpan << endl;
}