# Early Coding Check: Build a Mini Receipt

> **Class activity** · Estimated time: 25–35 minutes

## Activity Overview

You will build a focused program from scratch. The Mini Receipt program reinforces input, arithmetic, variables, and formatted output without adding a new planning model or advanced data-type requirement.

## Scenario

A campus supply store needs a quick receipt for one item. Your program will ask for an item name, quantity, and unit price, calculate the subtotal, and print a readable receipt.

## Learning Objectives

After completing this activity, you should be able to:

- Declare variables with appropriate types and meaningful names.
- Read a multiword string with `getline()` and numbers with `cin`.
- Calculate a subtotal from values entered by the user.
- Use `fixed`, `setprecision(2)`, and `setw` to format a small report.

## Technical Requirements: 4 Required Tasks

Your program must complete all four tasks below.

### Task 1: Set Up the Program

Your program must:

- **1.1.** Begin with a short block-comment header containing your name, date, assignment name, and one-sentence description.
- **1.2.** Include `<iostream>`, `<iomanip>`, and `<string>`.
- **1.3.** Include `using namespace std;` and one correctly formed `int main()` function.
- **1.4.** Display a title such as `Mini Receipt` and finish `main()` with `return 0;`.

### Task 2: Read the Purchase Information

Your program must:

- **2.1.** Declare a `string` for the item name, an `int` for quantity, and a `double` for unit price.
- **2.2.** Prompt for the item name and read it with `getline()` so spaces are accepted.
- **2.3.** Prompt for quantity and unit price and read them with `cin`.
- **2.4.** Use clear prompts and meaningful variable names.

### Task 3: Calculate the Subtotal

Your program must:

- **3.1.** Declare a `double` subtotal variable and initialize it to `0.0`.
- **3.2.** Calculate `quantity * unit price` and store the result in subtotal.
- **3.3.** Use the values entered by the user rather than hard-coding the answer.
- **3.4.** Test the program with a quantity greater than one and a decimal unit price.

### Task 4: Display and Verify the Receipt

Your program must:

- **4.1.** Display the item name, quantity, unit price, and subtotal under a clear heading.
- **4.2.** Use `fixed` and `setprecision(2)` for the two monetary values.
- **4.3.** Use `setw` to create readable columns or aligned labels.
- **4.4.** Compile and run the program successfully, then add a sample run at the bottom of the source file inside a block comment.

## Sample Interaction

```text
MINI RECEIPT

Enter the item name: Spiral Notebook Pack
Enter the quantity: 3
Enter the unit price: 4.75

ITEM                 QUANTITY       UNIT PRICE       SUBTOTAL
Spiral Notebook Pack        3            $4.75         $14.25
```

The exact spacing may differ, but the labels and values must be easy to read.

## Completion and Submission

Submit one source file through Canvas. See the syllabus for submission and late-policy details. Include the sample run at the bottom of that same source file inside a block comment.

```text
Working source: LastName_EarlyCodingCheck.cpp
Submitted file: LastName_EarlyCodingCheck.txt
```

## Completion Checklist

- The program compiles and runs without errors.
- A multiword item name is read with `getline()`.
- Quantity and unit price are read with `cin`.
- The subtotal is calculated from the entered values.
- Monetary values display exactly two decimal places.
- Output uses readable alignment.
- The source file contains the required header and sample-run block comment.
