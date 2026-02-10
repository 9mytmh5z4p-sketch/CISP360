#include <iostream>
#include <string>
using namespace std;

// Function prototypes
bool isUpperCase(char ch);
bool isLowerCase(char ch);
char shiftCharacter(char ch, int shift);
string encodeMessage(string message, int shift);
void displayResults(string original, string encoded, int shift);

int main() {
    // Create variables
    string message = "Hello World";
    int shift = 3;
    
    // Encode the message
    string encodedMessage = encodeMessage(message, shift);
    
    // Display the results
    displayResults(message, encodedMessage, shift);
    
    return 0;
}

// Function definitions

bool isUpperCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return true;
    }
    else {
        return false;
    }
}

bool isLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return true;
    }
    else {
        return false;
    }
}

char shiftCharacter(char ch, int shift) {
    if (isUpperCase(ch)) {
        return char(((ch - 'A' + shift) % 26) + 'A');
    }
    else if (isLowerCase(ch)) {
        return char(((ch - 'a' + shift) % 26) + 'a');
    }
    else {
        return ch;
    }
}

string encodeMessage(string message, int shift) {
    string result = "";
    
    for (int i = 0; i < message.length(); i++) {
        result = result + shiftCharacter(message[i], shift);
    }
    
    return result;
}

void displayResults(string original, string encoded, int shift) {
    cout << "Caesar Cipher Encoder" << endl;
    cout << "=====================" << endl;
    cout << "Original Message: " << original << endl;
    cout << "Shift Amount: " << shift << endl;
    cout << "Encoded Message: " << encoded << endl;
    cout << "=====================" << endl;
}
