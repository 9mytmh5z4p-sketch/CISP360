# Nested Loops Worksheet: Answer Key

Oct 14, 2026 · @Caleb L Fowler, Jr

This key has tested solutions for all five exercises on the student worksheet. Every program compiles with `g++ -std=c++17 -Wall` and uses `using namespace std;`. Each buggy program gives exactly the "actual output" shown on the worksheet, and each fixed program gives the expected output.

| Exercise | Type | Skill practiced |
| --- | --- | --- |
| 1. Rectangle of stars | Debug (1 bug) | Where the newline goes: inner loop vs. outer loop |
| 2. Number triangle | Write | Inner loop limit that depends on the outer variable |
| 3. Multiplication table | Debug (1 bug) | Fixed inner loop limit vs. one that changes with the row |
| 4. Pairs that add up to a target | Write | Nested loops over a vector, starting at `j = i + 1` |
| 5. Centered pyramid | Debug (2 bugs) | Two inner loops back to back, and off-by-one limits |

For the debugging exercises, give credit for the fix and for the one-sentence explanation of what was wrong.

## Exercise 1: Debug the rectangle of stars

**The bug:** `cout << "\n";` is inside the inner loop, so a new line starts after every star.

**The fix:** Move `cout << "\n";` out of the inner loop so it runs once per row, after the inner loop ends.

Fixed program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
```

**Watch for:** students who delete the newline entirely. That prints all the stars on one line (`******`).

## Exercise 2: Number triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Height: ";
    cin >> height;

    for (int r = 1; r <= height; r++) {
        for (int c = 1; c <= r; c++) {
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}
```

**Watch for:** `cout << r` instead of `cout << c`, which prints `1`, `22`, `333`. Also watch for loops starting at 0, which adds an extra `0` to the front of each row.

## Exercise 3: Debug the multiplication table

**The bug:** The inner loop runs while `c <= r`, so each row only has as many columns as its row number. That prints a triangle instead of a square table.

**The fix:** Change the inner loop condition to `c <= size`.

Fixed program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Table size: ";
    cin >> size;

    for (int r = 1; r <= size; r++) {
        for (int c = 1; c <= size; c++) {
            cout << r * c << "\t";
        }
        cout << "\n";
    }

    return 0;
}
```

**Watch for:** students who change the outer loop instead. The outer loop is already correct. This is a good one to compare with Exercise 2, where `c <= r` is the right limit.

## Exercise 4: Pairs that add up to a target

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(5);
    cout << "Enter 5 integers: ";
    for (int& n : numbers) {
        cin >> n;
    }

    int target;
    cout << "Target sum: ";
    cin >> target;

    int found = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] + numbers[j] == target) {
                cout << numbers[i] << " + " << numbers[j] << " = " << target << "\n";
                found++;
            }
        }
    }
    if (found == 0) {
        cout << "No pairs found.\n";
    }

    return 0;
}
```

**Watch for:** an inner loop that starts at `j = 0`. It prints every pair twice (`2 + 7` and `7 + 2`). It can also pair a number with itself, such as `4` + 4 = 8 when the target is 8. Students who used `int& n` with a for-each loop to fill the vector are on the right track. That's the same pattern as the earlier vector program.

## Exercise 5: Debug the centered pyramid

**Bug 1:** The space loop uses `s <= height - r`, which prints one extra space on every row. **Fix:** change it to `s < height - r`.

**Bug 2:** The star loop uses `k < r`, which prints only `r` stars and makes a lopsided triangle. **Fix:** change it to `k < 2 * r - 1`.

Fixed program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Height: ";
    cin >> height;

    for (int r = 1; r <= height; r++) {
        for (int s = 0; s < height - r; s++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * r - 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
```

**Watch for:** students who fix only Bug 2. The stars come out right, but the whole pyramid is shifted one space to the right, which is easy to miss. Have them count the spaces before the top star: there should be 3 when the height is 4.
