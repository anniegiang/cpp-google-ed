// project_5_google_ed.cpp: Annie Giang
// Description: Project 5.

/*

Here is a "magic number" problem: 
Ask a user to enter a three-digit number whose first digit is greater than its last. 
Your program will reverse the number, and subtract the reversal from the original number. 
Finally, reverse the resulting number, and add it to its unreversed form. 
Output the final result. 

The original number that the user enters must be of integer type (not three chars). 
Think about how to write a function that takes 
an integer as input and returns the reverse of that number. 

Example:

input number: 901
reverse it: 109
subtract: 901 - 109 = 792
reverse it: 297
add: 297 + 792 = 1089   

*/

#include <iostream>
using namespace std;

int reverse(int num) {
	int rev;
	
}

int main() {
	int input;
	cout << "Enter a three-digit number: ";
	if(!(cin >> input)) {
		cout << "Invalid input." << endl;		
	} else {
		cout << "Input number: " << input << endl;

	}
	return 0;
}