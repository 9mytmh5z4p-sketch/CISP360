// 6-1.cpp -- Demo of functions
#include <iostream>
using namespace std;

// Function Prototype
void DisplayMessage();

int main() {                 // function 1
    cout << "Hello from main()\n";
    DisplayMessage();        // call function 2
    cout << "Hello from main() again\n";

    return 0;
}

void DisplayMessage() {
    cout << "Hello from DisplayMessage()\n";
}