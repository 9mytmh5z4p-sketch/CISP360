# Homework Assignment 2: Personalized C++ Program with Vectors and Functions

## Assignment Overview

For Homework Assignment 2, you will create a complete C++ program based on a creative theme of your choice. Your program should collect user input, use a vector, process values with functions, and display clear, logically correct results.

Everyone must meet the same technical requirements, but your theme, greeting, prompts, variable names, function names, calculations, and output wording should be personalized. This helps you practice the required C++ concepts while making your program distinct from your classmates’ work.

Your program must compile, run, and produce output that makes sense for your chosen theme.

## Academic Integrity and AI Use

You may use AI tools to help explain concepts, review error messages, or understand lecture material. You may not use AI to write your program code for you.

Your submitted work should reflect your own thinking, theme, structure, variable names, calculations, functions, and output design. Personalized programs help reduce plagiarism similarity scores. The target plagiarism score is under 50%.

## Required Source File Header

Your program must begin with this source file header in a block comment:

```cpp
/* * Student Name: [Student's Full Name] * Assignment: Homework Assignment 2 * Program Description: [2-3 sentence description of what your program does] */
```

## Program Greeting

At the beginning of main(), call a distinct ProgramGreeting function. The greeting must display your name, your program title or theme, a brief explanation of what the program does, and personalized wording connected to your chosen theme.

```cpp
================================ Welcome to [Program Name] By: [Student Name] ================================ This program [brief description of what it does].
```

## Technical Requirements: 10 Required Tasks

Your program must complete all 10 tasks below.

## Task 1: Create an IPO Model and Execution Trace Model

Your program must:

- 1.1.Before beginning to code, plan the program with an IPO Model and an Execution Trace Model.
- 1.2.Include both completed models at the bottom of the source file inside block comments.
- 1.3.In the IPO Model, identify the input: data entered by the user.
- 1.4.In the IPO Model, identify the process: calculations, vector operations, and function calls performed by the program.
- 1.5.In the IPO Model, identify the output: information displayed to the user.
- 1.6.In the Execution Trace Model, show specific example input values.
- 1.7.Show important variable changes.
- 1.8.Show at least one vector change, such as a value being added with push_back().
- 1.9.Show at least one function call, including its argument values and its returned value or displayed action.
- 1.10.Show the expected output for the sample run.
## IPO Model Format

```cpp
/* * IPO Model * * Input: * - ... * * Process: * - ... * * Output: * - ... */
```

## Execution Trace Model Format

```cpp
/* * Execution Trace Model * * Sample Input: * - ... * * Variable and Vector Changes: * - ... * * Function Calls: * - ... * * Expected Output: * - ... */
```

## Task 2: Include a Source File Header and Program Greeting Function

Your program must:

- 2.1.Place the required source file header at the very top of the .cpp file inside a block comment.
- 2.2.Complete all required header fields: student name, assignment name, and a two- to three-sentence program description.
- 2.3.At the beginning of main(), call a distinct ProgramGreeting function.
- 2.4.Define ProgramGreeting as a void function because its job is to display information rather than calculate and return a value.
- 2.5.Display the student’s name, program title or theme, a brief explanation of what the program does, and personalized wording connected to the chosen theme.
- 2.6.Place function prototypes above main().
- 2.7.Place function definitions below main().
## Task 3: Use Arithmetic and static_cast

Your program must:

- 3.1.Perform at least two meaningful calculations using user input.
- 3.2.Include at least one calculation for which a decimal answer is needed.
- 3.3.Use static_cast to prevent an incorrect integer-division result.
- 3.4.Store at least one calculated result in a named variable.
- 3.5.Use at least one named constant for a value that should not change.
- 3.6.Make the calculations fit the program’s theme; do not add disconnected arithmetic merely to satisfy a requirement.
## Task 4: Format Output Clearly

Your program must:

- 4.1.Display results in a clean, readable format.
- 4.2.Use fixed and setprecision for decimal output.
- 4.3.Use setw for spacing.
- 4.4.Include at least one formatted table or aligned list.
- 4.5.Use labels that clearly describe the displayed values.
- 4.6.Make the output look intentional and match the program’s theme.
## Task 5: Use Advanced Input Correctly

Your program must:

- 5.1.Collect both text input and numeric input from the user.
- 5.2.Use getline() for at least one full-line text value, such as a mission name, recipe title, route name, team name, or character name.
- 5.3.Use cin >> for numeric values.
- 5.4.Correctly handle the leftover newline when switching from cin >> to getline().
- 5.5.Include at least one basic input-validation step for a numeric value.
- 5.6.Use theme-appropriate prompts that clearly tell the user what to enter.
## Task 6: Use Random Numbers

Your program must:

- 6.1.Use random numbers in a way that fits the program’s theme.
- 6.2.Seed the random-number generator once near the beginning of the program.
- 6.3.Generate at least one random number within a clear range.
- 6.4.Use the random value in a meaningful calculation, decision, or output message.
- 6.5.Make the random-number range understandable from the code or output.
For example, a travel planner might generate a random weather delay, or a game stats program might generate a bonus event.

