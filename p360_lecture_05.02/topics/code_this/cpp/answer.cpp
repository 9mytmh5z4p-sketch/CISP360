#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// Function prototypes
double calculate(double amount);
double calculate(double amount, int months);
double calculate(double amount, double growthRate, int year);
void displayExpense(string category, double amount, string type);

int main() {
    // Set output formatting
    cout << fixed << setprecision(2);
    
    // Display header
    cout << "Budget Analyzer" << endl;
    cout << "===============" << endl << endl;
    
    // Monthly expenses
    double rent = 1200.00;
    double groceries = 450.00;
    
    cout << "Monthly Expenses:" << endl;
    displayExpense("Rent", calculate(rent), "Monthly");
    displayExpense("Groceries", calculate(groceries), "Monthly");
    cout << endl;
    
    // Quarterly expenses (3 months)
    double utilities = 90.00;
    double insurance = 200.00;
    
    cout << "Quarterly Expenses:" << endl;
    displayExpense("Utilities", calculate(utilities, 3), "Quarterly - 3 months");
    displayExpense("Insurance", calculate(insurance, 3), "Quarterly - 3 months");
    cout << endl;
    
    // Annual expenses with growth
    double healthcare = 250.00;
    double transportation = 180.00;
    
    cout << "Annual Expenses with Growth:" << endl;
    displayExpense("Healthcare (Year 1)", calculate(healthcare, 0.03, 1), "Annual with 3% growth");
    displayExpense("Healthcare (Year 2)", calculate(healthcare, 0.03, 2), "Annual with 3% growth");
    displayExpense("Transportation (Year 1)", calculate(transportation, 0.05, 1), "Annual with 5% growth");
    displayExpense("Transportation (Year 2)", calculate(transportation, 0.05, 2), "Annual with 5% growth");
    cout << endl;
    
    // Calculate and display total monthly baseline
    double totalMonthly = rent + groceries;
    cout << "===============" << endl;
    cout << "Total Monthly Baseline: $" << totalMonthly << endl;
    
    return 0;
}

// Function definitions

// Calculate monthly expense (returns amount unchanged)
double calculate(double amount) {
    return amount;
}

// Calculate quarterly expense (amount * months)
double calculate(double amount, int months) {
    return amount * months;
}

// Calculate annual expense with growth rate
double calculate(double amount, double growthRate, int year) {
    return amount * pow((1 + growthRate), year);
}

// Display expense information
void displayExpense(string category, double amount, string type) {
    cout << category << ": $" << amount << " (" << type << ")" << endl;
}
