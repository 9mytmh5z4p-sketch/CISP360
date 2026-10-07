//numMenu.cpp
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// Function Prototypes
void displayMenu();
int getMenuChoice();
double getPositiveAmount();
void processChoice(int choice, double& balance);
void addDeposit(double& balance);
void makeWithdrawal(double& balance);
void showBalance(double balance);


int main() {
    double balance = 0.0;

    // Normally we would wrap this in a loop
    displayMenu();
    int choice = getMenuChoice();
    processChoice(choice, balance);

    return 0;
}

void displayMenu() {
    cout << "\nBanking Menu\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Show balance\n";
    cout << "4. Quit\n";
}

int getMenuChoice() {
    int choice;

    cout << "Choice: ";

    // a touch advanced, prevents entering very bad data
    while (!(cin >> choice) || choice < 1 || choice > 4) {
        cout << "Enter a menu choice from 1 through 4: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return choice;
}

double getPositiveAmount() {
    double amount;

    cout << "Amount: ";

    while (!(cin >> amount) || amount <= 0) {   // input validation
        cout << "Enter a positive amount: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return amount;
}

void processChoice(int choice, double& balance) {
    switch (choice) {
    case 1:
        addDeposit(balance);
        break;
    case 2:
        makeWithdrawal(balance);
        break;
    case 3:
        showBalance(balance);
        break;
    case 4:
        cout << "Goodbye.\n";
        break;
    default: 
        cout << "Entered bad input" << endl;
    }
}

void addDeposit(double& balance) {
    double amount = getPositiveAmount();

    balance += amount;
    cout << "Deposit accepted.\n";
}

void makeWithdrawal(double& balance) {
    double amount = getPositiveAmount();

    if (amount <= balance) {    // more input validation
        balance -= amount;
        cout << "Withdrawal accepted.\n";
    } else {
        cout << "Withdrawal declined: insufficient funds.\n";
    }
}

void showBalance(double balance) {
    cout << fixed << setprecision(2);
    cout << "Current balance: $" << balance << "\n";
}