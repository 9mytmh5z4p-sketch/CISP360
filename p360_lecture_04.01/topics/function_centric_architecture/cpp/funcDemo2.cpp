// 6-4.cpp -- Functions calling functions
#include <iostream>
using namespace std;

void Deeper() {
    cout << "Now inside function Deeper()\n";
}

void Deep() {
    cout << "Hello from Deep()\n";
    Deeper();
    cout << "Now back in Deep() again\n";
}

int main() {                 // function 1
    cout << "Hello from main()\n";
    Deep();
    cout << "Hello from main() again\n";

    return 0;
}