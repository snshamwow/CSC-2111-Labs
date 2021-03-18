#include "GradeBook.h"

GradeBook::GradeBook()
{
	numberOfGrades = 0;
	gradeAverage = 0.0;
	gradesArr = NULL;
}

//TODO: uncomment this when you are ready to implement the copy constructor

GradeBook::GradeBook(const GradeBook &other)
{
    //Set this class' numberOfGrades to the other GradeBook object's numberOfGrades
	numberOfGrades = other.numberOfGrades;
	//Set this class' gradeAverage to the other GradeBook object's gradeAverage
	gradeAverage = other.gradeAverage;
	//Set gradesArr to a new integer dynamic array, using numberOfGrades as the length
	gradesArr = new int[numberOfGrades];
	//Use a for loop to iterate through gradesArr and set the value at each position to the other GradeBook object's value at the same position
	for (int i = 0; i < numberOfGrades; i++)
		gradesArr[i] = other.gradesArr[i];
}


//TODO: uncomment this when you are ready to implement the destructor

GradeBook::~GradeBook()
{
	delete[] gradesArr;
    //TODO: if the gradesArr is not null, free up the memory allocated for it. (Hint: use "delete")
}


//This given function will generate a array of grades and stored in array variable gradesArr
void GradeBook::generateGrades()
{
	if (gradesArr != NULL)
		delete[] gradesArr;

     // The number of graded assignments and grades are randomized, so your output will have different values
	numberOfGrades = rand() % 10 + 1;
	gradesArr = new int[numberOfGrades];

	int sum = 0;

	for (int i = 0; i < numberOfGrades; i++)
	{
		gradesArr[i] = rand() % 30 + 71;
		sum += gradesArr[i];
	}

	if (numberOfGrades > 0)
		gradeAverage = static_cast<double>(sum) / numberOfGrades;
	else
		gradeAverage = 0.0;
}

void GradeBook::zeroGrades()
{
	for (int i = 0; i < numberOfGrades; i++)
		gradesArr[i] = 0;

	gradeAverage = 0.0;
}

void GradeBook::printGrades() const
{
	cout << "Grades: ";

	for (int i = 0; i < numberOfGrades; i++)
		cout << gradesArr[i] << " ";
	cout << endl;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Average: " << gradeAverage << endl << endl;
}
