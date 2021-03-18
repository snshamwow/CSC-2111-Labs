#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
	string numbers, temp;
	double *arr = NULL;
	int arrLength = 0;
	const char *delimiters = "\f\n\r\t\v ";

	cout << "Space separated, enter a list of numbers: ";
	getline(cin, numbers);

	numbers = numbers.substr(0, numbers.find_last_not_of(delimiters) + 1);
	try {
		numbers = numbers.substr(numbers.find_first_not_of(delimiters));//exception: std::out_of_range at memory location 
	}
	catch(out_of_range e){
		cout << "Can not take whitespace as input.";
		return 0;
	}
	cout << "\nWith leading and trailing whitespace removed, the string entered is:\n";
	cout << numbers << endl << endl;

	stringstream s(numbers);
	stringstream sCount(numbers);
	while (sCount >> temp)
		arrLength++;

	arr = new double[arrLength];

	
	for (int i = 0; i < arrLength; i++)
	{
		s >> temp;
		try {
			arr[i] = stod(temp);//exception: std::invalid_argument at memory location 

		}catch (invalid_argument s){
			cout << "Can not input non-integer characters.";
			return 0;
		}
	}

	cout << "Each number has been loaded into an array of length " << arrLength << ".\n";
	for (int i = 0; i < arrLength; i++) {
		cout << "Index " << setw(3) << i << " : " << setw(4) << arr[i] << endl;
	}

	if (arr != NULL)
		delete[] arr;

	return 0;
}
