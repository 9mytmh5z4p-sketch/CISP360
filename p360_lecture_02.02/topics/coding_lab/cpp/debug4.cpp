// C++ Debugging Activity - Find and Fix the Bugs!
// This program should calculate the average of three scores and display a grade
// There are 5 bugs hidden in this code - can you find them all?

#include <iostream>
using namespace std;

double calculateAverage(int score1, int score2, int score3) {
    int sum = score1 + score2 + score3;
    return sum / 3;
}

void displayGrade(double average) {
    if (average >= 90)
        cout << "Grade: A" << endl;
    else if (average = 80)
        cout << "Grade: B" << endl;
    else
        cout << "Grade: C or lower" << endl;
}

int main() {
    int s1 = 85, s2 = 92, s3 = 88;
    double avg = calculateAverage(s1, s2, s3);
    cout << "Average score: " << avg << endl;
    displayGrade(avg);
}