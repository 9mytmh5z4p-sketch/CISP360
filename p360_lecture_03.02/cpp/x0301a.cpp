// x0301a.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int itemWidth = 16;
    const int quantityWidth = 8;

    int coffee = 18;
    int tea = 11;
    int sandwiches = 7;
    int muffins = 14;
    int smoothies = 5;

    cout << "Daily Cafe Sales" << endl;
    cout << "------------------------------" << endl;

    cout << left << setw(itemWidth) << "Item"
         << right << setw(quantityWidth) << "Qty"
         << "  Bar" << endl;

    cout << left << setw(itemWidth) << "Coffee"
         << right << setw(quantityWidth) << coffee
         << "  ##################" << endl;

    cout << left << setw(itemWidth) << "Tea"
         << right << setw(quantityWidth) << tea
         << "  ###########" << endl;

    cout << left << setw(itemWidth) << "Sandwiches"
         << right << setw(quantityWidth) << sandwiches
         << "  #######" << endl;

    cout << left << setw(itemWidth) << "Muffins"
         << right << setw(quantityWidth) << muffins
         << "  ##############" << endl;

    cout << left << setw(itemWidth) << "Smoothies"
         << right << setw(quantityWidth) << smoothies
         << "  #####" << endl;

    return 0;
}