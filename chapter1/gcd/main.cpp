#include <iostream>

using std::endl;
using std::cout;

int gcd (int a, int b);

int main (int argc, char *argv[])
{
	cout << "gcd (2, 4) = " << gcd (2, 4) << endl; 	
	cout << "gcd (2, 3) = " << gcd (2, 3) << endl; 	
	cout << "gcd (2, 41) = " << gcd (2, 41) << endl; 	
	cout << "gcd (21, 7) = " << gcd (21, 7) << endl; 	
	
	return 0;
}

int gcd (int a, int b)
{
	if (b == 0)
		return a;
	unsigned r = a % b;
	return gcd (b, r);
}
