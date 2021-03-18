#include "Zoo.h"

Zoo::Zoo(const Horse &h, const Bird &b)
{
	// TODO:  Implement this parameterized constructor to set the member
	// objects horse and bird according to the objects passed in the
	// parameter.
	horse = h;
	bird = b;
}

void Zoo::printZooData() const
{
	// Output the information about the two animals at this zoo.
	// Output the information about the horse.  Then output the
	// information about the bird.
	horse.printRecord();
	cout << endl;
	bird.printRecord();
	// Using the isOld function, also output information about 
	// which of the two animals is older.
	if (Animal::isOlder(horse, bird))
	{
		cout << endl;
		cout << horse.getName() << " is older than " << bird.getName() << endl;
	}
	
	else
	{
		cout << endl;
		cout << horse.getName() << " is not older than " << bird.getName() << endl;
	}
}