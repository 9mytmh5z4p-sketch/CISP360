// brokenOverloads.cpp
// "Fix the Broken Overloads"
//
// This program does NOT compile. It contains four overloading mistakes,
// marked BUG 1 through BUG 4.
//
// Instructions:
//   1. Compile the program and read the compiler errors carefully.
//   2. For each bug, write one or two sentences explaining WHY the
//      compiler rejects it. Use the terms "signature," "ambiguous,"
//      "return type," or "default argument" where they apply.
//   3. Fix each bug so the program compiles and produces the
//      expected output shown at the bottom of this file.
//   4. Do not delete any function CALLS in main(). You may change
//      prototypes, definitions, and arguments.

#include <iostream>
#include <string>
using namespace std;

// ----- Function prototypes -----

// BUG 1: Two versions of square()
int square(int x);
double square(int x);

// BUG 2: Two versions of larger()
int larger(int a, int b);
double larger(double a, double b);

// BUG 3: Two versions of greet()
void greet(string name);
void greet(string name, int times = 1);

// BUG 4: Two versions of show()
void show(int n);
void show(const int n);

int main()
{
    // Uses of square()
    cout << "square(4)   = " << square(4) << endl;
    cout << "square(2.5) = " << square(2.5) << endl;

    // Uses of larger()
    cout << "larger(3, 7)     = " << larger(3, 7) << endl;
    cout << "larger(3, 4.5)   = " << larger(3, 4.5) << endl;

    // Uses of greet()
    greet("Ada");
    greet("Grace", 2);

    // Uses of show()
    show(42);

    return 0;
}

// ----- Function definitions -----

int square(int x){
    return x * x;
}

double square(int x){
    return x * x;
}

int larger(int a, int b){
    return (a > b) ? a : b;
}

double larger(double a, double b){
    return (a > b) ? a : b;
}

void greet(string name){
    cout << "Hello, " << name << "!" << endl;
}

void greet(string name, int times){
    for (int i = 0; i < times; i++)    {
        cout << "Hello, " << name << "!" << endl;
    }
}

void show(int n){
    cout << "show(int): " << n << endl;
}

void show(const int n){
    cout << "show(const int): " << n << endl;
}

// ----- Expected output after all bugs are fixed -----
// square(4)   = 16
// square(2.5) = 6.25
// larger(3, 7)     = 7
// larger(3, 4.5)   = 4.5
// Hello, Ada!
// Hello, Grace!
// Hello, Grace!
// show(int): 42