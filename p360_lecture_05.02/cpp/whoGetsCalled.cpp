// whoGetsCalled.cpp
// "Which One Gets Called?" Prediction Drill
//
// Instructions:
//   1. Do NOT compile yet.
//   2. For each numbered call in main(), write down which version of
//      print() you think will run: int, double, char, or string.
//   3. Compile and run the program to check your predictions.
//   4. For any prediction you missed, explain WHY the compiler chose
//      the version it did.

#include <iostream>
#include <string>
using namespace std;

// ----- Function prototypes -----
void print(int value);
void print(double value);
void print(char value);
void print(const string& value);

// ----- Prediction calls -----

int main()
{
    short smallNum = 7;
    float price = 2.5f;
    string name = "Ada";

    cout << "Call 1:  "; print(5);
    cout << "Call 2:  "; print(5.0);
    cout << "Call 3:  "; print('A');
    cout << "Call 4:  "; print(name);
    cout << "Call 5:  "; print("hi");
    cout << "Call 6:  "; print(price);
    cout << "Call 7:  "; print(smallNum);
    cout << "Call 8:  "; print(true);
    cout << "Call 9:  "; print('A' + 1);
    cout << "Call 10: "; print(7 / 2);
    cout << "Call 11: "; print(7 / 2.0);

    // BONUS: Predict what happens if you uncomment the line below.
    // Will it compile? If not, why not?
    // print(10L);

    return 0;
}

// ----- Function definitions -----

void print(int value){
    cout << "print(int)    called with: " << value << endl;
}

void print(double value){
    cout << "print(double) called with: " << value << endl;
}

void print(char value){
    cout << "print(char)   called with: " << value << endl;
}

void print(const string& value){
    cout << "print(string) called with: " << value << endl;
}