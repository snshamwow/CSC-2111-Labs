#include "Harp.h"

Harp::Harp()
{
	// TODO: Implement the Harp derived class default constructor.  Initialize the
	// the numberOfStrings member variable to 0.
	// (3 points).

	setNumberOfStrings(0);
}

Harp::Harp(string instrumentBrand, string instrumentSound, int numStrings)
	:Instrument(instrumentBrand, instrumentSound)
{
	// TODO: Implement the Harp derived class parameterized constructor.  Initialize the
	// member variables requiring initialization according to the values passed in the
	// parameters.
	// (3 points).
	setNumberOfStrings(numStrings);
}

Harp::~Harp() {}

void Harp::setNumberOfStrings(int numStrings)
{
	// TODO: Implement the setNumberOfStrings function.  Set the numberOfStrings member variable
	// according to the value passed in the parameter.
	// (3 points).
	numberOfStrings = numStrings;
}

int Harp::getNumberOfStrings() const
{
	// TODO: Implement the getNumberOfStrings function.  Return the numberOfStrings member
	// variable.
	// (3 points).
	return numberOfStrings;
}

void Harp::play() const
{
	// TODO: Implement the play function.  Print the Instrument name, its sound,
	// and its number of strings.
	// ex. "Playing the Pixie brand harp, which has 40 strings, makes the sound: 'Pling-pluck' "
	// (3 points).
	cout << "Playing the " << getBrand() << " brand harp, which has " << numberOfStrings <<
		" strings, makes the sound: " << getSound() << endl;
}
