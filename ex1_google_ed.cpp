// ex1_google_ed.cpp: Annie Giang
// Description: a program that prints the immortal saying "hello world"

/*

Modify the above program to print "Hello World!" 4 times on a line for 6 lines, 
where each is printed in a field of 17 spaces. 
Use for-loops to do this. 

Using the program you just completed, 
figure out how to print "Hello World!" left-aligned in the fields of 17 spaces 
(the default is usually right-aligned). 

*/

#include <iostream>
#include <iomanip> // needed for setw

using namespace std;

int main() {
	// set up cout to right-align. if not set default is left align
	cout<< setiosflags(ios::left);
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 4; j++) {
			// sets the column width
			cout << setw(17); 
			cout << "Hello World!";
		}
		cout << endl;
	}
	return 0;
}