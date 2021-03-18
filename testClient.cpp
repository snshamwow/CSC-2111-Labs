#include <iostream>
#include <fstream>
#include <string>
#include "item.h"
#include <iomanip>

using namespace std;

const int ARR_SIZE = 5;
const string INPUT_FILE_NAME = "input.txt";

int main()
{
	Item itemList[ARR_SIZE];
	ifstream inData;
	int tempItemId;
	string tempItemName;
	double tempPrice;
	int tempNumberInStock;

	// TODO:  Open the "input.txt" text file.  Use the data in the text file to 
	// load the itemList array.  Specifically, read the value from the input 
	// file into the temporary variables declared above, and then use the set 
	// functions you wrote in item.cpp to load the data into the objects.
	// (30 points)

	// Format real numbers
	cout << setprecision(2) << fixed;

	// Show application header
	cout << "Welcome to Meijer"
		<< endl;
	cout << "-----------------------------------------------"
		<< endl << endl;

	// Attempt to open input file
	inData.open(INPUT_FILE_NAME);
	if (!inData.is_open())
		cout << "Error: unable to open file '"
		<< INPUT_FILE_NAME << "'." << endl << endl;
	else
	{

		// Print read messsage
		cout << "Reading tokens from file '" << INPUT_FILE_NAME
			<< "' ..." << endl << endl;

		// Loop to read from input file
		while (inData.good())
		{
			for (int i = 0; i < ARR_SIZE; i++) {
				inData >> tempItemId >> tempItemName >> tempPrice >> tempNumberInStock;
				itemList[i].setItemId(tempItemId);
				itemList[i].setItemName(tempItemName);
				itemList[i].setPrice(tempPrice);
				itemList[i].setNumberInStock(tempNumberInStock);
			}

		}

		// Close input file
		inData.close();
	}

	// TODO:  Iterate through the array of item objects, and print
	// each object's data. (15 points)
	for (int i = 0; i < ARR_SIZE; i++) {
		itemList[i].printItem();
	}


	

	return 0;
}
