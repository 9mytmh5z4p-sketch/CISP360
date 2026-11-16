// syntax_sprint_pointers.cpp -- Syntax Sprint solution (Lecture 13.02)
//
// Two ints share one int pointer, and two strings share one string pointer.
// Every value and address is displayed through a pointer variable only.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int first = 10;
    int second = 20;
    int* intPtr = &first;

    cout << "intPtr holds " << intPtr << ", which contains " << *intPtr << "\n";
    intPtr = &second;
    cout << "intPtr holds " << intPtr << ", which contains " << *intPtr << "\n";

    string course = "CISP 360";
    string topic = "Pointers";
    string* stringPtr = &course;

    cout << "stringPtr holds " << stringPtr << ", which contains " << *stringPtr << "\n";
    stringPtr = &topic;
    cout << "stringPtr holds " << stringPtr << ", which contains " << *stringPtr << "\n";

    return 0;
}
