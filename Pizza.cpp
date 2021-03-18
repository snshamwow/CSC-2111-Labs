#include "Pizza.h"
#include <iostream>
using namespace std;

Pizza::Pizza()
{
	setHasExtraCheese(false);
}

Pizza::Pizza(int quantity, bool exCheese):Food(quantity)
{
	setHasExtraCheese(exCheese);
}

void Pizza::setHasExtraCheese(bool exCheese)
{
	hasExtraCheese = exCheese;
}

bool Pizza::getHasExtraCheese()
{
	return hasExtraCheese;
}

void Pizza::displayIngredients()
{
	//TODO: print the quantity of pizza
	cout << "There are " << getQuantity() << " pieces of pizza" << endl;

	//TODO: print the pizza's ingredients
	cout << "This pizza is made of dough, tomato sauce, and cheese." << endl;

	//TODO: if hasExtraCheese is true, print that the pizza has extra cheese
	if (hasExtraCheese)
		cout << "The pizza has extra cheese.";
	else
		cout << "The pizza does not have extra cheese.";
}
