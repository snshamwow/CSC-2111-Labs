#include <iostream>

using namespace std;

int gcd(int m, int n)
{
	/*
		TODO£º Implement Euclidean Algorithm to find the greatest common divisor of two integers.
		It is based on the observation that the greatest common divisor of two integers 
		m and n with m > n is the same as the greatest common divisor of n and m mod n.
		gcd(m,n) = gcd (n, m mod n)
	*/
	if (n == 0)
		return m;
	cout << "gcd (" << m << ", " << n << ")" << endl;
	return gcd(n, m % n);
}

int main()
{
	cout << "gcd = " << gcd(1256636, 1630968) << endl;
	return 0;
}