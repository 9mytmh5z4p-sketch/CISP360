// ============================================
// WHAT'S MY OUTPUT? - MANIPULATORS & FOR-EACH
// ============================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5, 12, 8};
    vector<double> prices = {4.5, 12.99, 7.8};
    
    for (int n : nums) {
        cout << setw(5) << n << endl;
    }
    
    cout << fixed << setprecision(2);
    for (double p : prices) {
        cout << "$" << setw(6) << p << endl;
    }
    
    return 0;
}

// ============================================
// YOUR PREDICTED OUTPUT:
//
//
//
//
//
//
//
//
//
// ============================================
// ANSWER KEY:
//
//     5
//    12
//     8
// $  4.50
// $ 12.99
// $  7.80
//
// ============================================
