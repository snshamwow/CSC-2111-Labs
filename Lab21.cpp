#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void insertionSort(vector<T> &items);

template <typename T>
bool binarySearch(vector<T> items, T searchTerm);

template <typename T>
void printList(vector<T> items);

int findNumBetweenEqualSums(vector<int> numbers);

int main()
{
	// testing insertion sort
	vector<int> numbersA = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	vector<int> numbersB = { 4, 3, 5, 7, 8, 12, 39, 25 };
	vector<string> words = { "apple", "cat", "car", "boat" };
	insertionSort(numbersA);
	insertionSort(numbersB);
	insertionSort(words);
	printList(numbersA);
	printList(numbersB);
	printList(words);
	
	// testing binary search
	cout << (binarySearch(numbersA, 9) ? "found" : "not found") << endl;  // expect found
	cout << (binarySearch(numbersA, 5) ? "found" : "not found") << endl;  // expect found
	cout << (binarySearch(numbersA, 20) ? "found" : "not found") << endl; // expect not found
	cout << (binarySearch(words, string("car")) ? "found" : "not found") << endl; // found

	// testing findNumBetweenEqualSums
 	vector<int> test1 = { 1, 2, 3, 4, 6 };         // expect 4
	vector<int> test2 = { 5 };                     // expect 5
	vector<int> test3 = { 15, 0 };                 // expect 15
	vector<int> test4 = { 5, 10, 12, 3, 4, 7, 1 }; // expect 12
	vector<int> test5 = { 1, 2, 3, 4, 5 };         // expect -1
	cout << findNumBetweenEqualSums(test1) << endl;
	cout << findNumBetweenEqualSums(test2) << endl;
	cout << findNumBetweenEqualSums(test3) << endl;
	cout << findNumBetweenEqualSums(test4) << endl;
	cout << findNumBetweenEqualSums(test5) << endl;

	return 0;
}

template <typename T>
void insertionSort(vector<T> &items)
{
    // TODO: Implement the insertionSort function to sort
    // the vector passed in the parameter in ascending
    // (non-decreasing) order.
    
    int j;
    T toInsert;
    for (unsigned int i = 1; i < items.size(); i++)
    {
        toInsert = items[i];
        for (j = i - 1; j >= 0 && items[j] > toInsert; j--)
        {
            items[j + 1] = items[j];
        }
        
        items[j + 1] = toInsert;
    }
}

template <typename T>
bool binarySearch(vector<T> items, T searchTerm)
{
	// TODO:  Implement the binarySearch function to
	// search the items vector for the searchTerm passed
	// in the parameter.  The function returns true if the
	// searchTerm is found.  False is returned if the
	// searchTerm is not found.

	size_t m, l = 0;

	size_t r = items.size();


	while (l < r) 
	{
		m = l + (r - l) / 2;

		if (searchTerm > items[m]) 
		{
			l = m + 1;
		}
		else if (searchTerm < items[m]) 
		{
			r = m;
		}
		else 
		{
			return true;
		}
	}
	return false;
}

template <typename T>
void printList(vector<T> items)
{
	// TODO:  Implement the printList function to print
	// the contents of the items vector (space separated 
	// to match the sample output).

	for (int i = 0; i < items.size(); i++) 
	{
		cout << items.at(i) << " ";
	}
	cout << endl;
}

int findNumBetweenEqualSums(vector<int> numbers)
{
	// TODO:  Implement the findNumBetweenEqualSums function. This function 
	// finds a number in the vector for which the sum of all the values on 
	// the left of it is equal to the sum of all the values on the right of it.
	// If no solution exists, return -1.
	//
	// Ex: { 6, 4, 5, 8, 10, 5 }  6 + 4 + 5 = 10 + 5, so 8 is returned.
	//
	// Ex: { 6, 7, 8 } -1 is returned because no number has a sum of values
	// on the left that equals the sum of values on the right.
	//
	// Ex: { 15, 0 } The sum of values left of 15 = 0.  The sum of values
	// right of 15 = 0.  0 = 0, so 15 is returned.

	int rSum = 0;
	int lSum = 0;

	for (int i = 0; i < numbers.size(); i++) {
		rSum = 0;
		lSum = 0;

		if (i == 0) {
			rSum = 0;
		}
		else
			for (int j = 0; j < i; j++)
				rSum += numbers.at(j);


		for (int k = i + 1; k < numbers.size(); k++)
			lSum += numbers.at(k);

		if (lSum == rSum) {
			return numbers.at(i);
		}

	}
	return -1;
}
