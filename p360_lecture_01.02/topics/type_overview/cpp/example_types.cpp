// example_types.cpp
#include <iostream>
#include <string>

int main() {
    // Integer types
    int intNum = 42;
    unsigned int unsignedNum = 100;
    long long longLongNum = 9000000000LL;
    
    // Floating-point types
    float floatNum = 3.14f;         // good  to about 6 decimal places
    double doubleNum = 3.14159;     // good to about 15 decimal places
    
    // Character types
    char charVar = 'A';
    
    // Boolean type
    bool boolVar = true;
    
    // String type
    std::string stringVar = "Hello, World!";
    
    // Auto keyword (type inference)
    auto autoInt = 42;
    auto autoDouble = 3.14;
    auto autoString = std::string("Auto");
    
    // Const variable
    const int CONSTANT = 100;
    
    std::cout << "All major variable types demonstrated." << std::endl;
    
    return 0;
}