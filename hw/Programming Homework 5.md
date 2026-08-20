# Homework Assignment 5: Personalized C++ Program with Functions, References, Menus, and Decisions
## Assignment Overview

For Homework Assignment 5, you will create a complete C++ program based on a creative theme of
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
## Task 1: Use Increment, Decrement, and Compound Assignment
Your program must:

- **1.**1. Declare and initialize at least one integer counter used by the program.
- **1.**2. Use ++ to update a counter or loop-control variable.
- **1.**3. Use -- to reduce a different value, such as remaining attempts, available items, or time
remaining.
- **1.**4. Use += inside a loop to accumulate a numeric total.
- **1.**5. Use at least one additional compound-assignment operator (-=, *=, /=, or %=) in a theme-
related operation, then display the resulting value with a descriptive label.
## Task 2: Control Loop Execution with break and continue
Your program must:

- **2.**1. Use a loop to process a sequence of user-entered or stored values.
- **2.**2. Define one specific skip condition and use continue when that condition occurs.
- **2.**3. Ensure a skipped value is not included in the loop’s calculation or accepted-value count.
- **2.**4. Define one specific stopping condition and use break to exit the nearest loop when it occurs.
- **2.**5. After the loop, display the number of accepted values and skipped values with descriptive labels.
## Task 3: Detect and Recover from Stream Input Failure

Your program must:

- **3.**1. Prompt the user for at least one numeric value.
- **3.**2. Place the input operation in a loop and use cin.fail() to detect a type mismatch.
- **3.**3. Call cin.clear() after failed input to restore the input stream.
- **3.**4. Remove the invalid input using cin.ignore(numeric_limits<streamsize>::max(),
'\n').
- **3.**5. Display a specific error message and prompt again until valid numeric input is received; do not
use the value until it passes validation.
## Task 4: Use Assertions to Verify Program Assumptions

Your program must:

- **4.**1. Include the <cassert> library and use the assert macro.
- **4.**2. Include at least two separate assert statements.
- **4.**3. Use one assertion inside a programmer-defined function to check a precondition for that
function.
- **4.**4. Use a second assertion to check an internal program invariant, such as a valid index,
nonnegative calculated value, or expected vector size.
- **4.**5. Add a comment immediately before each assert statement identifying the assumption being
checked.
## Task 5: Apply the Gauntlet of Trust for Robust Input

Validation
Your program must:

- **5.**1. Use getline() inside a loop to collect one important program input as a complete line.
- **5.**2. Perform a presence check first and reject an empty response.
- **5.**3. Perform a shape check next to confirm that the response has the required form, such as the
expected length or number of characters.
- **5.**4. Perform a range-or-set check last to confirm that the response is within allowed limits or
matches an allowed choice.
- **5.**5. Display a specific error message for each failed check and repeat the prompt until the input
passes all three checks.
Hint: Apply the Gauntlet of Trust model from Lecture 09.01 by checking the input from broadest to
narrowest: presence, shape, then range or set.
## Task 6: Create Formatted Tables and Reports

Your program must:

- **6.**1. Include <iomanip> and use at least two output manipulators.
- **6.**2. Display a table or report with a visible top border, bottom border, left border, and right border.
- **6.**3. Include labeled column headings and at least three rows of data.
- **6.**4. Use setw to align at least two columns consistently.
- **6.**5. Use fixed and setprecision to display at least one calculated decimal result with a
descriptive label.
## Task 7: Organize the Program with Functions and References
Your program must:

- **7.**1. Create and call at least five programmer-defined functions.
- **7.**2. Include at least one void function that performs an action or displays information.
- **7.**3. Include at least one function that receives two or more parameters.
- **7.**4. Include at least one function that returns a value, and store the returned value in a named
variable.
- **7.**5. Include at least one non-const reference parameter that intentionally modifies a variable
belonging to the calling function.
## Task 8: Build a Menu with switch and Conditional Decisions
Your program must:

- **8.**1. Use a do-while loop to display a menu containing at least three action choices and a separate
quit choice.
- **8.**2. Store the user’s menu choice in an integer variable and process it with a switch statement.
- **8.**3. Include a case for each action, a quit case, a default case for invalid choices, and the
necessary break statements.
- **8.**4. Use a nested if statement within at least one menu action to make two dependent decisions.
- **8.**5. Use the conditional operator (? :) within a different menu action, storing its result in a variable
before displaying or using it.
## Task 9: Process a One-Dimensional Vector with Loops

Your program must:

- **9.**1. Declare a one-dimensional vector whose contents are meaningfully connected to the program’s
theme.
- **9.**2. Store at least five validated user-entered values in the vector using push_back.
- **9.**3. Use a range-based for loop to display every value stored in the vector.
- **9.**4. Use an index-based for loop for an operation in which the element’s position matters, and
access elements safely with .at().
- **9.**5. Use a loop to calculate and display at least one labeled result from the vector, such as a total,
average, count, highest value, or lowest value.
## Task 10: Process a Multi-Dimensional Vector with Nested Loops
Your program must:

- **10.**1. Declare and use a two-dimensional vector with at least two rows and three columns.
- **10.**2. Store related, theme-appropriate values in every row and column of the vector.
- **10.**3. Use nested loops to visit every element in the vector.
- **10.**4. Display the vector as a labeled grid, table, chart, or report with rows and columns.
- **10.**5. Use nested loops to calculate and display at least one labeled row total and one labeled
column total.
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
