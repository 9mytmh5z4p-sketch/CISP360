#include <iostream>
using namespace std;

// Function Prototype
void Deep();
void Deeper();

int main() { 
    cout << "Hello from main()\n";
    Deep();
    cout << "Hello from main() again\n";

    return 0;
}

void Deep() {
    cout << "Hello from Deep()\n";
    Deeper();
    cout << "Now back in Deep() again\n";
}

void Deeper() {
    cout << "Now inside function Deeper()\n";
}