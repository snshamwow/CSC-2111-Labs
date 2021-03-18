#include "item.h"

Item::Item()
{
	// TODO:  Implement the default constructor.
	// Set the member variables to default values.
	// The integers and doubles can be set to 0.  The strings can
	// be set to "unknown". (5 points)

	itemId = 0;
	itemName = "unkown";
	price = 0;
	numberInStock = 0;
}

Item::Item(int id, string name, double itemPrice, int num)
{
	// TODO:  Implement the parameterized constructor.
	// Set the member variables using the corresponding
	// parameters. (5 points)
	
	itemId = id;
	itemName = name;
	price = itemPrice;
	numberInStock = num;
}

int Item::getItemId() const
{
	// TODO:  Implement the getter function.
	// Return the corresponding member variable. (5 points)
	return itemId;
}

string Item::getItemName() const
{
	// TODO:  Implement the getter function.
	// Return the corresponding member variable. (5 points)
	return itemName;
}

double Item::getPrice() const
{
	// TODO:  Implement the getter function.
	// Return the corresponding member variable. (5 points)
	return price;
}

int Item::getNumberInStock() const
{
	// TODO:  Implement the getter function.
	// Return the corresponding member variable. (5 points)
	return numberInStock;
}

void Item::setItemId(int id)
{
	// TODO:  Implement the setter function.
	// Set the corresponding member variable using the parameter.
	// (5 points)
	itemId = id;
}

void Item::setItemName(string name)
{
	// TODO:  Implement the setter function.
	// Set the corresponding member variable using the parameter.
	// (5 points)
	itemName = name;
}

void Item::setPrice(double itemPrice)
{
	// TODO:  Implement the setter function.
	// Set the corresponding member variable using the parameter.
	// (5 points)
	price = itemPrice;
}

void Item::setNumberInStock(int num)
{
	// TODO:  Implement the setter function.
	// Set the corresponding member variable using the parameter.
	// (5 points)
	numberInStock = num;
}

void Item::printItem() const
{
	// TODO:  Implement the print function.
	// Output the member variables stored in the object.
	// (5 points)
	cout << "Item ID: " << itemId << endl;
	cout << "Item Name: " << itemName << endl;
	cout << "Item Price: " << price << endl;
	cout << "Number in Stock: " << numberInStock << endl;
	cout << endl;

}
