//colorIntro.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Define color codes as const strings
    const string NORM = "\033[0m";
    const string RED = "\033[031m";
    const string GREEN = "\033[032m";
    const string YELLOW = "\033[033m";
    const string BLUE = "\033[034m";
    const string MAGENTA = "\033[035m";
    const string CYAN = "\033[036m";
    const string WHITE = "\033[037m";
    
    // Store them in a vector
    vector<string> colors = {
        NORM,    // 0
        RED,     // 1
        GREEN,   // 2
        YELLOW,  // 3
        BLUE,    // 4
        MAGENTA, // 5
        CYAN,    // 6
        WHITE    // 7
    };
    
    // Now you can use either the named constants OR the vector
    // This gives you the best of both worlds!
    cout << RED << "Using the constant directly" << NORM << endl;
    cout << colors[1] << "Using the vector" << colors[0] << endl;
    
    int i = 0;
    for (auto COLOR:colors)
        cout << COLOR << i++ << NORM << endl;
    
    return 0;
}