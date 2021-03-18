#include "Tuba.h"

Tuba::Tuba()
{
	// TODO: Implement the Tuba derived class default constructor.  Initialize the
	// the isSousaphone member variable to false.
	// (3 points).
	isSousaphone = false;
}

Tuba::Tuba(string instrumentBrand, string instrumentSound, bool isSous)
	:Instrument(instrumentBrand, instrumentSound)
{
	// TODO: Implement the Tuba derived class parameterized constructor.  Initialize the
	// member variables requiring initialization according to the values passed in the
	// parameters.
	// (3 points).
	isSousaphone = isSous;
}

Tuba::~Tuba() {}

void Tuba::setIsSousaphone(bool isSous)
{
	// TODO: Implement the setIsSousaphone function.  Set the isSousaphone member variable
	// according to the value passed in the parameter.
	// (3 points).
	isSousaphone = isSous;
}

bool Tuba::getIsSousaphone() const
{
	// TODO: Implement the getIsSousaphone function.  Return the IsSousaphone member
	// variable.
	// (3 points).
	return isSousaphone;
}

void Tuba::play() const
{
	// TODO: Implement the play function.  Print the Instrument name, its sound,
	// and if it is a sousaphone.
	// ex. "Playing the Yamaha brand tuba, which is not a sousaphone, makes the sound: 'Oom-pah' "
	// (3 points).
	
	cout << "Playing the " << getBrand() << " brand tuba, which ";
		if (isSousaphone)
			cout << "is a sousaphone,";
		else {
			cout << "is not a sousaphone,";
		}
			cout << "makes the sound: " << getSound() << endl;

}
