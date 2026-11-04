// grade_array.cpp -- Debugging Exercise: Arrays
//
// This program is a small gradebook. It stores up to 5 test scores in a
// fixed-capacity array and can list the scores and report the average,
// the highest score, and the lowest score.
//
// THIS PROGRAM CONTAINS 3 BUGS. It compiles, but it does not behave as
// specified. All 3 bugs involve how the program uses its array. Find
// each bug, fix it, and write one sentence explaining what was wrong.
//
// Specification (how the program SHOULD behave):
//   1. The menu accepts only 1 through 6. Anything else is rejected
//      with an error message, and the user is asked again.
//   2. A score must be a whole number from 0 to 100. Anything else is
//      rejected with an error message, and the user is asked again.
//   3. The gradebook holds at most 5 scores. When it is full, adding a
//      score is refused with a message.
//   4. "Show all scores" lists only the scores that were entered,
//      numbered from 1.
//   5. Average, highest, and lowest use only the scores that were
//      entered.
//   6. Each menu option does ONLY its own job, then the menu returns.
//
// Suggested test: enter 80, 90, and 70, then try options 2, 3, 4, and 5.
// Then add scores until the gradebook is full and try to add one more.

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

const int MAX_SCORES = 5;

int getInt(string prompt, int low, int high);
void showMenu();

int main() {
  int scores[MAX_SCORES] = {};   // every position starts at zero
  int count = 0;                 // number of positions holding real scores
  int choice = 0;

  cout << "=== Gradebook ===\n";

  do {
    showMenu();
    choice = getInt("Choice: ", 1, 6);

    switch (choice) {
      case 1:   // add a score
        if (count > MAX_SCORES) {    // gradebook full
          cout << "Gradebook is full (" << MAX_SCORES << " scores).\n";
        } else {
          scores[count] = getInt("Score (0-100): ", 0, 100);
          count++;
          cout << "Score recorded. (" << count << " of "
               << MAX_SCORES << ")\n";
        }
        break;

      case 2:   // show all scores
        if (count == 0) {
          cout << "No scores entered yet.\n";
          break;
        }
        for (int i = 0; i <= count; i++)
          cout << "Score " << i + 1 << ": " << scores[i] << endl;
        break;

      case 3: {  // average
        if (count == 0) {
          cout << "No scores entered yet.\n";
          break;
        }
        int sum = 0;
        for (int i = 0; i < count; i++)
          sum += scores[i];
        double avg = static_cast<double>(sum) / count;
        cout << fixed << setprecision(1) << "Average: " << avg << endl;
        break;
      }

      case 4: {  // highest
        if (count == 0) {
          cout << "No scores entered yet.\n";
          break;
        }
        int highest = scores[0];
        for (int i = 1; i < count; i++)
          if (scores[i] > highest) highest = scores[i];
        cout << "Highest: " << highest << endl;
        break;
      }

      case 5: {  // lowest
        if (count == 0) {
          cout << "No scores entered yet.\n";
          break;
        }
        int lowest = scores[0];
        for (int score : scores)
          if (score < lowest) lowest = score;
        cout << "Lowest: " << lowest << endl;
        break;
      }

      case 6:
        cout << "Goodbye!\n";
        break;

      default:
        cout << "Unknown option " << choice << endl;
    }
  } while (choice != 6);

  return 0;
}

void showMenu() {
  cout << "\n1) Add a score\n"
       << "2) Show all scores\n"
       << "3) Show average\n"
       << "4) Show highest\n"
       << "5) Show lowest\n"
       << "6) Quit\n";
}

// getInt -- prompt until the user enters a whole number in [low, high].
// Uses the "Gauntlet of Trust": each check runs only if the input has
// survived every check before it. Add new checks by copying the pattern.
int getInt(string prompt, int low, int high) {
  string str;
  bool isDirty = false;
  int num = 0;

  do {
    // prompt
    cout << prompt;
    getline(cin, str);    // handle sentences
    isDirty = false;      // reset for every new attempt

    // validation check(s) - Gauntlet of Trust
    // check blank, sentence OK
    int spaces = 0;
    for (int i = 0; i < str.length(); i++)
      if (isblank(str[i])) spaces++;
    if (spaces == str.length()) {
      isDirty = true;
      cout << "Input can't be blank line.\n";
    }

    // type check: digits only (rejects letters, signs, decimals, spaces)
    if (!isDirty)
      for (int i = 0; i < str.length() && !isDirty; i++)
        if (!isdigit(str[i])) {
          isDirty = true;
          cout << "Enter digits only.\n";
        }

    // sanity check: too many digits would overflow stoi()
    if (!isDirty && str.length() > 3) {
      isDirty = true;
      cout << "That number is too long.\n";
    }

    // range check: now safe to convert
    if (!isDirty) {
      num = stoi(str);
      if (num < low || num > high) {
        isDirty = true;
        cout << "Enter a number from " << low << " to " << high << ".\n";
      }
    }

  } while (isDirty);

  return num;
}
