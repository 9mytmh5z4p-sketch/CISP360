// parent_activity.cpp -- Class Activity: Season the Code (Lecture 13.02)
//
// Sean Parent's first rule from "C++ Seasoning" is "no raw loops": when a
// loop performs a known job, call the named algorithm that does that job.
//
// Each block below is a raw loop from earlier lectures (11.02-13.01).
// For each one:
//   1. Name the job it does.
//   2. Pick the algorithm from the menu that does that job.
//   3. Rewrite the block as a single line.
// Your rewritten program must print exactly the same output.
//
// Menu: accumulate (<numeric>), count, find, sort, min_element,
//       max_element (<algorithm>). Each takes scores.begin() and
//       scores.end(); some take one more value.

#include <array>
#include <iostream>

using namespace std;

void display(const array<int, 6>& values);

int main() {
    array<int, 6> scores = {91, 78, 100, 84, 62, 100};

    // A: add up every score
    int total = 0;
    for (int score : scores) {
        total += score;
    }
    cout << "A total:   " << total << "\n";

    // B: how many perfect scores?
    int perfect = 0;
    for (int score : scores) {
        if (score == 100) {
            perfect++;
        }
    }
    cout << "B perfect: " << perfect << "\n";

    // C: is there an 84 anywhere?
    bool present = false;
    for (int score : scores) {
        if (score == 84) {
            present = true;
            break;
        }
    }
    cout << "C has 84:  " << (present ? "yes" : "no") << "\n";

    // D: put the scores in ascending order (bubble sort from 12.01)
    for (int pass = 0; pass < 5; pass++) {
        for (int i = 0; i < 5 - pass; i++) {
            if (scores[i] > scores[i + 1]) {
                int temp = scores[i];
                scores[i] = scores[i + 1];
                scores[i + 1] = temp;
            }
        }
    }
    cout << "D sorted:  ";
    display(scores);

    return 0;
}

void display(const array<int, 6>& values) {
    for (int value : values) {
        cout << value << " ";
    }
    cout << "\n";
}
