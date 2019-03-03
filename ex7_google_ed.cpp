// ex7_google_ed.cpp: Annie Giang
// Description: Your first day on the job.

/*

You have just gotten a position as a salesperson for the ExerShoe company, 
specializing in high-end exercise shoes costing around $225 per pair. 
Your boss has given you three options for compensation, 
which you must choose before you begin your first day:

Straight salary of $600 per week;

A salary of $7.00 per hour plus a 10% commission on sales;

No salary, but 20% commissions and $20 for each pair of shoes sold;

*/

#include <iostream>

using namespace std;

// constants which are used throughout the program
#define kPricePerUnit 225  // average price of a pair of shoes
#define kWeeklyWage 600    // current weekly wage - Method 1
#define kSalary 7.0        // hourly salary - Method 2
#define kHoursPerWeek 40    // number of hours worked - Method 2
#define kCommission2  0.10  // commission - Method 2
#define kCommission3 0.2    // commission - Method 3
#define kBonusPerUnit 20    // bonus  - Method 3

void calcMethod1() {
	cout << "Method 1: " << kWeeklyWage << endl;
}

void calcMethod2(int units) {
	int salary = kSalary * kHoursPerWeek;
	int commission = (kPricePerUnit * units) * kCommission2;
	cout << "Method 2: " << salary + commission << endl;
}
void calcMethod3(int units) {
	int bonus = units * kBonusPerUnit;
	int commission = (kPricePerUnit * units) * kCommission3;
	cout << "Method 3: " << bonus + commission << endl;
}


int getInput() {
	int units;
	cout << "Enter number of units sold: ";

	if(!(cin >> units)) {
		cout << "Invalid input." << endl;
		return 0;
	} else {
		return units;
	}
}


int main() {
	int units = getInput();
	if(units == 0) {
		return 0;
	}

	calcMethod1(); 
	calcMethod2(units);
	calcMethod3(units);

}