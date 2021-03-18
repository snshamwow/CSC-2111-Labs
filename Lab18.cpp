#include <string>
#include <iostream>

using namespace std;


bool is_palindrome(string s, int i)
{
	/*
		TODO: finish the function that uses a recursive function to check whether a string
		is a palindrome.Your program must contain a value - returning recursive
		function that returns true if the string is a palindrome and false otherwise.
		Do not use any global variables; use the appropriate parameters.
	*/

	if (s.length() == 0)
		return false;
	else if (s.length() == 1)
		return true;
	else
	{
		if (i < s.length() - 1 - i)
		{
			if (s[i] == s[s.length() - 1 - i])
				return is_palindrome(s, i + 1);
			else
				return false;
		}
		else
			return true;

	}

	return true;
}

int main()
{
	string s1 = "awwa";
	string s2 = "awawwa";
	if (is_palindrome(s1, 0))
		cout << s1 + " is a palindrome! \n";
	else
		cout << s1 + " is not a palindrome! \n";
	if (is_palindrome(s2, 0))
		cout << s2 + " is a palindrome! \n";
	else
		cout << s2 + " is not a palindrome! \n";
	system("pause");
	return 0;
}