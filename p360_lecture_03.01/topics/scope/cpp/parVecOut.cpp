// parVecOut.cpp
// Parallel Vector what's the output
#include <iostream>
#include <vector>
using namespace std;
// Normal top matter above

int main() {
    vector<int> numbers = {10, 25, 15, 30, 20};
    vector<string> labels = {"Alpha", "Beta", "Gamma", "Delta", "Echo"};
    
    int index = 0;
    for (string label : labels) {
        cout << label << ": " << numbers[index] << endl;
        index++;
    }
    
    return 0;
}