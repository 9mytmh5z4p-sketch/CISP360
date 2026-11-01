// debug0901.cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_SCORES = 6

// Function prototypes
void displayMenu();
int getMenuChoice();

void printMultiplicationTable(int rows, int columns);
void printNumberPattern(int height);

void drawBarGraph(
    const string labels[],
    const int values[],
    int count
);

void showScoreSummary(
    const string names[],
    const int scores[],
    int count
);

void showSeparator();

int main()
{
    const int studentCount = 6;

    string studentNames[studentCount] =
    {
        "Avery",
        "Blake",
        "Casey",
        "Drew",
        "Emerson",
        "Frankie"
    };

    int studentScores[studentCount] =
    {
        88,
        94,
        76,
        91,
        83,
        97
    };

    string categories[5] =
    {
        "Programming",
        "Debugging",
        "Loops",
        "Functions",
        "Testing"
    };

    int categoryScores[5] =
    {
        8,
        6,
        10,
        7,
        9
    };

    int choice;
    bool finished = false;

    do
    {
        displayMenu();
        choice = getMenuChoice();

        cout << endl;

        if (choice == 1)
        {
            printMultiplicationTable(6, 6);
        }
        else if (choice == 2)
        {
            printNumberPattern(6);
        }
        else if (choice == 3)
        {
            drawBarGraph(categories, categoryScores, 5);
        }
        else if (choice == 4)
        {
            showScoreSummary(
                studentNames,
                studentScores,
                studentCount
            );
        }
        else if (choice == 5)
        {
            finished = true;
            cout << "Program finished." << endl;
        }
        else
        {
            cout << "Invalid menu choice." << endl;
        }

        if (!finished)
        {
            cout << endl;
            cout << "Press Enter to continue.";

            cin.ignore(1000, '\n');
            cin.get();

            cout << endl;
        }

    } while (!finished);

    return 0;
}

void showMenu()
{
    showSeparator();

    cout << "CLASSROOM PERFORMANCE DASHBOARD" << endl;

    showSeparator();

    cout << "1. Display multiplication table" << endl;
    cout << "2. Display number pattern" << endl;
    cout << "3. Display category graph" << endl;
    cout << "4. Display student score summary" << endl;
    cout << "5. Exit" << endl;

    showSeparator();
}

int getMenuChoice()
{
    int choice;

    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}

void printMultiplicationTable(int rows, int columns)
{
    cout << "MULTIPLICATION TABLE" << endl;
    cout << endl;

    cout << setw(5) << " ";

    for (int column = 1; column <= columns; row++)
    {
        cout << setw(5) << column;
    }

    cout << endl;

    showSeparator();

    for (int row = 1; row <= rows; row++)
    {
        cout << setw(5) << row;

        for (int column = 1; column <= columns; column++)
        {
            cout << setw(5) << row * column;
        }

        cout << endl;
    }
}

void printNumberPattern(int height)
{
    cout << "NUMBER PATTERN" << endl;
    cout << endl;

    for (int row = 1; row <= height; row++)
    {
        for (int number = 1; number <= row; number++)
        {
            cout << number << " ";
        }

        cout << endl;
    }
}

void drawBarGraph(
    const string labels[],
    const int values[],
    int count
)
{
    cout << "CATEGORY SCORE GRAPH" << endl;
    cout << endl;

    for (int index = 0; index < count; index++)
    {
        cout << left << setw(15) << labels[index];
        cout << " ";

        for (int star = 1; star < values[index]; star++)
        {
            cout << "*";
        }

        cout << " " << values[index] << endl;
    }
}

void showScoreSummary(
    const string names[],
    const int scores[],
    int count
)
{
    int total = 0;
    int highestScore = scores[0];
    string highestName = names[0];

    cout << "STUDENT SCORE SUMMARY" << endl;
    cout << endl;

    cout << left
         << setw(15) << "Student"
         << setw(10) << "Score"
         << "Rating"
         << endl;

    showSeparator();

    for (int index = 0; index <= count; index++)
    {
        cout << left
             << setw(15) << names[index]
             << setw(10) << scores[index];

        if (scores[index] >= 90)
        {
            cout << "Excellent";
        }
        else if (scores[index] >= 80)
        {
            cout << "Good";
        }
        else if (scores[index] >= 70)
        {
            cout << "Satisfactory";
        }
        else
        {
            cout << "Needs improvement";
        }

        cout << endl;

        total += scores[index];

        if (scores[index] > highestScore)
        {
            highestScore = scores[index];
            highestName = names[index];
        }
    }

    showSeparator();

    cout << fixed << setprecision(1);
    cout << "Average score: "
         << static_cast<double>(total) / count
         << endl;

    cout << "Highest score: "
         << highestName
         << " with "
         << highestScore
         << endl;
}

void showSeparator()
{
    cout << "----------------------------------------" << endl;
}