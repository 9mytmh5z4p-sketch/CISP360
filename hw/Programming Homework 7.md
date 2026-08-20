# Homework Assignment 7: Personalized C++ Program with Functions, References, Menus, and Decisions
## Assignment Overview

For Homework Assignment 7, you will create a complete C++ program based on a creative theme of
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
## Task 1: Use Pointer Variables, Addresses, and Dereferencing
Your program must:

- **1.**1. Declare a theme-related variable and initialize it with a value.
- **1.**2. Declare a pointer of the matching type and initialize it with nullptr.
- **1.**3. Assign the variable’s address to the pointer using the address operator (&).
- **1.**4. Display both the variable’s value and its memory address with descriptive labels.
- **1.**5. Modify the variable through the pointer using the dereference operator (*), then display the
modified value.
## Task 2: Use Pointers as Function Parameters

Your program must:

- **2.**1. Write a function that receives a pointer parameter and one additional parameter.
- **2.**2. Include the function prototype above main() and define the function below main().
- **2.**3. Pass the address of a variable from main() when calling the function.
- **2.**4. Inside the function, check that the pointer is not nullptr before dereferencing it.
- **2.**5. Modify the caller’s variable through the pointer, then display the updated value in main().
## Task 3: Dynamically Allocate and Release a Scalar

Variable
Your program must:

- **3.**1. Declare a pointer for one theme-related scalar variable, such as an int, double, or char.
- **3.**2. Use scalar new—not new[]—to dynamically allocate memory for that variable.
- **3.**3. Store a validated user-entered value in the allocated scalar memory through the pointer.
- **3.**4. Check that the pointer is not nullptr, then dereference it to display the stored value.
- **3.**5. Release the scalar memory with delete—not delete[]—and immediately set the pointer to
nullptr.
## Task 4: Create and Resize a Dynamic Array

Your program must:

- **4.**1. Declare a pointer and an integer size variable, then use new[] to allocate a theme-related
dynamic array.
- **4.**2. Store values in every array element and use a loop to display the initial array.
- **4.**3. Obtain a validated new size, allocate a temporary dynamic array of that size, and initialize any
newly added elements.
- **4.**4. Copy the retained elements into the temporary array, then release the original array with
delete[].
- **4.**5. Assign the temporary array’s address to the original pointer, update the size variable, display the
resized array, and release the final array with delete[] before the program ends.
## Task 5: Validate and Recover from Invalid Input

Your program must:

- **5.**1. Prompt the user for at least one numeric value used by the program.
- **5.**2. Place the input operation inside a loop and use cin.fail() to detect a type mismatch.
- **5.**3. After failed input, call cin.clear() to restore the input stream.
- **5.**4. Remove the invalid input with cin.ignore(numeric_limits<streamsize>::max(),
'\n') and display a specific error message.
- **5.**5. Reject numeric values outside a stated valid range and repeat the prompt until the user enters a
valid value.
## Task 6: Organize the Program with Functions and References
Your program must:

- **6.**1. Create and call at least five programmer-defined functions, including the pointer-parameter
function required by Task 2.
- **6.**2. Place a prototype for every programmer-defined function above main() and every function
definition below main().
- **6.**3. Include and call at least one void function that performs a theme-related action or displays
information.
- **6.**4. Include and call at least one function that returns a value, then store its returned value in a
named variable.
- **6.**5. Include and call at least one function with a non-const reference parameter that intentionally
modifies a variable belonging to the calling function.
## Task 7: Build a Repeating Menu with Decisions

Your program must:

- **7.**1. Use a do-while loop to repeatedly display a menu with at least three theme-related action
choices and a separate quit choice.
- **7.**2. Store the validated menu choice in an integer variable and process it with a switch statement.
- **7.**3. Include a case for every action, a quit case, a default case for invalid choices, and the
necessary break statements.
- **7.**4. Within one menu action, use a nested if statement to make two dependent decisions.
- **7.**5. Within a different menu action, use the conditional operator (? :) and store its result in a named
variable before displaying or using it.
## Task 8: Process Data with Loops and a One-Dimensional Vector
Your program must:

- **8.**1. Declare a one-dimensional vector containing values meaningfully connected to the program’s
theme.
- **8.**2. Store at least five validated, user-entered values in the vector using push_back().
- **8.**3. Use a range-based for loop to display every value stored in the vector.
- **8.**4. Use an index-based for loop and .at() for an operation in which each element’s position
matters.
- **8.**5. Use a loop to calculate and display at least two labeled results from the vector, such as its total,
average, highest value, lowest value, or qualifying-value count.
## Task 9: Process a Two-Dimensional Vector with Nested Loops
Your program must:

- **9.**1. Declare and use a two-dimensional vector with at least two rows and three columns of theme-
related data.
- **9.**2. Store a value in every row and column of the vector.
- **9.**3. Use nested loops and .at() to visit and display every element in the vector.
- **9.**4. Use nested loops to calculate and display a labeled total for every row.
- **9.**5. Use nested loops to calculate and display a labeled total for every column.
## Task 10: Create a Text-Based Bar Graph

Your program must:

- **10.**1. Create a horizontal bar graph containing at least three theme-related categories.
- **10.**2. Use nonnegative numeric values stored or calculated elsewhere in the program as the graph’s
data.
- **10.**3. Use an outer loop to process and display every category in the graph.
- **10.**4. Use an inner loop to print a repeated character, such as * or #, to construct each category’s
bar.
- **10.**5. Display a graph title, a label and numeric value for every category, and a statement explaining
how many units each printed character represents.
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
