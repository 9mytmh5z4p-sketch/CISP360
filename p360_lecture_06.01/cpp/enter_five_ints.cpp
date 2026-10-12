// enter_five_ints.cpp
// Lets a student enter 5 integers, stores them in a vector, and prints them back.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(5);

    cout << "Please enter 5 integers.\n";

    for (int& n : numbers) {
        cout << "Enter an integer: ";
        cin >> n;
    }

    cout << "\nYou entered: ";
    for (int n: numbers) {
        cout << n << " ";
    }
    cout << "\n";

    return 0;
}