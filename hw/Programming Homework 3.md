# Homework Assignment 3: Personalized C++ Program with Functions, References, Menus, and Decisions

## Assignment Overview

For Homework Assignment 3, you will create a complete C++ program based on a creative theme of your choice. Your program should collect user input, organize the program with functions, use reference parameters where appropriate, display a menu, make decisions with conditional statements, and produce clear, logically correct output.

Everyone must meet the same technical requirements, but your theme, greeting, prompts, variable names, function names, calculations, menu options, and output wording should be personalized. This helps you practice the required C++ concepts while making your program distinct from your classmates’ work.

Your program must compile, run, and produce output that makes sense for your chosen theme.

## Academic Integrity and AI Use

You may use AI tools to help explain concepts, review error messages, or understand lecture material. You may not use AI to write your program code for you.

Your submitted work should reflect your own thinking, theme, structure, variable names, calculations, functions, and output design. Personalized programs help reduce plagiarism similarity scores. The target plagiarism score is under 50%.

## Required Source File Header

Your program must begin with this source file header in a block comment:

```cpp
/* * Student Name: [Student's Full Name] * Assignment: Homework Assignment 3 * Program Description: [2-3 sentence description of what your program does] */
```

## Program Greeting

At the beginning of main(), your program must display a distinct Program Greeting section. The greeting must display your name, your program title or theme, a brief explanation of what the program does, and personalized wording connected to your chosen theme.

```cpp
================================ Welcome to [Program Name] By: [Student Name] ================================ This program [brief description of what it does].
```

## Technical Requirements: 10 Required Tasks

Your program must complete all 10 tasks below.

## Task 1: Use Arithmetic and static_cast

Your program must:

- 1.1.Perform at least two meaningful calculations using user input.
- 1.2.Include at least one calculation where a decimal answer is needed.
- 1.3.Use static_cast to prevent an incorrect integer-division result.
- 1.4.Store calculated results in named variables.
- 1.5.Use at least one named constant where the value should not change.
- 1.6.Ensure the calculations fit the program’s theme; do not add disconnected arithmetic solely to satisfy this task.
## Task 2: Format Output Clearly

Your program must:

- 2.1.Display results in a clean, readable format.
- 2.2.Use fixed and setprecision for decimal output.
- 2.3.Use setw for spacing.
- 2.4.Include at least one formatted table, report, or aligned list.
- 2.5.Use labels that clearly describe the displayed values.
- 2.6.Make the output look intentional and match the program’s theme.
## Task 3: Use Function-Centered Program Design

Your program must:

- 3.1.Include function prototypes above main().
- 3.2.Define functions below main().
- 3.3.Keep main() as the coordinator of the program instead of placing all program logic inside it.
- 3.4.Create at least five functions total, including the greeting function.
- 3.5.Give each function one clear job.
- 3.6.Avoid nested function definitions.
- 3.7.Avoid global variables.
- 3.8.Give functions names that describe what they do or calculate.
## Task 4: Use Parameters and Return Values

Your program must:

- 4.1.Include at least one function that takes one or more value parameters.
- 4.2.Include at least one function that returns a calculated value.
- 4.3.Include at least one void function used for display or another action-only task.
- 4.4.Store a returned value in a named variable in main().
- 4.5.Give each function a clear contract: it must receive the data it needs through parameters and return or display exactly what its job requires.
## Task 5: Use Reference Parameters

Your program must:

- 5.1.Include at least one function with one or more reference parameters.
- 5.2.Use a reference parameter to change a variable belonging to the calling function.
- 5.3.Make the purpose of the reference parameter clear through the function name or surrounding code.
Good uses might include updating a running total, adjusting a score, applying a discount, changing a status value, or collecting multiple related values through one function call.

## Task 6: Choose Appropriate Parameter Styles

Your program must:

