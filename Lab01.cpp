#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;
const int SIZE = 10;

// Function Prototypes
void showMenu();
void loadArr(int arr[], int size);
void fillArr(int arr[], int size, int fillValue);
void printArr(int arr[], int size);
void selectionSort(int arr[], int size);
bool linearSearch(int arr[], int size, int searchTerm);
int getMin(int arr[], int size);
int getMax(int arr[], int size);
int getSum(int arr[], int size);
void getRangeAndAverage(int arr[], int size, int &range, double &average);

int main()
{
	int arr[SIZE];
	int userMenuChoice;
	int searchTerm;
	int fillValue;
	int range = 0;
	double average = 0.0;
	srand(static_cast<unsigned int>(time(NULL)));
	loadArr(arr, SIZE);

	while (true)
	{
		showMenu();
		cin >> userMenuChoice;

		switch (userMenuChoice)
		{
		case 1:
			loadArr(arr, SIZE);
			break;
		case 2:
			cout << "Please enter a single value to fill every array position: ";
			cin >> fillValue;
			fillArr(arr, SIZE, fillValue);
			break;
		case 3:
			printArr(arr, SIZE);
			break;
		case 4:
			selectionSort(arr, SIZE);
			break;
		case 5:
			cout << "Please enter an integer to search for: ";
			cin >> searchTerm;
			if (linearSearch(arr, SIZE, searchTerm))
				cout << searchTerm << " was found!\n";
			else
				cout << searchTerm << " was NOT found!\n";
			break;
		case 6:
			cout << "The minimum array elements is: "
				<< getMin(arr, SIZE) << endl;
			break;
		case 7:
			cout << "The maximum array elements is: "
				<< getMax(arr, SIZE) << endl;
			break;
		case 8:
			cout << "The sum of the current array elements is: "
				<< getSum(arr, SIZE) << endl;
			break;
		case 9:
			getRangeAndAverage(arr, SIZE, range, average);
			cout << "The range of the values in the array is: " << range << ".\n";
			cout << "The average of the values in the array is " << average << ".\n";
			break;
		case -1:
			cout << "Thank you for using our CSC 2111 program.\n";
			return 0;
		default:
			cout << userMenuChoice << " is not a menu choice.  Please try again.\n\n";
		}
		cout << endl;
	}
}

// Function do display the menu
void showMenu()
{
	cout << endl;
	cout << " 1. Load New Random Values" << endl;
	cout << " 2. Fill All Positions with a Single Value" << endl;
	cout << " 3. Print the Array" << endl;
	cout << " 4. Sort the Array in Ascending Order" << endl;
	cout << " 5. Search the Array" << endl;
	cout << " 6. Find the Minimum Value" << endl;
	cout << " 7. Find the Maximum Value" << endl;
	cout << " 8. Calculate the Sum" << endl;
	cout << " 9. Calculate the Range and Average" << endl;
	cout << "-1. Exit the Program" << endl << endl;

	cout << "Please make your selection: " << endl;
}

// Function to load the array with random numbers between 1 and 100
void loadArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = (rand() % 100) + 1;
}

// Function to fill the array with a value passed in the parameter
void fillArr(int arr[], int size, int fillValue)
{
	// TODO: Loop through the array and set each element with
	// the value fillValue.
	for (int i = 0; i < size; i++)
		arr[i] = fillValue;
}

// Function to print each element of the array
void printArr(int arr[], int size)
{
	// TODO: Loop through the array and output each element
	// to screen.
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

// Function to sort the array using selection sort
void selectionSort(int arr[], int size)
{
	// TODO: Sort the values in the array using the selection
	// sort algorithm.  Feel free to implement this function
	// using the example code in the slides.
	int temp;
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
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

// Function to search the array using a search term passed in the parameter
bool linearSearch(int arr[], int size, int searchTerm)
{
	// TODO: Loop through the array checking each value to see
	// whether it matches the searchTerm passed in the parameter.
	// This is a bool returning function, so if a match is found,
	// return true.  If no match is found after checking every
	// element, return false.

	for (int i = 0; i < size; i++) 
	{
		if (arr[i] == searchTerm)
			return true;
	}
	return false;
}

// Function to return the array's minimum value
int getMin(int arr[], int size)
{
	// TODO: Loop through the array and determine and RETURN
	// the minimum value.  Feel free to use the example
	// code from the slides when implementing this function.
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

// Function to return the array's maximum value
int getMax(int arr[], int size)
{
	// TODO: Loop through the array and determine and RETURN
	// the maximum value.  This function is very similar to
	// the getMin function (except we're returning the maximum
	// value instead of the minimum value).
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

// Function to return the sum of all the array's values
int getSum(int arr[], int size)
{
	// TODO: Loop through the array and calculate the sum
	// of all the elements.  After the loop, RETURN that
	// sum.
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += arr[i];
	}
	return sum;
}

// Function to place the array's range and average value by setting
// the parameters passed by reference
void getRangeAndAverage(int arr[], int size, int &range, double &average)
{
	// This function performs two tasks.  It calculates the range of all
	// the values in the array, and it calculates the average of all the
	// values in the array.

	// Because we're interested in "returning" two values to the calling
	// function, we aren't using a return statement.  Instead, we're
	// using references passes.  Notice the & symbol before the parameter
	// name.  Because we're using reference passes, we can change the
	// value of those parameters here in the function, and those changes will
	// be reflected in main().

	// TODO: Set the range.  The range is calculated as the difference between
	// the highest value and the lowest value.  Feel free to use the getMax and
	// getMin functions that you've already implemented.
	range =  (getMax(arr, SIZE)) - (getMin(arr, SIZE));
	// TODO: Set the average.  The average is calculated as the sum of all the
	// values (feel free to use getSum) divided by the number of values in the
	// list.  When performing a division operation, it's important to check that
	// we're not attempting to divide by zero.
	average = getSum(arr, SIZE) / 10;
}

