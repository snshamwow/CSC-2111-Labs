#include "triangle.h"

Triangle::Triangle()
{
	// TODO:  Use the setheight function to set this derived class member 
	// variable height to 0.0.  The base class content will be
	// initialized according to the base class's default constructor.
	setheight(0.0);
}

Triangle::Triangle(float e, float h): Shape(e)
	// TODO: Before the opening brace, use the syntax from the example slides
	// to construct the base class using the base class parameterized
	// constructor.  Pass the base class content (edge)
	// up to the base class.
{
	// After the opening brace, call the setheight function to set the one
	// derived class member variable height according to the corresponding
	// parameter.
	setheight(h);
}

float Triangle::getarea()
{
	float area;
	// TODO:  Return the area of the Triangle according to the member variables (edge and height).
	// 
	area = 0.5 * getheight() * Shape::getdata();
	return area;
}

void Triangle::setheight(float h)
{
	// TODO: Set the member variable height according to the parameter.  
	height = h;
}

float Triangle::getheight()
{
	// TODO:  Return the member variable height.
	return height;
}
