// project_1_google_ed.cpp: Annie Giang
// Description: Project 1.

/*

The common field cricket chirps in direct proportion to the current temperature. 
Adding 40 to the number of time a cricket chirps in a minute, 
then dividing that value by 4 gives us the temperature. 
Write a program that takes as input the number of 
chirps in a minute and prints the current temperature. 

Number of chirps: 120
The temperature is: 40.0 degrees. 

*/

#include <iostream>
using namespace std;

int calc_temperature(int chirps) {
	int temperature = (chirps + 40) / 4;
	return temperature;
}

int main() {

	int chirps;

	cout << "Enter number of chirps: ";

	if(!(cin >> chirps)) {
		cout << "Invalid input." << endl;
	} else {
		cout << "Number of chirps: " << chirps << endl;
		cout << "The temperature is: " << calc_temperature(chirps) << endl;
	}

	return 0;
}