// program2.cpp
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

bool isPassing(int score)
{
    return score >= 70;
}

int main()
{
    int scores[] = {85, 62, 91, 74, 58, 100, 77, 69};

    int passing = count_if(
        begin(scores),
        end(scores),
        isPassing
    );

    cout << "Passing students: " << passing << endl;

    return 0;
}
