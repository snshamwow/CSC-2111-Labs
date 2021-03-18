#include "State.h"

using namespace std;

State::State() {}

void State::runProgram()
{
    string trash = "";
    char action = 0;
    displayChoices();

    while (true)
    {
        try
        {
            cout << "\nPlease select: ";
            cin >> action;
            getline(cin, trash);

            switch (action)
            {
                case '1':
                addCity();
                break;
                case '2':
                deleteLastElement();
                break;
                case '3':
                printSpecificCity();
                break;
                case '4':
                printAll();
                break;
                case '5':
                displayChoices();
                break;
                case '6':
                return;
                default:
                cout << "Invalid Input. Try again.\n";
            }
        }
        catch (exception e)
        {
            cout << e.what() << endl;
            cin.clear();
            getline(cin, trash);
        }
    }
}

void State::displayChoices() const
{
    cout << "1. Add City" << endl;
    cout << "2. Delete Last City" << endl;
    cout << "3. Print City" << endl;
    cout << "4. Print List" << endl;
    cout << "5. Show Menu" << endl;
    cout << "6. Quit" << endl;
}

void State::addCity()
{
    // TODO:  Implement the addCity() function.  Prompt the user
    // to enter a city name and population.  Add that City object
    // to the back of the cities vector.

    cout << "Enter city name: ";
    string city;
    getline(cin, city);

    cout << "Enter population: ";
    double population;
    cin >> population;

    cities.push_back(City(city, population));
    cout << "City added..." << endl;

}


void State::deleteLastElement()
{
    // TODO: Implement the deleteLastElement() function.  Delete the last object
    // in the cities vector.

    cities.pop_back();
}

void State::printSpecificCity()
{
    // TODO:  Implement the printSpecificCity() function.  Prompt the
    // user to enter the name of a City to print.  If a matching name
    // is found in the vector, print that City object.  If no
    // matching city is found in the vector, print a "city not found"
    // message.

    cout << "Enter city name to search for: ";
    string city;
    getline(cin, city);

    for (int i = 0; i < cities.size(); i++)
    {
        if (cities[i].getName() == city)
        {
            cout << "City name: " << cities[i].getName() << " Population: " << cities[i].getPopulation() << endl;
        }
    }
}

void State::printAll()
{
    // TODO: Implement the printAll() function.  Print every object
    // in the cities vector.  If the list is empty, print a "list
    // empty" message.
    
    vector<City>::iterator it;
    
    if (cities.empty())
    {
        cout << "list empty.\n";
        return;
    }
    
    for (it = cities.begin(); it != cities.end(); it++)
    it->printCity();
    
    cout << endl;
}

