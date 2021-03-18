#include "Bank.h"

Bank::Bank()
{
    // TODO:  Implement the default constructor.
    // This is the constructor that creates the object when no
    // parameters are passed in at instantiation.
    
    // Set the customer's first name to: unknown
    // Set the customer's last name to: unknown
    // Set the customer's account number to: 000000000
    // Set the customer's account balance to: 0.0
	firstName = "unkown";
	lastName = "unknown";
	accountNumber = "000000000";
	accountBalance = 0.0;
}

Bank::Bank(string fName, string lName, string aNumber, double aBalance)
{
    // TODO:  Implement the parameterized constructor.
    // This is the constructor that creates the object when
    // parameters are passed in at instantiation.
    
    // Set the customer's first name using the corresponding parameter.
    // Set the customer's last name using the corresponding parameter.
    // Set the customer's account number using the corresponding parameter.
    // Set the customer's account balance using the corresponding parameter.
	firstName = fName;
	lastName = lName;
	accountNumber = aNumber;
	accountBalance = aBalance;

}

void Bank::setFirstName(string fName)
{
    // TODO:  Implement the setFirstName function.
    // Set the customer's first name using the parameter.
	firstName = fName;
}

void Bank::setLastName(string lName)
{
    // TODO:  Implement the setLastName function.
    // Set the customer's last name using the parameter.
	lastName = lName;
}

void Bank::setAccountNumber(string aNumber)
{
    // TODO:  Implement the setAccountNumber function.
    // Set the customer's account number using the parameter.
	accountNumber = aNumber;
}

void Bank::setAccountBalance(double aBalance)
{
    // TODO:  Implement the setAccountBalance function.
    // If the value passed in the parameter is less than zero,
    // set the customer's account balance to zero.  If the value
    // passed in the parameter is greater than or equal to zero,
    // set the customer's account balance using the parameter.
	if (aBalance < 0)
		aBalance = 0;
	else
		aBalance = aBalance;
}

string Bank::getFirstName() const
{
    // TODO:  Implement the getFirstName function.
    // This function returns the customer's first name.
	return firstName;
}

string Bank::getLastName() const
{
    // TODO:  Implement the getLastName function.
    // This function returns the customer's last name.
	return lastName;
}

string Bank::getAccountNumber() const
{
    // TODO:  Implement the getAccountNumber function.
    // This function returns the customer's account number.
	return accountNumber;
}

double Bank::getAccountBalance() const
{
    // TODO:  Implement the getAccountBalance function.
    // This function returns the customer's account balance.
	return accountBalance;
}

bool Bank::deposit(double amount)
{
	// TODO:  Implement the deposit function.
	// If the parameter value is greater than zero, process
	// the deposit by increasing the account balance by the
	// parameter amount.  Then return true to indicate that
	// the deposit was successful.

	// If the parameter value is less than or equal to zero,
	// do not change the account balance.  Just return false
	// to indicate that the deposit was not successful.
	if (amount > 0)
	{
		accountBalance += amount;
		return true;
	}
	else if (amount < 0)
		return false;
}

bool Bank::withdrawal(double amount)
{
    // TODO:  Implement the withdrawal function.
    // If the parameter value is greater than zero, and if
    // completing the withdrawal would not result in a negative
    // account balance, process the withdrawal by decreasing the
    // account balance by the parameter amount.  Then return true
    // to indicate that the withdrawal was successful.
    
    // Otherwise, do not change the account balance.  Just return
    // false to indicate that the withdrawal was not successful.
	if (amount > 0 && amount <= accountBalance)
	{
		accountBalance -= amount;
		return true;
	}
	else
		return false;
}

void Bank::printRecord() const
{
    cout << fixed << showpoint << setprecision(2);
    cout << getFirstName() << " " << getLastName() << endl;
    cout << "Account: " << getAccountNumber() << endl;
    cout << "Balance: $" << getAccountBalance() << endl << endl;
}
