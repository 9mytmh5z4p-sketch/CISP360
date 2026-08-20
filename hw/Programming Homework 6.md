# Homework Assignment 6: Personalized C++ Program with Files, Arrays, Menus, and Reports
## Assignment Overview

For Homework Assignment 6, you will create a complete C++ program based on a creative theme of
your choice. Your program should save and load data with a file, process fixed-size and
multidimensional arrays, organize the program with functions, display a menu, validate input, use
loops and decisions, process a vector, and produce a formatted report.
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
## Task 1: Save and Load Program Data with Sequential File I/O
Your program must:

- **1.**1. Include <fstream> and create a theme-related text file using an ofstream.
- **1.**2. Check that the output file opened successfully before writing to it; display an error message if it
did not open.
- **1.**3. Write at least five theme-related values from the program to the file, then close the output file.
- **1.**4. Open the same file with an ifstream and read every stored value using a loop whose condition
is the input operation.
- **1.**5. Display each value read from the file and a labeled count of the values successfully loaded.
## Task 2: Store and Process Data in a Fixed-Size Array

Your program must:

- **2.**1. Declare a named constant for the array capacity and use it to declare a fixed-size array
containing at least five elements.
- **2.**2. Store validated, theme-related user input in every array element using an index-based loop.
- **2.**3. Use a separate range-based for loop to display every value stored in the array.
- **2.**4. Use sizeof(array) / sizeof(array[0]) in the array’s declaring scope to calculate and
display its element count.
- **2.**5. Use a loop to calculate and display a labeled total or average from the array values.
## Task 3: Process Arrays with Programmer-Defined Functions
Your program must:

- **3.**1. Create and call at least three programmer-defined functions that receive an array and its logical
size as parameters.
- **3.**2. Use a const array parameter in one function that calculates and returns a total, average,
minimum, or maximum.
- **3.**3. Create a linear-search function that returns the index of a requested value or -1 when the value
is not found.
- **3.**4. Create one function that modifies the caller’s array, such as sorting its values or applying a
theme-related adjustment to every element.
- **3.**5. Store each returned result in a named variable and display labeled output demonstrating the
calculation, search, and array modification.
## Task 4: Build and Process a Multidimensional Array

Your program must:

- **4.**1. Declare named constants for the row and column counts, then use them to create a two-
dimensional array with at least two rows and three columns.
- **4.**2. Store theme-related values in every element of the array through initialization or validated user
input.
- **4.**3. Use nested loops with separate row and column control variables to visit every array element.
- **4.**4. Display the array as a labeled grid or table, with the outer loop processing rows and the inner
loop processing columns.
- **4.**5. Use nested loops to calculate and display at least one labeled row total and one labeled column
total.
## Task 5: Create a Menu-Driven Program with Decisions

Your program must:

- **5.**1. Use a do-while loop to repeatedly display a menu containing at least three action choices and
one separate quit choice.
- **5.**2. Store the user’s menu choice in a variable and process it with a switch statement.
- **5.**3. Include a case for every action, a quit case, a default case for invalid choices, and the
necessary break statements.
- **5.**4. Use a nested if statement within one menu action to make two dependent decisions.
- **5.**5. Use the conditional operator (? :) within a different menu action, storing its result in a named
variable before displaying or using it.
## Task 6: Validate User Input from Broadest to Narrowest

Your program must:

- **6.**1. Use getline() inside a loop to collect one important theme-related input as a complete line.
- **6.**2. Perform a presence check first and reject an empty response with a specific error message.
- **6.**3. Perform a shape check next, such as checking the response’s length or required number of
characters, and display a different error message if it fails.
- **6.**4. Perform a range-or-set check last to confirm that the response is within defined limits or matches
an allowed choice, with a specific error message for failure.
- **6.**5. Repeat the prompt until the input passes all three checks, then use the validated input in the
program.
## Task 7: Use Loops with Counters, Accumulators,

break, and continue
Your program must:

- **7.**1. Use a loop to process a sequence of user-entered or stored numeric values.
- **7.**2. Define a specific skip condition and use continue so the skipped value is excluded from all
calculations and accepted-value counts.
- **7.**3. Define a specific stopping condition and use break to exit the loop when that condition occurs.
- **7.**4. Use ++ to update a counter and += to maintain a running total inside the loop.
- **7.**5. After the loop, display labeled values for the accepted-value count, skipped-value count, and
accumulated total.
## Task 8: Organize the Program with Functions and

Reference Parameters
Your program must:

- **8.**1. Create and call at least five programmer-defined functions in the complete program, including
the array-processing functions required by Task 3.
- **8.**2. Place a prototype for every programmer-defined function above main() and place every
function definition below main().
- **8.**3. Include at least one void function that performs a theme-related action or displays information.
- **8.**4. Include at least one function that receives two or more parameters and one function that returns
a value stored in a named variable.
- **8.**5. Include at least one non-const reference parameter that intentionally modifies a variable
belonging to the calling function, then display the variable before and after the function call.
## Task 9: Store and Process Data in a One-Dimensional Vector
Your program must:

- **9.**1. Declare a one-dimensional vector whose contents are meaningfully connected to the program’s
theme.
- **9.**2. Store at least five validated user-entered values in the vector using push_back.
- **9.**3. Use a range-based for loop to display every value stored in the vector.
- **9.**4. Use an index-based for loop for an operation in which the element’s position matters, and
access elements safely with .at().
- **9.**5. Apply at least one appropriate STL tool—such as sort, find, min_element, max_element,
or accumulate—and display its labeled result.
## Task 10: Display a Formatted Data Report

Your program must:

- **10.**1. Include <iomanip> and use at least two output manipulators in the report.
- **10.**2. Display a table or report with visible top, bottom, left, and right borders.
- **10.**3. Include labeled column headings and at least three rows of theme-related data.
- **10.**4. Use setw to align at least two columns consistently throughout the report.
- **10.**5. Use fixed and setprecision to display at least one calculated decimal result with a
descriptive label.
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
