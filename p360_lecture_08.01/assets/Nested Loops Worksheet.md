# Nested Loops Worksheet

Oct 14, 2026 · @Caleb L Fowler, Jr

Name: \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_ Period: \_\_\_\_\_\_

This worksheet has two kinds of nested-loop exercises:

- **Write it (Exercises 2 and 4):** Write a C++ program from scratch. Start with `#include <iostream>` and `using namespace std;`. Your output must match the sample output exactly.
- **Debug it (Exercises 1, 3 and 5):** The program has bugs. Compare the actual output with the expected output. Then find each bug, fix it, and write one sentence explaining what was wrong.

In the samples, the numbers after each prompt are what the user types.

## Exercise 1: Debug the rectangle of stars

This program should ask for a number of rows and columns, then print a rectangle of `*` that size. It has **1 bug**.

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
            cout << "\n";
        }
    }

    return 0;
}
```

Expected output:

```
Rows: 2
Columns: 3
***
***
```

Actual output:

```
Rows: 2
Columns: 3
*
*
*
*
*
*
```

What was wrong: \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

**Hint:** It printed the right number of stars. How often should a new line start?

## Exercise 2: Number triangle

Ask the user for a height. Print a triangle where each row counts from 1 up to the row number.

```
Height: 4
1
12
123
1234
```

**Hint:** The inner loop's limit depends on the outer loop's variable.

## Exercise 3: Debug the multiplication table

This program should ask for a size `n` and print an `n × n` multiplication table. It has **1 bug**.

```cpp
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Table size: ";
    cin >> size;

    for (int r = 1; r <= size; r++) {
        for (int c = 1; c <= r; c++) {
            cout << r * c << "\t";
        }
        cout << "\n";
    }

    return 0;
}
```

Expected output:

```
Table size: 4
1	2	3	4
2	4	6	8
3	6	9	12
4	8	12	16
```

Actual output:

```
Table size: 4
1
2	4
3	6	9
4	8	12	16
```

What was wrong: \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

**Hint:** The values that print are correct, but some are missing. How many columns should every row have?

## Exercise 4: Pairs that add up to a target

Have the user enter 5 integers into a vector, then a target sum. Print every pair of different numbers in the vector that adds up to the target. If there are none, print `No pairs found.`

```
Enter 5 integers: 2 7 4 5 3
Target sum: 9
2 + 7 = 9
4 + 5 = 9
```

**Hint:** Start the inner loop at `j = i + 1`. That way no number is paired with itself, and no pair prints twice.

## Exercise 5: Debug the centered pyramid

This program should ask for a height and print a centered pyramid of stars. It has **2 bugs**.

```cpp
#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Height: ";
    cin >> height;

    for (int r = 1; r <= height; r++) {
        for (int s = 0; s <= height - r; s++) {
            cout << " ";
        }
        for (int k = 0; k < r; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
```

Expected output:

```
Height: 4
   *
  ***
 *****
*******
```

Actual output:

```
Height: 4
    *
   **
  ***
 ****
```

Bug 1: \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

Bug 2: \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

**Hint:** Count the spaces and stars in each row of the expected output. Row `r` should have `height - r` spaces and `2 * r - 1` stars. Check each inner loop against those numbers.
