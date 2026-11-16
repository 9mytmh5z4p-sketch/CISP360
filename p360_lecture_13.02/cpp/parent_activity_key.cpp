// parent_activity_key.cpp -- Answer key for Season the Code (Lecture 13.02)
//
// Each raw loop from parent_activity.cpp is replaced by the named algorithm
// that does the same job. The output is identical.
//
//   A  sum of every element        -> accumulate  (<numeric>)
//   B  count elements equal to 100 -> count       (<algorithm>)
//   C  is 84 present?              -> find        (<algorithm>)
//   D  ascending order             -> sort        (<algorithm>)

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>

using namespace std;

void display(const array<int, 6>& values);

int main() {
    array<int, 6> scores = {91, 78, 100, 84, 62, 100};

    int total = accumulate(scores.begin(), scores.end(), 0);
    cout << "A total:   " << total << "\n";

    int perfect = count(scores.begin(), scores.end(), 100);
    cout << "B perfect: " << perfect << "\n";

    bool present = find(scores.begin(), scores.end(), 84) != scores.end();
    cout << "C has 84:  " << (present ? "yes" : "no") << "\n";

    sort(scores.begin(), scores.end());
    cout << "D sorted:  ";
    display(scores);

    return 0;
}

// display still uses a loop: printing every value is its own small job
void display(const array<int, 6>& values) {
    for (int value : values) {
        cout << value << " ";
    }
    cout << "\n";
}
