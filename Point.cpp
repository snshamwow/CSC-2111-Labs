include "Point.h"

#include <math.h>

Point::Point()
{
	// TODO:  Implement the default constructor. 
	// This is the constructor that creates the object when no 
	// parameters are passed in at instantiation. 

	// Set the x coordinate to: 0.0 
	// Set the y coordinate to: 0.0 
	
	x = 0;
	y = 0;
}

Point::Point(float xCoord, float yCoord)
{
	// TODO:  Implement the parameterized constructor. 
	// This is the constructor that creates the object when 
	// parameters are passed in at instantiation. 

	// Set the x coordinate using the corresponding parameter. 
	// Set the y coordinate using the corresponding parameter.
	
	x = xCoord;
	y = yCoord;
}

void Point::setX(float xCoord)
{
	// TODO:  Implement the setX function. 
	// Set the x coordinate using the parameter. 
	
	x = xCoord;
}

void Point::setY(float yCoord)
{
	// TODO:  Implement the setY function. 
	// Set the y coordinate using the parameter. 
	
	y = yCoord;
}

float Point::getX() const
{
	// TODO:  Implement the getX function. 
	// This function returns the x coordinate. ;
	
	return x;
}

float Point::getY() const
{
	// TODO:  Implement the getY function. 
	// This function returns the y coordinate. 
	
	return y;
}

float Point::getDistanceFromOrigin() const
{
	// TODO:  Implement the getDistanceFromOrigin function. 
	// This function returns the distance of the x and y coordinate (x,y) from the origin (0.0) 
	// The distance can be calculated using the formula: sqrt(x^2 + y^2) 
	// To access square root and exponents, you will need to include the <math> library. 

	return sqrt(pow(x, 2) + pow(y, 2));
}

void Point::printCoordinates() const
{
	// This function outputs the x and y coordinates to the terminal 
	cout << "X coordinate: " << getX() << endl;

	cout << "Y coordinate: " << getY() << endl << endl;
}