## Task 7: Use a Vector

Your program must:

- 7.1.Include the correct library for vectors.
- 7.2.Declare at least one vector with an appropriate data type.
- 7.3.Add at least three values to the vector using push_back().
- 7.4.Use .size() somewhere meaningful.
- 7.5.Use pop_back() only if removing the final element fits the program’s logic.
The vector might store fuel readings, scores, prices, ingredient amounts, energy readings, travel distances, or item weights.

## Task 8: Use a Range-Based Loop

Your program must:

- 8.1.Use a range-based for loop to process every value in the vector.
- 8.2.Use the loop for a meaningful purpose, such as calculating a total, finding an average, counting values, or displaying every value.
- 8.3.Use a clear loop-variable name.
- 8.4.Avoid changing the vector inside the range-based loop.
- 8.5.Use the range-based loop in a situation where every value in the vector matters.
## Task 9: Use Function-Centered Architecture

Your program must:

- 9.1.Organize the program around functions instead of placing all logic inside main().
- 9.2.Include function prototypes above main().
- 9.3.Define functions below main().
- 9.4.Keep main() as the coordinator of the program.
- 9.5.Create at least four functions total, including ProgramGreeting.
- 9.6.Avoid nested function definitions.
- 9.7.Avoid global variables.
- 9.8.Give each function one clear job and a name that describes what it does or calculates.
## Task 10: Pass Data To and From Functions

Your program must:

- 10.1.Include at least one function that takes one or more parameters.
- 10.2.Include at least one function that returns a calculated value.
- 10.3.Include at least one void function used for display or another action-only task.
- 10.4.Include at least one function that receives a vector as a parameter.
- 10.5.Store at least one returned value in a variable in main().
- 10.6.Give each function a clear contract: it should receive the data it needs through parameters and return or display exactly what its job requires.
## Theme Selection Guidance

Choose a theme that gives you natural reasons to collect several values, store repeated data in a vector, call functions, and display results.

Strong themes usually have a clear scenario, a personalized title, one full-line text value, several numeric values, a reason to process a collection, and a result that would be useful or interesting.

Good theme examples:

- Space Mission Calculator: mission name, supply weights, fuel readings, random launch delay, total payload estimate
- Recipe Nutrition Tracker: recipe name, ingredient calorie values, servings, total calories, calories per serving
- Road Trip Planner: trip name, distances for each travel leg, fuel efficiency, total miles, estimated fuel cost
- Fantasy Character Stats: character name, item weights, ability scores, random bonus, total load or rating
- Home Energy Calculator: household name, appliance usage values, random peak-rate event, total and average usage
- Event Budget Planner: event name, category costs, guest count, total cost, cost per guest
Avoid themes that are too simple. A program that only asks for two numbers and adds them is not enough for this assignment.

## Program Structure Guidelines

- Source file header
- Include directives
- using namespace std;
- Function prototypes
- int main()
- Program greeting function call
- Main input, calculation, function-call, and output coordination
- return 0;
- Function definitions
- IPO Model block comment
- Execution Trace Model block comment
Use comments to label major sections, but do not comment every single line. Comments should help the reader understand the purpose of each section.

## Submission Requirements

Submit your program through Canvas. See the syllabus for submission and late-policy details.

See the syllabus for the late policy.

Before submitting:

- Make sure your program compiles without errors.
- Run your program using realistic test input.
- Check that the output is logically correct for your theme.
- Save your completed source file.
- Rename the file from .cpp to .txt.
- Upload the .txt file to Canvas.
```cpp
Original file: homework2.cpp Submitted file: homework2.txt
```

Your instructor will download submissions, compile and execute them, and append program output to the end of the source file as a comment.

## Common Mistakes to Avoid

- Forgetting the source file header
- Writing the greeting directly in main() instead of calling a ProgramGreeting function
- Forgetting function prototypes above main()
- Defining a function inside another function
- Placing most of the program logic inside main()
- Using global variables instead of parameters and return values
- Mixing cin >> and getline() without handling the leftover newline
- Forgetting to seed random numbers only once
- Forgetting #include <vector>
- Expecting a pass-by-value vector parameter to change the original vector
- Using integer division when a decimal answer is needed
- Putting the IPO Model or Execution Trace Model outside block comments
- Submitting the .cpp file instead of the required .txt file
- Letting AI write the code instead of writing it yourself
## Tips for Success

Start with your theme first. Decide what your program is supposed to help someone calculate, estimate, track, or summarize.

Plan the vector next. If your theme does not naturally have at least three values that can go into a vector, adjust the theme before you start coding.

Build in small steps. Make the greeting work first, then collect input, then add the vector, then add one function at a time. Compile and run often.

Use realistic test values. If your result seems impossible for your theme, check your data types, arithmetic, division, vector contents, and function return values.

Make your program look like your work. Personalized names, prompts, labels, function names, and theme details will make your submission stronger and more original.
