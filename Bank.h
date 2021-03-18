#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Bank
{
public:
	Bank();
	Bank(string, string, string, double);
	void setFirstName(string);
	void setLastName(string);
	void setAccountNumber(string);
	void setAccountBalance(double);
	string getFirstName() const;
	string getLastName() const;
	string getAccountNumber() const;
	double getAccountBalance() const;

	bool deposit(double);
	bool withdrawal(double);
	void printRecord() const;

private:
	string firstName;
	string lastName;
	string accountNumber;
	double accountBalance;
};

#endif // !BANK_H


