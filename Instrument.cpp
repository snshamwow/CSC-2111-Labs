#include "Instrument.h"

Instrument::Instrument()
{
	// TODO: Implement the base class default constructor.  Initialize the
	// brand and sound to unknown.
	// (3 points).
	brand = "unknown";
	sound = "unknown";
}

Instrument::Instrument(string instrumentBrand, string instrumentSound)
{
	// TODO: Implement the base class default constructor.  Initialize the
	// vechicleName and topSpeed to the values passed in the parameters.
	// (3 points).
	setBrand(instrumentBrand);
	setSound(instrumentSound);
}

Instrument::~Instrument()
{
	// TODO: When a class has virtual functions, a virtual destructor must be
	// included.  Does any code need to be written it this specific virtual
	// destructor?  Why or why not?
	// (3 points). 

	//NO because virtual functions automatically destruct
	
}

void Instrument::setBrand(string instrumentBrand)
{
	// TODO: Implement the setBrandfunction.  Set the brand member
	// variable according to the value passed in the parameter.
	// (3 points).
	brand = instrumentBrand;
}

void Instrument::setSound(string instrumentSound)
{
	// TODO: Implement the setSound function.  Set the sound member
	// variable according to the value passed in the parameter.
	// (3 points).
	sound = instrumentSound;
}

string Instrument::getBrand() const
{
	// TODO: Implement the getBrand function.  Return the
	// brand member variable.
	// (3 points).
	return brand;
}

string Instrument::getSound() const
{
	// TODO: Implement the getSound function.  Return the
	// sound member variable.
	// (3 points).
	return sound;
}