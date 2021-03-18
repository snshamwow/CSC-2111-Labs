#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person
{
public:
	Person() {
		setData("unknown-first", "unknown-last");
	}
	Person(string first, string last) {
		setData(first, last);
	}

	void setData(string first, string last) {
		firstName = first;
		lastName = last;
	}

	void printData() const {
		cout << "\nName: " << firstName << " " << lastName << endl;
	}

private:
	string firstName;
	string lastName;
};

class Musician : public Person
{
public:
	Musician() 
	{
        // TODO: set this derived class member
        // variable instrument to "unknown-instrument".  The base class content will be
        // initialized according to the base class's default constructor.
		instrument = "unkown-instrument";
	}

	Musician(string first, string last, string inst) : Person(first, last)
    // TODO: Before the opening brace.
    //construct the base class using the base class parameterized
    // constructor.  Pass the base class content (first, last)
    // up to the base class.
    {
        // After the opening brace, set the one
        // derived class member variable instrument according to the corresponding
        // parameter.
		instrument = inst;
	}

	void setData(string first, string last, string inst) {
        // TODO:  The base class and derived classes both have setData functions.
        // The derived class setData function overrides the base class one.  However,
        // we can invoke the base class version of the function here if we scope to it.
        // Since the member variables first, last are stored
        // in the base class, use the base class's setData function to set those
        // values according to the corresponding parameters.
		Person::setData(first, last);

        // Then set the remaining derived class variable.
		instrument = inst;
	}

	void printData() const {
		Person::printData();
		cout << "Instrument: " << instrument << endl;
	}

private:
	string instrument;
};

class Writer : public Person
{
public:
	Writer() {
        // TODO: set this derived class member
        // variable genre to "unknown-genre".  The base class content will be
        // initialized according to the base class's default constructor.
		genre = "unkown-genre";
	}

	Writer(string first, string last, string gen):Person(first, last)
    // TODO: Before the opening brace.
    //construct the base class using the base class parameterized
    // constructor.  Pass the base class content (first, last)
    // up to the base class.
    {
        // After the opening brace, set the one
        // derived class member variable genre according to the corresponding
        // parameter.
		genre = gen;
    }

	void setData(string first, string last, string gen) {
        // TODO:  The base class and derived classes both have setData functions.
        // The derived class setData function overrides the base class one.  However,
        // we can invoke the base class version of the function here if we scope to it.
        // Since the member variables first, last are stored
        // in the base class, use the base class's setData function to set those
        // values according to the corresponding parameters.
		Person::setData(first, last);
        // Then set the remaining derived class variable.
		genre = gen;
	}
	void printData() const {
		Person::printData();
		cout << "Genre: " << genre << endl;
	}

private:
	string genre;
};


int main() {

	int numberOfMusicians = 0;
	int numberOfWriters = 0;
	string str1, str2, str3;
	ifstream fin;

	// TODO:  Open the file music.txt.  Print an error message and exit
	// the program if the file cannot be opened. 5 pts.
    // Declare constants
    string INPUT_FILE_NAME = "music.txt";

    fin.open(INPUT_FILE_NAME);
	if (!fin.is_open())
	{
		cout << "Error: unable to open file '"
			<< INPUT_FILE_NAME << "'." << endl << endl;
		return -1;
	}
		// TODO:  Read the number at the beginning of the text file.  That number
		// indicates the number of musicians in the list (which is also the length
		// of the musicians' array). 5 pts.
		fin >> numberOfMusicians;

		// Dynamically allocate an array of musician objects.  The array should be 
		// the exact length needed to read the file. 10 pts.
		Musician* music = new Musician[numberOfMusicians];

		// Use a for-loop to load the array with the content from the text file. 15 pts.
		int i;
		for (i = 0; i < numberOfMusicians; i++)
		{
			fin >> str1 >> str2 >> str3;
			music[i].setData(str1, str2, str3);
		}

		// Close the text file when you are done with it. 5 pts.
		fin.close();

	// TODO:  Open the file writer.txt.  Print an error message and exit
	// the program if the file cannot be opened. 5 pts.

	fin.open("writer.txt");
	if (!fin.is_open())
	{
		cout << "Error: unable to open file '"
		<< "writer.txt" << "'." << endl << endl;
		return -1;
	}
		// TODO:  Read the number at the beginning of the text file.  That number
		// indicates the number of writers in the list (which is also the length
		// of the writers' array).  5 pts.
		fin >> numberOfWriters;

		// Dynamically allocate an array of writer objects.  The array should be 
		// the exact length needed to read the file. 10 pts.
		Writer* write = new Writer[numberOfWriters];

		// Use a for-loop to load the array with the content from the text file. 15 pts.
		for (int i = 0; i < numberOfWriters; i++)
		{
			fin >> str1 >> str2 >> str3;
			write[i].setData(str1, str2, str3);
		}

	// Close the text file when you are done with it. 5 pts.
		fin.close();

	// TODO:  Loop through the musicians' array and print all of its data.  
	// Then loop through the writers' array and print all of its data. 15 pts.
	// Remember to release all dynamically allocated memory before exiting. 5 pts.
	for (int i = 0; i < numberOfMusicians; i++)
	{
		music[i].printData();
	}
	delete[]music;

	for (int i = 0; i < numberOfWriters; i++)
	{
		write[i].printData();
	}
	delete[]write;

		
	return 0;
}
