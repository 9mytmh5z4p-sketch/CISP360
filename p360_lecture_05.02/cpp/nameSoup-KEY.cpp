// nameSoup-KEY.cpp
// "Refactor the Name Soup" - ANSWER KEY

#include <iostream>
using namespace std;

// ----- Function prototypes -----
int largest(int a, int b);
double largest(double a, double b);
char largest(char a, char b);
int largest(int a, int b, int c);
double largest(double a, double b, double c);
int largest(const int arr[], int size);

int main()
{
    int scores[] = { 88, 92, 75, 99, 81 };
    const int SIZE = 5;

    cout << "Larger of 3 and 7:            " << largest(3, 7) << endl;
    cout << "Larger of 2.5 and 1.5:        " << largest(2.5, 1.5) << endl;
    cout << "Later letter of 'q' and 'm':  " << largest('q', 'm') << endl;
    cout << "Largest of 4, 11, 6:          " << largest(4, 11, 6) << endl;
    cout << "Largest of 1.1, 0.5, 3.3:     " << largest(1.1, 0.5, 3.3) << endl;
    cout << "Highest score in the array:   " << largest(scores, SIZE) << endl;

    return 0;
}

// ----- Function definitions -----

int largest(int a, int b){
    return (a > b) ? a : b;
}

double largest(double a, double b){
    return (a > b) ? a : b;
}

char largest(char a, char b){
    return (a > b) ? a : b;
}

int largest(int a, int b, int c){
    return largest(largest(a, b), c);
}

double largest(double a, double b, double c){
    return largest(largest(a, b), c);
}

int largest(const int arr[], int size){
    int biggest = arr[0];
    for (int i = 1; i < size; i++)    {
        if (arr[i] > biggest)        {
            biggest = arr[i];
        }
    }
    return biggest;
}

// ----- Reflection answers -----
//
// 1. The compiler compares the NUMBER and TYPES of the arguments in each
//    call to the parameter lists of the six largest() functions and picks
//    the best match. The name is the same; the signatures are different.
//
// 2. Their signatures differ: largest(int, int) vs. largest(const int*, int).
//    An array argument (scores) is an int*, which cannot convert to int,
//    so only the array version is viable for largest(scores, SIZE).
//
// 3. In largest(int, int, int), the arguments are ints, so
//    largest(int, int) is an exact match. In the double version,
//    largest(double, double) is an exact match. Overloading works inside
//    function bodies exactly the same way it works in main().
//
// 4. largest(3, 7.5) does not compile: "call of overloaded
//    'largest(int, double)' is ambiguous." largest(int, int) is exact for
//    the first argument; largest(double, double) is exact for the second;
//    neither is better for both. (g++ also lists largest(char, char) as
//    a candidate because it is viable, but it needs two conversions, so
//    it could never win.)
//    Fixes: largest(3.0, 7.5)  or  largest(static_cast<double>(3), 7.5)
//
// 5. Advantage: the caller only remembers one name, and the name says
//    what the function does, not what types it uses. Disadvantage: when
//    types are mixed, the compiler may pick a version you didn't expect,
//    or refuse to pick one at all, so the programmer must think about
//    argument types. (Templates, covered later, remove the repetition
//    in the function bodies as well.)