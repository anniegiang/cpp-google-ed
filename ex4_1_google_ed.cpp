// ex4_1_google_ed.cpp: Annie Giang
// Description: implement GCD.

/*

The greatest common divisor of two integers is 
the largest number that divides them both evenly. 
For example, gcd(12, 18) = 6, gcd(−4, 14) = 2. 
The most efficient way to compute gcd is with the Euclidean algorithm. 
Write a program with a function to compute gcd for two integers. 

*/

#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int temp;

	while(b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int main() {

	int x, y;

	cout << "Enter two numbers: ";

	if(!(cin >> x >> y)) {
		cout << "Invalid input." << endl;
	} else {
		cout << "gcd(" << x << ", " << y << ") = " << gcd(x, y) << endl;
	}

	return 0;
}
