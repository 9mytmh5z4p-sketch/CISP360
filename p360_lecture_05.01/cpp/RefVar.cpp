// RefVar.cpp
#include <iostream>
using namespace std;

void Prompt(int&, int&, int&);
int Adder(int, int, int);

int main() {
  int iA, iB, iC;
  int total;

  Prompt(iA, iB, iC);
  total = Adder(iA, iB, iC);
  cout << total << endl;

  return 0;
}
void Prompt (int& a, int& b, int& c) {
  cout << "enter first number: ";
  cin >> a;
  cout << "enter second number: ";
  cin >> b;
  cout << "enter third number: ";
  cin >> c;
}
int Adder(int a, int b, int c) {
  return a + b + c;
}

/*
Create a function which accepts 3 reference variables. In the function, prompt the client to enter 3 values - 1 value in each variable.
Create a second function which you pass the 3 variables as arguments and which returns those values multiplied together.
Display the total in main().

This example doesn't even need to send anything to Adder() bc the ints in main() were changed.
*/