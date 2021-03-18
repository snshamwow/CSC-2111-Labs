#include <iostream>

using namespace std;

void stars(int countUp, int countDown)
{
	/*
		TODO: using recursive algorithm
	*/
	if (countUp > countDown) 
		return;
	else
	{
		for (int q = 1; q <= countUp; q++)
		{
			cout << "*";
		}
		cout << endl;

		stars(countUp + 1, countDown);

		for (int q = 1; q <= countUp; q++)
		{
			cout << "*";
		}

		cout << endl;
	}
}

int main()
{
	int i = 0;
	cout << "Input the value: ";
	cin >> i;
	stars(0, i);
	return 1;
}