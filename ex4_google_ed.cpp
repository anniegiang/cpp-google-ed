// ex4_google_ed.cpp: Annie Giang
// Description: implement a guessing game.

/*

Our program generates a random number between 0 and 100. 
The player must guess the secret number. 
The program provides hints like "that's too high" or "that's too low" 
until the player finally guesses the secret number.

*/

#include <iostream>
#include <stdlib.h>  

using namespace std;

int main() {
	int guess;

	srand (time(NULL));
	int random_number = rand() % 100 + 1;
	cout << random_number << endl;

	do {
		cout << "Guess our number (1-100): ";
		if(!(cin >> guess)) {
			cout << "Invalid input" << endl;
		} else {
			if(guess > random_number) {
				cout << "Our number is less than " << guess << endl;
			} else if(guess < random_number) {
				cout << "Our number is greater than " << guess << endl;
			} else {
				cout << "Correct!" << endl;
			}
		}
	} while(guess != random_number);
	cout << "You guessed it!" << endl;

	
	return 0;
}
