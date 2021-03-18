#include "Horse.h"

Horse::Horse()
{
	// TODO:  Use the setColor function to set this derived class member 
	// variable color to "no-color".  The base class content will be
	// initialized according to the base class's default constructor.
	setColor("no-color");
}

Horse::Horse(string n, int a, int w, string b):Animal(n, a, w)
	// TODO: Before the opening brace, use the syntax from the example slides
	// to construct the base class using the base class parameterized
	// constructor.  Pass the base class content (name, age and weight)
	// up to the base class.
{
	setColor(b);
	// After the opening brace, call the setColor function to set the one
	// derived class member variable color according to the corresponding
	// parameter.

}

void Horse::setData(string n, int a, int w, string b)
{
	// TODO:  The base class and derived classes both have setData functions.
	// The derived class setData function overrides the base class one.  However,
	// we can invoke the base class version of the function here if we scope to it.  
	// Since the member variables name, age, and weight are stored
	// in the base class, use the base class's setData function to set those
	// values according to the corresponding parameters.
	setName(n);
	setAge(a);
	setWeight(w);
	setColor(b);
	// Then use the setColor function to set the remaining derived class variable.
}

void Horse::setColor(string b)
{
	// TODO:  Set the member variable name according to the parameter.
	color = b;
}

string Horse::getColor() const
{
	// TODO:  Return the member variable color.
	return color;
}

void Horse::printRecord() const
{
	// TODO:  The base class and derived classes both have printRecord functions.
	// The derived class printRecord function overrides the base class one.  However,
	// we can invoke the base class version of the function here if we scope to it.
	// Since the member variables name, age, and weight are stored
	// in the base class, use the base class's printRecord function output those
	// base class values.
	Animal::printRecord();
	cout << "Color: " << color << endl;
	// Then output the derived class member variable directly.
}