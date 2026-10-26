#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("scores.txt");

    if (!inFile.is_open()) {
        cerr << "Error: could not open scores.txt" << endl;
        return 1;
    }

    string name;
    int score;

    while (inFile >> name >> score) {
        cout << name << ": " << score << endl;
    }

    inFile.close();
    return 0;
}
