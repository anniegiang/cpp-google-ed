// ex5_1_google_ed.cpp: Annie Giang
// Description: implement math puzzles.

/*

How many ways can you arrange 6 different books, left to right, on a shelf? 

*/

#include <iostream>

using namespace std;

int factorial(int num) {
	if(num < 3) {
		return num;
	} else {
		return num * factorial(num - 1);
	}
}

int main() {
	int num_books;

	cout << "Enter a number of books: ";

	if(!(cin >> num_books)) {
		cout << "Invalid input" << endl;
	} else {
		cout << factorial(num_books) << " number of ways to arrange." << endl;
	}

	return 0;
}