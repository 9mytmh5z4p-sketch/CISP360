// nameSoup.cpp
// "Refactor the Name Soup"
//
// This program WORKS, but it is hard to read and hard to use. Every
// version of "find the largest value" has its own name, so the
// programmer has to remember six different function names.
//
// Instructions:
//   1. Compile and run the program. Save the output; your refactored
//      program must produce EXACTLY the same output.
//   2. Replace all six functions with overloaded functions that share
//      ONE name: largest.
//   3. Update the prototypes, the definitions, and every call in main().
//   4. Do not change what any function does, only its name (and, where
//      needed, its parameter list).
//   5. Answer the reflection questions at the bottom of this file.

#include <iostream>
using namespace std;

// ----- Function prototypes -----
int maxInt(int a, int b);
double maxDouble(double a, double b);
char maxChar(char a, char b);
int maxOfThreeInts(int a, int b, int c);
double maxOfThreeDoubles(double a, double b, double c);
int maxInArray(const int arr[], int size);

int main()
{
    int scores[] = { 88, 92, 75, 99, 81 };
    const int SIZE = 5;

    cout << "Larger of 3 and 7:            " << maxInt(3, 7) << endl;
    cout << "Larger of 2.5 and 1.5:        " << maxDouble(2.5, 1.5) << endl;
    cout << "Later letter of 'q' and 'm':  " << maxChar('q', 'm') << endl;
    cout << "Largest of 4, 11, 6:          " << maxOfThreeInts(4, 11, 6) << endl;
    cout << "Largest of 1.1, 0.5, 3.3:     " << maxOfThreeDoubles(1.1, 0.5, 3.3) << endl;
    cout << "Highest score in the array:   " << maxInArray(scores, SIZE) << endl;

    return 0;
}

// ----- Function definitions -----

int maxInt(int a, int b){
    return (a > b) ? a : b;
}

double maxDouble(double a, double b){
    return (a > b) ? a : b;
}

char maxChar(char a, char b){
    return (a > b) ? a : b;
}

int maxOfThreeInts(int a, int b, int c){
    return maxInt(maxInt(a, b), c);
}

double maxOfThreeDoubles(double a, double b, double c){
    return maxDouble(maxDouble(a, b), c);
}

int maxInArray(const int arr[], int size){
    int biggest = arr[0];
    for (int i = 1; i < size; i++)    {
        if (arr[i] > biggest)        {
            biggest = arr[i];
        }
    }
    return biggest;
}

// ----- Reflection questions -----
// Answer these in a comment block after you finish refactoring.
//
// 1. After refactoring, the program has six functions named largest.
//    How does the compiler know which one to call for each line in main()?
//
// 2. largest(int, int) and largest(const int[], int) both take two
//    arguments. Why don't they conflict?
//
// 3. Inside the three-argument versions, the code now calls largest()
//    with two arguments. Which version runs, and why?
//
// 4. Add this line to main():  cout << largest(3, 7.5) << endl;
//    What happens? Explain the result, then fix the call two different ways.
//
// 5. Is the refactored program easier or harder to read? Give one
//    advantage and one possible disadvantage of using a single name.