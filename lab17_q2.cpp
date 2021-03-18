#include <iostream>
#include <string>
using namespace std;

template <typename T, int LENGTH>
class Arr {

	// Declaration of the stream insertion operator overload
	template <typename U, int LENGTH>
	friend ostream& operator<< (ostream& out, const Arr<U, LENGTH>& arr);

public:
	Arr();
	int getLength() const;
	void arrFill(T value);
	T getFront() const;
	T& operator[](const int index);
private:
	T memberArr[LENGTH];
	int arrLength;
};

// TODO: Implement the Arr class constructor.
// Set the member variable arrLength to equal LENGTH.
// Write your function here. (10 points).
template<typename T, int LENGTH>
Arr<T, LENGTH>::Arr() {
	arrLength = LENGTH;
}

// TODO: Implement the getLength function.
// This function returns the arrLength.
// Write your function here. (10 points).
template<typename T, int LENGTH>
int Arr<T, LENGTH>::getLength() const {
	return arrLength;
}

// TODO: Implement the arrFill function.
// This function fills every element of the
// array with the value passed in the parameter.
// Write your function here. (10 points).
template<typename T, int LENGTH>
void Arr<T, LENGTH>::arrFill(T value) {
	for (int i = 0; i < getLength(); i++)
	{
		memberArr[i] = value;
	}
}

// TODO: Implement the getFront function.
// This function returns the value at the
// 0th index of the memberArr.
// Write your function here. (10 points).
template<typename T, int LENGTH>
T Arr<T, LENGTH>::getFront() const {
	return memberArr[0];
}

// TODO: Implement the operator[] overload.
// This function overloads the array subscript operator
// to return the value in the memberArr at the 
// parameter-specified index.
// Write your function here. (10 points).
template<typename T, int LENGTH>
T& Arr<T, LENGTH>::operator[](const int index) {
	return memberArr[index];
}

// TODO: Implement an overload of the stream insertion operator here.
// Implement this function so that the content of the array can be
// output from main using a statement such as: 'cout << myIntArr;' or  
// 'cout << myStrArr;'
// Write your function here. (10 points).
template<typename U, int LENGTH>
ostream& operator<< (ostream& out, const Arr<U, LENGTH>& arr) {
	for (int i = 0; i < arr.getLength(); i++) {
		out << arr.memberArr[i] << " ";
	}
	out << endl;
	return out;
};

int main() {
	Arr<int, 7> myIntArr;
	Arr<string, 3> myStrArr;

	myIntArr.arrFill(20);
	myStrArr.arrFill("filledvalue");

	for (int i = 0; i < myIntArr.getLength(); i++)
		cout << myIntArr[i] << " ";

	cout << "\nThe max size of myIntArr is: " << myIntArr.getLength() << endl;

	cout << "Changing the front value" << endl;
	myIntArr[0] = 8; // changing the value at index 0
	cout << "The value at the 0th index is: " << myIntArr.getFront();

	cout << endl << endl;

	for (int i = 0; i < myStrArr.getLength(); i++)
		cout << myStrArr[i] << " ";

	cout << "\nThe max size of myStrArr is: " << myStrArr.getLength() << endl;

	cout << "Changing the front value" << endl;
	myStrArr[0] = "hello"; // changing the value at index 0
	cout << "The value at the 0th index is: " << myStrArr.getFront();

	cout << endl << endl;

	cout << "\"cout << myIntArr;\" produces:  " << myIntArr << endl;
	cout << "\"cout << myStrArr;\" produces:  " << myStrArr << endl;

	return 0;
}