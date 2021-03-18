#include <iostream>
#include <string>

using namespace std;
/*
//linear search function for integers
//TODO: delete this after you've implemented your function template
void linearSearch(int* arr, int item, int n) 
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == item)
		{
			cout << "Item found at position = " << i << endl;
			return;
		}
	}
	cout << "Item not found." << endl;
}

//linear search function for strings
//TODO: delete this after you've implemented your function template
void linearSearch(string* arr, string item, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == item)
		{
			cout << "Item found at position = " << i << endl;
			return;
		}
	}
	cout << "Item not found." << endl;
}
*/
//TODO: Implement a function template that will perform a linear search for multiple data types
// Your code will be a generalized form of the two preceding functions.

template <typename T>
void linearSearch(T* arr, T item, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == item)
		{
			cout << "Item found at position = " << i << endl;
			return;
		}
	}
	cout << "Item not found." << endl;
}

int main()
{
	int intArray[7] = { 34, 6, 14, 256, 96, 92, 12 };
	string stringArray[5] = { "Computer", "science", "is", "pretty", "cool" };
	int searchInt;
	string searchString;


	//------------Searching for an integer------------
	cout << "Elements in the integer array:" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << intArray[i] << " ";
	}
	cout << endl << endl;
	cout << "Enter an item to search: ";
	cin >> searchInt;

	cout << "Running the linear search" << endl;
	linearSearch(intArray, searchInt, 7);
	cout << endl << endl;

	//------------Searching for a string------------
	cout << "Elements in the string array:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << stringArray[i] << " ";
	}
	cout << endl << endl;
	cout << "Enter an item to search: ";
	cin >> searchString;

	cout << "Running the linear search" << endl;
	linearSearch(stringArray, searchString, 5);

	return 0;
}

