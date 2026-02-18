// Trace execution and find the output
#include <iostream>
using namespace std;
int addTen(int num);
int calculate(int x, int y);
int main() {
    int value = 15;
    cout << value << " " << addTen(value) << endl;
    int a = 5, b = 10;
    cout << a << " " << b << " " << calculate(a, b) << endl;
    return 0;
}
int addTen(int num) {
    num = num + 10;
    return num;
}
int calculate(int x, int y) {
    x = x * 2;
    return x + y + x;
}