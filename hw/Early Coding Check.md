# Early Coding Check: Input and Formatted Output

> **Class activity** · Online submission due Sunday, September 13, 2026, at 11:59 p.m. · Estimated time: 30–45 minutes

## Activity Overview

Create a small purchase-summary program that gathers keyboard input, performs one calculation, and presents the result in a neatly aligned report. This activity practices choosing appropriate variable types, reading text and numeric values, and formatting decimal output.

## Activity Details

- **In-person format:** Complete during the scheduled class activity.
- **Online format:** Complete individually and submit through Canvas.
- **Online due date:** Sunday, September 13, 2026, at 11:59 p.m.
- **Estimated time:** 30–45 minutes

## Scenario

A campus supply store needs a program that prepares a purchase summary for one item. The program will ask for the item’s name, quantity, and unit price, calculate the total price, and display the information in a formatted table. The item name must be able to contain spaces.

## Learning Objectives

After completing this activity, you should be able to:

- Choose appropriate types for text, whole-number, and decimal data.
- Read a full line of text with `getline()` and numeric values with `cin`.
- Use an arithmetic expression to calculate a purchase total.
- Use `setw`, `fixed`, and `setprecision(2)` to create readable output.

## Common Program Standards

Your source file must include a source file header, the required library headers, `using namespace std;`, one correctly formed `int main()` function, meaningful variable names, and `return 0;`.

## Technical Requirements: 5 Required Tasks

Your program must complete all five tasks below.

### Task 1: Set Up the Program

Your program must:

- **1.1.** Begin with a block-comment source file header containing your full name, course and section, date, assignment name, and a brief program description.
- **1.2.** Include `<iostream>`, `<iomanip>`, and `<string>`.
- **1.3.** Include `using namespace std;`.
- **1.4.** Place all executable statements inside one correctly formed `int main()` function.
- **1.5.** Display a short program title before requesting input and finish `main()` with `return 0;`.

### Task 2: Declare the Program’s Variables

Your program must:

- **2.1.** Declare a `string` variable for the item name.
- **2.2.** Declare an integer variable for the quantity.
- **2.3.** Declare `double` variables for the unit price and calculated total.
- **2.4.** Give every variable a meaningful name and use that variable consistently throughout the program.
- **2.5.** Declare and initialize a `boolean` variable for taxes applied.

### Task 3: Read Keyboard Input

Your program must:

- **3.1.** Ask for the item name first and read it with `getline()`.
- **3.2.** Ask for the quantity and read it with `cin`.
- **3.3.** Ask for the unit price and read it with `cin`.
- **3.4.** Use clear prompts that tell the user exactly what to enter.
- **3.5.** Test the program with an item name containing at least two words.

> Read the item name before the numeric values. This keeps the activity focused on full-line text input without requiring input-stream cleanup that has not yet been assigned.

### Task 4: Calculate the Purchase Total

Your program must:

- **4.1.** Multiply the quantity by the unit price.
- **4.2.** Declare an appropriate total cost variable.
- **4.3.** Initialize total cost to zero.
- **4.4.** Store the result in the total variable.
- **4.5.** Use the values entered by the user rather than hard-coding the answer.

### Task 5: Display a Formatted Purchase Summary

Your program must:

- **5.1.** Display a heading for the purchase summary.
- **5.2.** Display column headings for the item name, quantity, unit price, and total.
- **5.3.** Use `setw` to organize the headings and values into readable columns.
- **5.4.** Use `fixed` and `setprecision(2)` so both monetary values display exactly two digits after the decimal point.
- **5.5.** Display the complete multiword item name and the correctly calculated total.

## Sample Interaction

```text
Campus Supply Purchase Summary

Enter the item name: Spiral Notebook Pack
Enter the quantity: 3
Enter the unit price: 4.75

PURCHASE SUMMARY
Item                         Quantity     Unit Price          Total
Spiral Notebook Pack                3          $4.75         $14.25
```

The exact spacing may differ, but the headings and values must form clearly readable columns.

## Completion and Submission

**In-person students:** Complete the program during the scheduled class activity and demonstrate a successful run or submit the file as directed by the instructor.

**Online students:** By Sunday, September 13, 2026, at 11:59 p.m., submit the completed source file and one sample run showing a multiword item name. Place the sample run at the bottom of the source file inside a block comment.

Online students should rename the completed source file before uploading it to Canvas:

```text
Working source: LastName_EarlyCodingCheck.cpp
Submitted file: LastName_EarlyCodingCheck.txt
```

## Completion Checklist

- The program compiles and runs without errors.
- The item name is read with `getline()`.
- The quantity and unit price are read with `cin`.
- A multiword item name appears completely in the report.
- The total is calculated correctly.
- `setw`, `fixed`, and `setprecision(2)` are used.
- Both monetary values display two decimal places.
- The final report is aligned and easy to read.
