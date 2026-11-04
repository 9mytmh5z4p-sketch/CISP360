// roster_debug.cpp -- Debugging Exercise: Arrays with Functions, Array
// Algorithms, and Parallel Arrays
//
// This program stores a class roster in two parallel arrays: names[] and
// scores[]. Index i in both arrays describes the same student.
//
// THIS PROGRAM CONTAINS 5 BUGS. It compiles and runs, but it does not
// behave as specified. Every bug involves arrays: how they are passed to
// functions, how an algorithm walks through them, or how parallel arrays
// stay in step. Find each bug, fix it, and write one sentence explaining
// what was wrong.
//
// Specification (how the program SHOULD behave):
//   1. The roster lists all 5 students with their scores.
//   2. The class average is 82.0.
//   3. The top score is Grace 95; the lowest score is Barbara 62.
//   4. The curve preview shows each score plus 5 points WITHOUT changing
//      the stored scores.
//   5. Looking up any of the 5 names reports that student's score.
//      Looking up a name that is not on the roster reports "not found".
//   6. The ranking lists students from highest to lowest score, and each
//      score stays with its own student.
//
// Expected output (looking up Grace):
//   === Class Roster ===
//   1. Ada       91
//   2. Linus     78
//   3. Grace     95
//   4. Alan      84
//   5. Barbara   62
//
//   Class average: 82.0
//   Top score:     Grace 95
//   Lowest score:  Barbara 62
//
//   === Curve Preview (+5) ===
//   1. Ada       96
//   2. Linus     83
//   3. Grace     100
//   4. Alan      89
//   5. Barbara   67
//
//   Look up a student: Grace
//   Grace scored 95
//
//   === Ranking (highest first) ===
//   1. Grace     95
//   2. Ada       91
//   3. Alan      84
//   4. Linus     78
//   5. Barbara   62

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 5;

void displayRoster(const string names[], const int scores[], int size);
double averageScore(const int scores[], int size);
int findHighestIndex(const int scores[], int size);
int findLowestIndex(const int scores[], int size);
void previewCurve(const string names[], int scores[], int size, int bonus);
int findName(const string names[], int size, string target);
void sortByScore(string names[], int scores[], int size);

int main() {
    string names[SIZE] = {"Ada", "Linus", "Grace", "Alan", "Barbara"};
    int scores[SIZE] = {91, 78, 95, 84, 62};

    cout << "=== Class Roster ===\n";
    displayRoster(names, scores, SIZE);

    cout << fixed << setprecision(1);
    cout << "\nClass average: " << averageScore(scores, SIZE) << "\n";

    int top = findHighestIndex(scores, SIZE);
    cout << "Top score:     " << names[top] << " " << scores[top] << "\n";

    int low = findLowestIndex(scores, SIZE);
    cout << "Lowest score:  " << names[low] << " " << scores[low] << "\n";

    cout << "\n=== Curve Preview (+5) ===\n";
    previewCurve(names, scores, SIZE, 5);

    string target;
    cout << "\nLook up a student: ";
    cin >> target;

    int index = findName(names, SIZE, target);
    if (index == -1) {
        cout << target << " not found\n";
    } else {
        cout << names[index] << " scored " << scores[index] << "\n";
    }

    sortByScore(names, scores, SIZE);
    cout << "\n=== Ranking (highest first) ===\n";
    displayRoster(names, scores, SIZE);

    return 0;
}

// Print one numbered line per student
void displayRoster(const string names[], const int scores[], int size) {
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << left << setw(10) << names[i] << right
             << scores[i] << "\n";
    }
}

// Return the mean of the first size scores
double averageScore(const int scores[], int size) {
    int count = sizeof(scores) / sizeof(scores[0]);   // number of scores
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += scores[i];
    }
    return static_cast<double>(total) / count;
}

// Return the index of the highest score
int findHighestIndex(const int scores[], int size) {
    int bestIndex = 0;
    for (int i = 1; i < size; i++) {
        if (scores[i] > scores[bestIndex]) {
            bestIndex = i;
        }
    }
    return bestIndex;
}

// Return the index of the lowest score
int findLowestIndex(const int scores[], int size) {
    int lowest = 0;
    int lowestIndex = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

// Show each score plus bonus without changing the stored scores
void previewCurve(const string names[], int scores[], int size, int bonus) {
    for (int i = 0; i < size; i++) {
        scores[i] += bonus;
        cout << i + 1 << ". " << left << setw(10) << names[i] << right
             << scores[i] << "\n";
    }
}

// Return the index of target in names, or -1 if it is not there
int findName(const string names[], int size, string target) {
    for (int i = 0; i < size; i++) {
        if (names[i] == target) {
            return i;
        } else {
            return -1;
        }
    }
    return -1;
}

// Sort from highest to lowest score, moving each student's whole record
void sortByScore(string names[], int scores[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
            if (scores[i] < scores[i + 1]) {
                swap(scores[i], scores[i + 1]);
            }
        }
    }
}
