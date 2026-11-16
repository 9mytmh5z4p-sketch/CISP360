// syntax_sprint_demo.cpp -- Syntax Sprint: Pointers (class demo, Lecture 13.02)
//
// Two ints share one int pointer. Two strings share one string pointer.
// Every address and value below is displayed through a pointer only.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // ----- Part 1: two ints and one pointer to an int -----
    int first = 10;
    int second = 20;
    int* intPtr = nullptr;      // start with no target

    intPtr = &first;            // point at first
    cout << "intPtr holds the address " << intPtr << endl;
    cout << "The value stored there is " << *intPtr << endl;
    cout << endl;

    intPtr = &second;           // reseat: now point at second
    cout << "intPtr holds the address " << intPtr << endl;
    cout << "The value stored there is " << *intPtr << endl;
    cout << endl;

    // ----- Part 2: two strings and one pointer to a string -----
    string course = "CISP 360";
    string topic = "Pointers";
    string* stringPtr = nullptr;

    stringPtr = &course;        // point at course
    cout << "stringPtr holds the address " << stringPtr << endl;
    cout << "The value stored there is " << *stringPtr << endl;
    cout << endl;

    stringPtr = &topic;         // reseat: now point at topic
    cout << "stringPtr holds the address " << stringPtr << endl;
    cout << "The value stored there is " << *stringPtr << endl;

    return 0;
}
