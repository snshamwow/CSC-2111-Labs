#include "shape.h"

Shape::Shape()
{
	// TODO:  Use the setdata function to set the member variable variable
	// edge	to 0.0.
	setdata(0.0);
}

Shape::Shape(float s)
{
	// TODO:  Use the setdata function to set the member variable edge
	// according the corresponding parameter.
	setdata(s);
}

void Shape::setdata(float s)
{
	//TODO: assign the parameter to the member variable.
	edge = s;
}

float Shape::getdata()
{
	//TODO:  Return the member variable edge.
	return edge;
}