- 6.1.Include at least one ordinary pass-by-value parameter for small input data.
- 6.2.Include at least one reference parameter used for intentional caller mutation.
- 6.3.Include at least one const reference parameter for read-only data that should not be copied unnecessarily.
- 6.4.Pass at least one vector to a function as a parameter.
- 6.5.Choose parameter styles that match the purpose of each function.
## Task 7: Use Function Overloading

Your program must:

- 7.1.Create at least two overloaded functions with the same name.
- 7.2.Make the overloaded functions differ by parameter type, parameter count, or both.
- 7.3.Use both overloaded versions in the program.
- 7.4.Make both overloads perform logically related operations connected to the program’s theme.
For example, a planner might calculate a cost using either one base value or a base value plus a multiplier. A game program might display a report using either a player name only or a player name plus score details.

## Task 8: Use Default Arguments

Your program must:

- 8.1.Declare at least one default argument in a function prototype.
- 8.2.Call that function at least twice: once using the default value and once by supplying a different value.
- 8.3.Use the default argument for a setting that naturally has a standard value.
- 8.4.Follow the right-to-left rule for default arguments.
Good examples include a default tax rate, bonus value, formatting width, difficulty level, service fee, or number of attempts.

## Task 9: Use a Menu with Conditional Logic

Your program must:

- 9.1.Display a menu with at least three meaningful choices.
- 9.2.Read the user’s menu choice.
- 9.3.Use conditional logic to respond to the choice.
- 9.4.Include at least one if statement.
- 9.5.Include at least one if/else statement or if/else if chain.
- 9.6.Use relational operators in the conditions.
- 9.7.Make the menu choices fit the program’s theme; do not use generic labels such as “Option 1” unless the displayed text explains the action.
## Task 10: Validate Input and Handle cin.fail()

Your program must:

- 10.1.Collect at least one numeric value from the user.
- 10.2.Use cin.fail() to check whether the input operation failed.
- 10.3.Clear the failed input state when needed.
- 10.4.Ignore invalid leftover input when needed.
- 10.5.Display a helpful message when invalid input is entered.
- 10.6.Use conditional logic to prevent invalid input from being used in calculations.
- 10.7.Demonstrate detection and recovery from at least one type of basic failed numeric input; comprehensive validation of every possible input is not required.
- 10.8.Document the handled failure type in a code comment.
## Theme Selection Guidance

Choose a theme that gives you natural reasons to collect values, use a menu, make decisions, call functions, and display results.

Strong themes usually have a clear scenario, a personalized title, one or more full-line text values, several numeric values, a reason to calculate totals, averages, ratings, costs, or statuses, a reason to update values through functions, a menu with meaningful choices, and a useful or interesting result.

Good theme examples:

- Space Mission Control: calculate fuel needs, adjust mission risk, choose a launch recommendation
- Recipe Cost Planner: calculate ingredient cost, servings, cost per serving, and budget status
- Road Trip Planner: calculate miles, fuel cost, travel time, and route recommendation
- Fantasy Character Manager: calculate stats, apply bonuses, update health or inventory values
- Home Energy Advisor: calculate usage, compare thresholds, and recommend savings actions
- Event Budget Assistant: calculate costs, guest estimates, fees, and budget warnings
- Pet Care Scheduler: calculate food needs, activity time, and care category recommendations
Avoid themes that are too simple. A program that only asks for two numbers and adds them is not enough for this assignment.

## Submission Requirements

Submit your completed program to Canvas. See the syllabus for submission and late-policy details.

See the syllabus for the late policy.

Before uploading:

- Make sure your program compiles.
- Run your program and confirm the output is logically correct.
- Rename your source file from .cpp to .txt.
- Upload the .txt file to Canvas.
Your instructor will download submissions and compile/execute them. Program output may be appended to the end of your submitted source file as a comment. Programs that do not compile will receive significant point deductions.

## Late Policy

See the syllabus for the late policy.

## Final Reminder

This assignment is designed to give you structure and choice at the same time. The technical requirements are the same for everyone, but the theme and design should be yours.

Use AI only for support with concepts, error messages, or reviewing lecture ideas. Do not use AI to write your program code.
