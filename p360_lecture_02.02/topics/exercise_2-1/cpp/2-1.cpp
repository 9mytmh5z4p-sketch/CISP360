// inClass_2-1.cpp
// Author: [Student Name]
// Date: [Current Date]
// Description: This program analyzes weekly temperature data using vectors
//              and for-each loops to calculate and display statistics.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    // Create and initialize vector with weekly temperatures
    vector<double> temperatures = {72.5, 68.3, 75.0, 71.2, 69.8, 73.6, 70.1};
    
    // Display header
    cout << "Weekly Temperature Report" << endl;
    cout << "-------------------------" << endl;
    
    // Display all temperatures using for-each loop
    int dayNumber = 1;
    for (double temp : temperatures)
    {
        cout << "Day " << dayNumber << ": " << fixed << setprecision(1) 
             << temp << endl;
        dayNumber++;
    }
    
    // Calculate average temperature
    double sum = 0.0;
    for (double temp : temperatures)
    {
        sum += temp;
    }
    double average = sum / temperatures.size();
    
    // Display average
    cout << endl;
    cout << "Average temperature: " << fixed << setprecision(1) 
         << average << endl;
    
    return 0;
}