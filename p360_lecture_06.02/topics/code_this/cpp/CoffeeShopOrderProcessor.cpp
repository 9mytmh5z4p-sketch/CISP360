// CoffeeShopOrderProcessor.cpp
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
string getDrinkName(int code);
double getDrinkPrice(int code);
void processOrder(int code, int orderNumber);
void displayMenu();
double calculateTotal(vector<int> orders);

int main() {
    // Set output formatting for currency
    cout << fixed << setprecision(2);
    
    // Display title
    cout << "========================================" << endl;
    cout << "     COFFEE SHOP ORDER PROCESSOR" << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    // Create vector of drink codes
    vector<int> orders = {1, 2, 1, 4, 3};
    
    // Display menu
    displayMenu();
    
    // Display processing header
    cout << endl;
    cout << "========================================" << endl;
    cout << "PROCESSING ORDERS..." << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    // Process each order
    int orderNum = 1;
    for(int code : orders) {
        processOrder(code, orderNum);
        orderNum++;
    }
    
    // Display summary
    cout << endl;
    cout << "========================================" << endl;
    cout << "SUMMARY" << endl;
    cout << "========================================" << endl;
    cout << "Total Orders: " << orders.size() << endl;
    cout << "Total Cost: $" << calculateTotal(orders) << endl;
    cout << "========================================" << endl;
    
    return 0;
}

// Function definitions

// Get drink name based on code
string getDrinkName(int code) {
    string name;
    
    switch(code) {
        case 1:
            name = "Espresso";
            break;
        case 2:
            name = "Latte";
            break;
        case 3:
            name = "Cappuccino";
            break;
        case 4:
            name = "Mocha";
            break;
        case 5:
            name = "Americano";
            break;
        default:
            name = "Unknown Item";
            break;
    }
    
    return name;
}

// Get drink price based on code
double getDrinkPrice(int code) {
    double price;
    
    switch(code) {
        case 1:
            price = 2.50;
            break;
        case 2:
            price = 3.75;
            break;
        case 3:
            price = 4.00;
            break;
        case 4:
            price = 4.50;
            break;
        case 5:
            price = 3.00;
            break;
        default:
            price = 0.00;
            break;
    }
    
    return price;
}

// Process and display a single order
void processOrder(int code, int orderNumber) {
    string drinkName = getDrinkName(code);
    double price = getDrinkPrice(code);
    
    cout << "Order #" << orderNumber << ": " << drinkName << " - $" << price << endl;
}

// Display the coffee shop menu
void displayMenu() {
    cout << "MENU:" << endl;
    cout << "1. Espresso          - $2.50" << endl;
    cout << "2. Latte             - $3.75" << endl;
    cout << "3. Cappuccino        - $4.00" << endl;
    cout << "4. Mocha             - $4.50" << endl;
    cout << "5. Americano         - $3.00" << endl;
}

// Calculate total cost of all orders
double calculateTotal(vector<int> orders) {
    double total = 0.0;
    
    for(int code : orders) {
        total = total + getDrinkPrice(code);
    }
    
    return total;
}
