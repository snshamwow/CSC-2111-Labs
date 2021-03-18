#include <iostream>
#include <string>
#include <exception>
#include <iostream>
using namespace std;

template <typename T>
void selectionSort(T arr[], int length)
{
	T temp;
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//TODO: Create a template function called printArr,
//which takes in an unsized array of any type and an integer length.
//Iterate through the array and print the contents at each index. 

template <typename T>
void printArr(T arr, int length)
{
	for (int i = 0; i < length; i++) {
		cout << "Index: " << i << arr[i] << " " << endl;
	}
}

int main()
{
	//----------Array of Integers------------
	try {
		int size;
		int* arrInts;
		cout << "Creating array of integers..." << endl;
		cout << "Enter an array size: ";
		cin >> size;

		//TODO: If the size was not of a valid data type, 
		//throw a logic_error which says that "Size must be an integer."
		if (!cin)
			throw logic_error("Size must be an integer");
		if (size < 0)
			throw logic_error("Size cannot be less than zero");

		//TODO: If the size was negative, 
		//throw a logic_error which says that "Size cannot be less than zero."

		arrInts = new int[size];

		for (int i = 0; i < size; i++) {
			int currentInt;
			cout << "Enter an integer for index " << i << ":";
			cin >> currentInt;

			//TODO: If the input was not of a valid data type, 
			//throw a logic_error which says that "A non-integer input was entered."
			if (currentInt == !cin)
				throw logic_error("A non-integer input was entered");

			arrInts[i] = currentInt;
		}
		cout << "Array before selection sort" << endl;
		printArr(arrInts, size);

		cout << "Array after selection sort" << endl;
		selectionSort(arrInts, size);
		printArr(arrInts, size);
	}
	//TODO: Add a catch block that can catch a logic_error.
	//Print the error message using the what() function.
	catch (logic_error e) {
		cout << e.what() << endl;
	}

	catch (...) {
		cout << "Unknown exception reached." << endl;
	}

	cout << endl;

	//----------Array of Strings------------
	try {
		int size;
		string* arrString;
		cout << "Creating array of strings..." << endl;
		cout << "Enter an array size: ";
		cin >> size;

		//TODO: If the size was not of a valid data type, 
		//throw a logic_error which says that "Size must be an integer."
		if (!cin)
			throw logic_error("Size must be an integer");
		if (size < 0)
			throw logic_error("Size cannot be less than zero");
		//TODO: If the size was negative, 
		//throw a logic_error which says that "Size cannot be less than zero."
		

		arrString = new string[size];

		for (int i = 0; i < size; i++) {
			string currentString;
			cout << "Enter a string for index " << i << ":";
			getline(cin >> ws, currentString);

			arrString[i] = currentString;
		}
		cout << "Array before selection sort" << endl;
		printArr(arrString, size);

		cout << "Array after selection sort" << endl;
		selectionSort(arrString, size);
		printArr(arrString, size);
	}
	//TODO: Add a catch block that can catch a logic_error.
	//Print the error message using the what() function.
	catch (logic_error e) {
		cin.clear();
		cout << e.what() << endl;
		cout << "Could not create the array" << endl;
	}

	catch (...) {
		cout << "Unknown exception reached." << endl;
	}

	return 0;
}