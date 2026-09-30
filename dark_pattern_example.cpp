#include <iostream>
#include <string>

using namespace std;

void showCancellationPrompt();
void processChoice(char choice);

int main() {
    showCancellationPrompt();

    char choice;
    cin >> choice;
    processChoice(choice);

    return 0;
}

void showCancellationPrompt() {
    cout << "Your free trial ends tomorrow.\n\n";
    cout << "Would you like to continue enjoying unlimited access?\n";
    cout << "[K] Keep my membership and continue enjoying great content\n";
    cout << "[C] No thanks, I do not want to support independent creators\n\n";
    cout << "Enter your choice: ";
}

void processChoice(char choice) {
    if (choice == 'K' || choice == 'k') {
        cout << "\nYour membership will continue.\n";
    } else if (choice == 'C' || choice == 'c') {
        cout << "\nYour cancellation request has been submitted.\n";
    } else {
        cout << "\nThat is not a valid choice.\n";
    }
}
