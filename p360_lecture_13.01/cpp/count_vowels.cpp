// count_vowels.cpp -- test program for countVowels() (Lecture 13.01, slide 34)
//
// Part 1 runs countVowels() on fixed C-strings and compares each result
// with the expected count. Part 2 counts the vowels in a line you type.

#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int countVowels(const char text[]);
void runTest(const char text[], int expected, int& passed, int& total);

int main() {
    int passed = 0;
    int total = 0;

    cout << "=== Part 1: Test cases ===\n";
    runTest("hello", 2, passed, total);
    runTest("HELLO", 2, passed, total);                      // uppercase vowels count too
    runTest("Programming in C++", 4, passed, total);         // o, a, i, i; spaces and symbols ignored
    runTest("rhythm", 0, passed, total);                     // no vowels
    runTest("AEIOU aeiou", 10, passed, total);               // every vowel, both cases
    runTest("", 0, passed, total);                           // empty string: loop stops at '\0' right away
    runTest("Sky 2026!", 0, passed, total);                  // y is not counted as a vowel

    char word[] = "Structured";                              // a char array works the same as a literal
    runTest(word, 3, passed, total);                         // u, u, e

    cout << passed << " of " << total << " tests passed\n";

    // Part 2: user input
    const int CAPACITY = 80;
    char line[CAPACITY] = {};

    cout << "\n=== Part 2: Your text ===\n";
    cout << "Enter text (up to " << CAPACITY - 1 << " characters): ";
    cin.getline(line, CAPACITY);

    cout << "\"" << line << "\" has " << countVowels(line) << " vowel(s)\n";

    return 0;
}

int countVowels(const char text[]) {
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        char letter = tolower(text[i]);
        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u') {
            count++;
        }
    }

    return count;
}

// Print one test result and update the pass count
void runTest(const char text[], int expected, int& passed, int& total) {
    int actual = countVowels(text);
    total++;

    if (actual == expected) {
        passed++;
    }

    cout << left << setw(22) << ("\"" + string(text) + "\"")
         << "expected " << expected << ", got " << actual
         << (actual == expected ? "  PASS" : "  FAIL") << "\n";
}
