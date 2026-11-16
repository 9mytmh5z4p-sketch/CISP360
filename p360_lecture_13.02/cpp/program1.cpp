// program1.cpp
#include <iostream>
using namespace std;

int main()
{
    int scores[] = {85, 62, 91, 74, 58, 100, 77, 69};
    int passing = 0;

    for (int i = 0; i < 8; i++)
    {
        if (scores[i] >= 70)
        {
            passing++;
        }
    }

    cout << "Passing students: " << passing << endl;

    return 0;
}
