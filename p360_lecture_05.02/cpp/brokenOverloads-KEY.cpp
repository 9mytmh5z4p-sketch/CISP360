// brokenOverloads-KEY.cpp
// "Fix the Broken Overloads" - ANSWER KEY
//
// BUG 1 - Overloads that differ only by return type
//   int square(int) and double square(int) have the same signature
//   (name + parameter list). Return type is not part of the signature,
//   so the compiler sees one function declared two different ways.
//   FIX: Change the parameter of the second version to double.
//
// BUG 2 - Ambiguous call
//   larger(3, 4.5) passes an int and a double. Neither overload is a
//   better match for BOTH arguments: larger(int, int) is exact for the
//   first argument, larger(double, double) is exact for the second.
//   The compiler refuses to guess.
//   FIX: Make both arguments the same type, e.g. larger(3.0, 4.5)
//   (static_cast<double>(3) also works).
//
// BUG 3 - Default argument collides with another overload
//   greet("Ada") matches greet(string) AND greet(string, int = 1),
//   because the default argument lets the second version be called
//   with one argument. The call is ambiguous.
//   FIX: Delete greet(string). The default argument already covers
//   the one-argument case.
//
// BUG 4 - Top-level const does not create a new signature
//   For a parameter passed BY VALUE, const only affects the function's
//   own copy, so show(int) and show(const int) are the same signature.
//   The prototypes just redeclare one function; the second DEFINITION
//   is a redefinition error.
//   FIX: Delete one of the show() functions.
//   (Note: const DOES matter for reference and pointer parameters,
//   e.g. show(int&) vs. show(const int&) are different signatures.)

#include <iostream>
#include <string>
using namespace std;

// ----- Function prototypes -----

int square(int x);
double square(double x);                  // FIX 1

int larger(int a, int b);
double larger(double a, double b);

void greet(string name, int times = 1);   // FIX 3 (one-arg version removed)

void show(int n);                         // FIX 4 (const version removed)

int main()
{
    // Uses of square()
    cout << "square(4)   = " << square(4) << endl;
    cout << "square(2.5) = " << square(2.5) << endl;

    // Uses of larger()
    cout << "larger(3, 7)     = " << larger(3, 7) << endl;
    cout << "larger(3, 4.5)   = " << larger(3.0, 4.5) << endl;   // FIX 2

    // Uses of greet()
    greet("Ada");
    greet("Grace", 2);

    // Uses of show()
    show(42);

    return 0;
}

// ----- Function definitions -----

int square(int x)
{
    return x * x;
}

double square(double x)                   // FIX 1
{
    return x * x;
}

int larger(int a, int b)
{
    return (a > b) ? a : b;
}

double larger(double a, double b)
{
    return (a > b) ? a : b;
}

void greet(string name, int times)        // default value stays in the prototype only
{
    for (int i = 0; i < times; i++)
    {
        cout << "Hello, " << name << "!" << endl;
    }
}

void show(int n)
{
    cout << "show(int): " << n << endl;
}