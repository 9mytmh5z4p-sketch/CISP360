#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

double average(const vector<int>& scores);

int main() {
    vector<int> scores = {91, 78, 84};
    vector<int> empty;

    cout << average(scores) << endl;

    if (empty.size() == 0) {
        cout << "No scores to average." << endl;
    } else {
        cout << average(empty) << endl;
    }

    return 0;
}

double average(const vector<int>& scores) {
    assert(scores.size() > 0);

    int total = 0;
    for (int score : scores) {
        total += score;
    }
    return static_cast<double>(total) / scores.size();
}
