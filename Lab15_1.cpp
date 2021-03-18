#include <iostream>
#include <string>

using namespace std;

class DimError : public exception
{
    int number;
    std::string m_error;
public:
    DimError(int number = 0, const char *message = "DimError");
    const char* what() const noexcept;
	int getNumber() const;
};

class Rectangle
{
	int length, width;
public:
	Rectangle(int length = 0, int width = 0);
	void setWidth(int width);
	void setLength(int length);
	int getArea() const;
	void print() const;
};

// TODO: Implement the DimError constructor.  DimError inherits
// from exception.  The message passed in the parameter 
// as a constant character array is a member of the base class.
// This is the message that will be displayed when calling the
// what() function.  The number passed in the parameter is a
// member of this derived class.  Set the member variable
// number using the parameter number. (5 points)
DimError::DimError(int number, const char *message)
{
	this->number = number;
	m_error = message;
	cout << message << endl;
}

// TODO:finish the what() function
const char* DimError::what() const noexcept
{
	return m_error.c_str();
}

// TODO: Return the member variable number. (5 points)
int DimError::getNumber() const
{
	return number;
}


// TODO: Implement the Rectangle constructor.  Call the member
// functions setLength and setWidth, passing in the relevant
// parameter. (5 points)
Rectangle::Rectangle(int length, int width)
{
	setLength(length);
	setWidth(width);
}

// TODO: Implement the setWidth function.  If the parameter width
// is negative, throw a DimError exception.  Instantiate DimError
// with the message: "Negative Width Error"
// If no exception is thrown, set the member variable width. (5 points)
void Rectangle::setWidth(int width)
{
	if (width < 0)
		throw DimError(width, "Negative Width Error");
	else
		this->width = width;
}

// TODO: Implement the setLength function.  If the parameter length
// is negative, throw a DimError exception.  Instantiate DimError
// with the message: "Negative Length Error"
// If no exception is thrown, set the member variable length. (5 points)
void Rectangle::setLength(int length)
{
	if (length < 0)
		throw DimError(length, "Negative Length Error");
	else
		this->length = length;
}

// TODO: Implement the getArea function to return the product of the
// member variables. (5 points)
int Rectangle::getArea() const
{
	return (length * width);
}

// TODO: Implement the print function to output the length, width,
// and area. (5 points)
void Rectangle::print() const
{
	cout << "Rectangle length: " << length << endl;
	cout << "Rectangle width: " << width << endl;
	cout << "Rectangle area: " << getArea() << endl;
}

int main()
{
	int length, width;

	// TODO: Prompt the user to enter a length and width. (1 point)
	
	// TODO: Instantiate a Rectangle object using the user-entered length
	// and width. (2 points)

	// TODO: Invoke the rectangle object's print function. (2 points)
	
	// TODO: Ensure that DimError exceptions thrown from the Rectangle object
	// are caught and recovered from.  "Recovered from" means that the user should
	// have additional chances to enter good data.  To achieve this, one option
	// is to place the entire try/catch structure inside a loop. (10 points)
	
	while (true)
	{
		try {
			cout << "Enter length: ";
			cin >> length;
			cout << endl;

			cout << "Enter width: ";
			cin >> width;
			cout << endl;
			if (!cin)
				throw runtime_error("non-integer");

			Rectangle object(length, width);
			object.print();
			return 0;
		}
		catch (DimError dm)
		{
			cout << dm.what();
		}

		catch (runtime_error re)
		{
			string temp;
			cout << re.what() << endl;
			cin.clear();
			getline(cin, temp);
		}	
	}

	// TODO: If the user enters a non-integer character for length or width,
	// ensure that the bad input doesn't crash the program.  The user should
	// have additional chances to enter good data. (10 points)
}
