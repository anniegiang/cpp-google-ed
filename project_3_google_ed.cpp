// project_3_google_ed.cpp: Annie Giang
// Description: Project 3.

/*

As electronic stopwatches become cheaper and more accurate, 
we will no doubt be deluged with impossibly accurate measurements of time. 
Write a program that takes as input a time period given in seconds, 
and outputs the number of hours, minutes and seconds it represents. 
For example,

Number of seconds: 3662
Hours: 1 
Minutes: 1
Seconds: 2  

*/


#include <iostream>
using namespace std;

void convertTime(int secs) {
	int hours, minutes;
	hours = secs/3600; 
	secs = secs - (hours*3600);
	minutes = secs/60;
	secs = secs - (minutes*60);
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds " << secs << endl;
}

int main() {
	int seconds;
	cout << "Number of seconds: ";
	if(!(cin >> seconds)) {
		cout << "invalid input" << endl;
	} else {
		convertTime(seconds);
	}

	return 0;

}