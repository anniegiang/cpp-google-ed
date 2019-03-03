// ex3_google_ed.cpp: Annie Giang
// Description: Sqaures table

#include <iostream>

using namespace std;

int main() {
	cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;

	for(int i = 1; i < 10; i++) {
		cout << i << "| ";
		for(int j = 1; j < 10; j++) {
			cout << i * j << '\t';
		}
		cout << endl;
	}
	return 0;
}