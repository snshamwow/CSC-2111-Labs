#include "Food.h"
#include <iostream>
using namespace std;

Food::Food()
{
	setQuantity(0);
}

Food::Food(int quantity)
{
	setQuantity(quantity);
}

void Food::setQuantity(int quantity)
{
	//TODO: using this pointer to set the member variabale quantity.
	this->quantity = quantity;
}

int Food::getQuantity()
{
	return quantity;
}

