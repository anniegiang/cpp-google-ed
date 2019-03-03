// ex8_google_ed.cpp: Annie Giang
// Description: a program to illustrate different scopes.

/*

What is the output of the following program?
// a: -6 b: 12 c: 0

*/

#include <iostream>
using namespace std;

int a = 18;
int b = 6;

int function1(int a, int b) {
  return a - b;
}

int function2() {
  int c;
  c = a + b;
  return c;
}

int main() {
  int b = 12;
  int c = 0;
  a = function1(b, a);
  c = function2();
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
}