// predictTheFailure.cpp
#include <iostream>

using namespace std;

int main() {
    int guests = 0;

    cout << "How many guests? ";
    cin >> guests;

    if (cin.fail()) {
        cout << "That was not a whole number.\n";
    }

    cout << "Guests: " << guests << '\n';
    cout << "Ready to continue.\n";

    return 0;
}
//      What happens
//      to cin?     to guest?
//4
//four
//4.5
//-2





// Ask students to add this code
if (cin.fail()) {
    cout << "Invalid input.\n";
}

// Run with input of four









// Now clear the failed state
if (cin.fail()) {
    cout << "Please enter a whole number.\n";

    // Clear the failed state.
    ____________________;

    // Remove the invalid input from the stream.
    ____________________;
}









cin.clear();                // resets the stream
cin.ignore(1000, '\n');     // removes the invalid input still in the buffer






// Now add range validation so the number of guests must be at least 1.
// Test the program with the following data:
four
-2
0
3






int guests = 0;

while (guests < 1) {
    cout << "How many guests? ";
    cin >> guests;

    if (cin.fail()) {
        cout << "Please enter a whole number.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        guests = 0;
    } else if (guests < 1) {
        cout << "Enter a number greater than zero.\n";
    }
}

cout << "Confirmed guests: " << guests << '\n';




