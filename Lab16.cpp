#include<iostream>
#include<string>
using namespace std;

string getID();

int main()
{
	//TODO: Wrap the code in a try to locate any errors that might arise
	while (true) {
		try
		{
			cout << getID() << endl;
			return 0;
		}
		catch (logic_error e) {
			cout << e.what() << endl;
			cout << typeid(e).name() << endl;
			return 1;
		}
	}

	//TODO: Implement a catch block that catches exceptions of type logic_error.
	//Inside the catch block, print the error message using the what() function.
	//Print the type of error using the typeid() and name() functions.
	//Return an exit code of 1, to signify that the program exited with an issue.

	return 0;
}

string getID()
{
	string id;
	cout << "Please enter your 9 digit WSU student ID: ";
	cin >> id;

	int length = id.length();

	//TODO: If the length of the id is less that 9, throw a logic_error.
	//The logic_error should have a message that says, "Caught an exception. String length underflow."
	if (id.length() < 9)
		throw logic_error("Caught an exception. String length underflow.");
	if (id.length() > 9)
		throw logic_error("Caught an exception. String length overflow.");

	//TODO: If the length of the id is greater than 9, throw a logic_error.
	//The logic_error should have a message that says, "Caught an exception. String length overflow."
	

	return string();
}