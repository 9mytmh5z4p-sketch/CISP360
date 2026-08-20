# Homework Assignment 4: Personalized C++ Program with Functions, References, Menus, and Decisions
## Assignment Overview

For Homework Assignment 4, you will create a complete C++ program based on a creative theme of
your choice. Your program should collect user input, organize the program with functions, use
reference parameters where appropriate, display a menu, make decisions with conditional
statements, and produce clear, logically correct output.
Everyone must meet the same technical requirements, but your theme, greeting, prompts, variable
names, function names, calculations, menu options, and output wording should be personalized.
This helps you practice the required C++ concepts while making your program distinct from your
classmates’ work.
Your program must compile, run, and produce output that makes sense for your chosen theme.
## Academic Integrity and AI Use

You may use AI tools to help explain concepts, review error messages, or understand lecture
material. You may not use AI to write your program code for you. Your submitted work should reflect
your own thinking, theme, structure, variable names, calculations, functions, and output design.
Personalized programs help reduce plagiarism similarity scores. The target plagiarism score is under
50%.
## Common Program Standards (CPS)

Your program must meet the following standards in addition to the tasks assigned in this homework:
- **1.** Your program must compile in a linux environment with a compiler running C++17 or greater.
Onlinegdb is the only compiler I know of that does NOT meet this standard.
- **2.** Your program must produce logically consistent output. i.e. no logic errors.
- **3.** Your program must include a source file header. See earlier assignments for examples.
- **4.** Your program must include a program greeting. See earlier assignments for examples.
- **5.** You cannot use .h include files as they are for C, not C++.
- **6.** Functions must use function prototypes. Functions go below main().
- **7.** Your plagiarism score box cannot be red or darker.
- **8.** Global variables are not permitted unless they are constants.
## Technical Requirements: 10 Required Tasks

Your program must complete all 10 tasks below.
## Task 1: Use Arithmetic, Constants, and static_cast

Use arithmetic calculations from previous homework material.
Your program must:

- **1.**1. Declare and use at least one named constant with const.
- **1.**2. Collect at least two numeric values from the user.
- **1.**3. Perform at least two arithmetic calculations using the user’s input.
- **1.**4. Use static_cast in at least one calculation to avoid incorrect integer division.
- **1.**5. Store each calculated result in a named variable before displaying it.
The calculations should fit your theme. Do not add disconnected arithmetic just to check a box.
## Task 2: Use Formatted Output

Your program must:

- **2.**1. Use fixed and setprecision when displaying at least one decimal result.
- **2.**2. Use setw to align at least one table or report.
- **2.**3. Display at least one table with a visible top border, bottom border, left border, and right border.
- **2.**4. Display at least three labeled values inside the bordered table.
- **2.**5. Display at least one calculated result with a clear label and unit or category name.
## Task 3: Use Function-Centered Program Design

Organize your program around functions instead of placing all logic inside main().
Your program must:

- **3.**1. Create at least five programmer-defined functions.
- **3.**2. Include at least one void function.
- **3.**3. Include at least one function that receives two or more parameters.
- **3.**4. Include at least one function that returns a value.
- **3.**5. Include at least one static local variable inside a function.
## Task 4: Collect Full-Line Text and Recover From Input Problems
Your program must:

- **4.**1. Collect the user’s first and last name in one string variable using getline.
- **4.**2. Use the full name variable later in the program output.
- **4.**3. Use cin.ignore() before getline if a previous numeric input leaves a newline behind.
- **4.**4. Check cin.fail() after at least one input operation in the program.
- **4.**5. Recover from failed input by clearing the failed state and preventing the bad input from being
used.
## Task 5: Use Compound Conditions and Range Checking
Your program must:

- **5.**1. Collect at least one numeric value that has a valid minimum and maximum.
- **5.**2. Use a compound condition with && to check whether the value is inside the valid range.
- **5.**3. Use a compound condition with || to check whether the value is outside the valid range.
- **5.**4. Display one message when the value is valid and a different message when the value is invalid.
- **5.**5. Prevent an invalid value from being used in at least one calculation, menu action, or stored
result.
## Task 6: Use Nested if Statements and the Conditional Operator
Your program must:

- **6.**1. Include at least one nested if statement.
- **6.**2. Make the outer if statement check one condition and the inner if statement check a different
condition.
- **6.**3. Use the nested if statement to assign or display a category, status, recommendation, or
warning.
- **6.**4. Use the conditional operator (? :) at least once.
- **6.**5. Store the result of the conditional operator in a variable before displaying or using it.
## Task 7: Use a switch Statement

Your program must:

- **7.**1. Display at least one menu or category list with three or more numbered choices.
- **7.**2. Store the user’s choice in an integer variable.
- **7.**3. Use a switch statement to process the user’s choice.
- **7.**4. Include at least three case labels and one default label.
- **7.**5. Use break statements to prevent unintended fall-through.
## Task 8: Use Loops with a One-Dimensional Vector

Your program must:

- **8.**1. Use at least two different loop types from this list: while, do-while, for, or range-based for.
- **8.**2. Store at least three user-entered values in a one-dimensional vector using push_back.
- **8.**3. Use a loop to display every element stored in the one-dimensional vector.
- **8.**4. Use a loop to calculate one result from the one-dimensional vector, such as a total, average,
count, highest value, or lowest value.
- **8.**5. Display the calculated vector result with a label that explains what the result represents.
## Task 9: Use Nested Loops and a Multi-Dimensional Vector
Your program must:

- **9.**1. Declare and use at least one multi-dimensional vector.
- **9.**2. Store related values in the multi-dimensional vector.
- **9.**3. Use nested loops to visit each row and column of the multi-dimensional vector.
- **9.**4. Display the multi-dimensional vector data in a table, grid, chart, or report.
- **9.**5. Calculate at least one result from the multi-dimensional vector, such as a row total, column total,
average, highest value, or lowest value.
## Task 10: Use Loops to Build a Menu-Driven Report or Text-Based Display
Your program must:

- **10.**1. Display a menu option that generates a report, chart, graph, grid, or other text-based display.
- **10.**2. Use a loop to build or print the report, chart, graph, grid, or text-based display.
- **10.**3. Use setw or another formatting tool to align at least two columns in the display.
- **10.**4. Include a visible label, heading, or title for the display.
- **10.**5. Use at least two rows of output in the display.
## Submission Requirements

Submit your completed program to Canvas. See the syllabus for submission and late-policy details.
Before uploading:
- **1.** Make sure your program compiles.
- **2.** Run your program and confirm the output is logically correct.
- **3.** Rename your source file from .cpp to .txt.
- **4.** Upload the .txt file to Canvas.
Your instructor will download submissions and compile/execute them. Program output may be
appended to the end of your submitted source file as a comment. Programs that do not compile will
receive significant point deductions.
## Late Policy

See the syllabus for the late policy.

## Final Reminder

This assignment is designed to give you structure and choice at the same time. The technical
requirements are the same for everyone, but the theme and design should be yours.
Use AI only for support with concepts, error messages, or reviewing lecture ideas. Do not use AI to
write your program code.
