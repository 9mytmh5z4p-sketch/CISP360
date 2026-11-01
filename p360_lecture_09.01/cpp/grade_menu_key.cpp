// grade_menu.cpp -- Debugging Exercise: Menus & Input Validation
//
// This program is a small gradebook. It stores up to 5 test scores and
// can report the average and the highest score.
//
// ANSWER KEY -- all 3 bugs fixed; look for "FIX" comments.
//
// BUG 1 (getInt): "isDirty = false;" missing at the top of the loop.
//   Symptom: after one bad entry, every later entry is silently re-prompted
//   forever. isDirty stays true, so every "if (!isDirty)" check is skipped
//   and the loop never exits.
// BUG 2 (getInt): range check used && instead of ||.
//   Symptom: out-of-range values (150, menu 9) are accepted. No number can
//   be both below low AND above high, so the condition is never true.
//   Note the menu's "default:" case hides this for the menu -- the score
//   prompt is where it shows clearly.
// BUG 3 (main): missing "break;" at the end of case 1.
//   Symptom: adding a score also prints the average (switch fall-through).
//
// Specification (how the program SHOULD behave):
//   1. The menu accepts only 1, 2, 3, or 4. Anything else is rejected
//      with an error message, and the user is asked again.
//   2. A score must be a whole number from 0 to 100. Anything else is
//      rejected with an error message, and the user is asked again.
//   3. After a bad entry, the next good entry is accepted.
//   4. Each menu option does ONLY its own job, then the menu returns.
//   5. The gradebook holds at most 5 scores.
//
// Suggested test inputs: blank line, spaces only, letters, -5, 3.5,
// 99999, 0, 9, 150, 100, and a bad entry followed by a good one.

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

const int MAX_SCORES = 5;

int getInt(string prompt, int low, int high);
void showMenu();

int main() {
  int scores[MAX_SCORES];
  int count = 0;
  int choice = 0;

  cout << "=== Gradebook ===\n";

  do {
    showMenu();
    choice = getInt("Choice: ", 1, 4);

    switch (choice) {
      case 1:   // add a score
        if (count == MAX_SCORES) {   // sanity: gradebook full
          cout << "Gradebook is full (" << MAX_SCORES << " scores).\n";
        } else {
          scores[count] = getInt("Score (0-100): ", 0, 100);
          count++;
          cout << "Score recorded. (" << count << " of "
               << MAX_SCORES << ")\n";
        }
        break;    // FIX 3: missing break caused fall-through into case 2

      case 2: {  // average
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

      case 3: {  // highest
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

      case 4:
        cout << "Goodbye!\n";
        break;

      default:
        cout << "Unknown option " << choice << endl;
    }
  } while (choice != 4);

  return 0;
}

void showMenu() {
  cout << "\n1) Add a score\n"
       << "2) Show average\n"
       << "3) Show highest\n"
       << "4) Quit\n";
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
    isDirty = false;      // FIX 1: reset for every new attempt

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
      if (num < low || num > high) {   // FIX 2: || not &&
        isDirty = true;
        cout << "Enter a number from " << low << " to " << high << ".\n";
      }
    }

  } while (isDirty);

  return num;
}
