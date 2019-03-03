// project_2_google_ed.cpp: Annie Giang
// Description: Project 2.

/*

Write a program that will compute your final grade for a programming course you are taking. 
Here is the grading scheme:

Final grades will be based on the following:
40% Assignments   15% Midterm Examination
35% Final Examination
10% Class Participation Grade 

Your program should ask the user for 
the four assignment scores, the midterm, final and section grades. 
Then, the final score is calculated and printed. 
To do the calculations, you average the four assignment scores together and then multiply it by 0.4 (40%). 
You then multiply the midterm score by 0.15, the final by 0.35 and the participation grade by 0.1. 
Then you add all the results of these multiplications together.

*/


#include <iostream>
using namespace std;



int assignmentScores(int a, int b, int c, int d) {
	return ((a+b+c+d)/4) * 0.4;
}

int midtermScore(int midterm) {
	return midterm * 0.15;
}

int finalScore(int final) {
	return final * 0.35;
}

int sectionScore(int section) {
	return section * 0.1;
}

void getScores() {
	int a1, a2, a3, a4, midterm, final, section;
	cout << "Score for assignment 1: "; cin >> a1;
	cout << "Score for assignment 2: "; cin >> a2;
	cout << "Score for assignment 3: "; cin >> a3;
	cout << "Score for assignment 4: "; cin >> a4;
	int score1 = assignmentScores(a1, a2, a3, a4);

	cout << "Score for midterm: "; cin >> midterm;
	int score2 = midtermScore(midterm);

	cout << "Score for final: "; cin >> final;
	int score3 = finalScore(final);

	cout << "Score for section: "; cin >> section;
	int score4 = sectionScore(section);

	cout << "Final score: " << score1 + score2 + score3 + score4 << endl;

}


int main() {

	getScores();

	return 0;
}