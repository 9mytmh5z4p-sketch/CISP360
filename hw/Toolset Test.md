# Toolset Test: Diagnose and Repair

> **Draft assignment** · Due date listed in the syllabus · Estimated time: 30–45 minutes · Individual work

## Assignment Overview

This assignment confirms that your C++ editor, compiler, and Canvas submission workflow are ready for the semester. You will type or copy a short starter program, use compiler messages to diagnose its errors, correct the program, personalize its hard-coded output, and verify that the finished program compiles and runs.

This assignment does not use keyboard input. Your name and course selection or section must be written directly in the program.

## Learning Objectives

After completing this assignment, you should be able to:

- Open, edit, save, compile, and run a C++ source file.
- Recognize the required top matter and `main()` structure of a basic C++ program.
- Use compiler messages to locate and repair simple syntax errors.
- Display hard-coded text with `cout`.
- Confirm that program output matches the source code.

## Academic Integrity and AI Use

Use your compiler messages, lecture examples, and course notes to complete the repair. AI tools may explain the general meaning of a compiler message, but they may not provide the corrected starter program or write the repair log for you.

## Starter Program

Type the starter program into a new source file or copy it from this assignment sheet. It contains seven intentional errors. Save the file as `LastName_ToolsetTest.cpp` before you begin making repairs.

```cpp
include <iostream>
using namespace std

int Main()
{
    cout < "TOOLSET TEST" << endl
    cout << "Student: YOUR NAME" << end1;
    cout << "Course/Section: YOUR COURSE OR SECTION" << endl;
    cout << "Status: Toolset working!" << endl;
    return "0";
}
```

> Compiler messages sometimes describe the location where the compiler became confused rather than the exact location where the mistake began. Correct one issue at a time and compile again.

## Technical Requirements: 4 Required Tasks

Your program must complete all four tasks below.

### Task 1: Prepare the Starter Program

Your program must:

- **1.1.** Type the starter program into a new source file or copy it from this assignment sheet into your C++ editor.
- **1.2.** Save the file as `LastName_ToolsetTest.cpp`, replacing `LastName` with your last name.
- **1.3.** Add a block-comment source file header containing your full name, the date, the assignment name, and a one-sentence program description.
- **1.4.** Keep the program limited to the concepts shown in the starter file. Do not add keyboard input, calculations, decisions, loops, or additional functions.

### Task 2: Diagnose and Repair the Program

Your program must:

- **2.1.** Compile the original starter program once so you can observe the compiler messages before making corrections; after it becomes executable, run it to compare its output with the intended result.
- **2.2.** Locate and correct all seven intentional errors.
- **2.3.** Use a valid include directive, namespace statement, `main()` definition, output statements, and return statement.
- **2.4.** Preserve the intended four-line output while correcting the program.
- **2.5.** Compile again after each repair or small group of repairs until the compiler reports no errors.

### Task 3: Personalize the Hard-Coded Output

Your program must:

- **3.1.** Replace `YOUR NAME` with your first and last name.
- **3.2.** Replace `YOUR COURSE OR SECTION` with your course selection or section.
- **3.3.** Place both values directly inside string literals in the source code.
- **3.4.** Do not use `cin`, `getline`, or any other keyboard-input operation.
- **3.5.** Remove all placeholder text before submitting the program.

The finished output should follow this pattern:

```text
TOOLSET TEST
Student: Jordan Lee
Course/Section: Section 12345
Status: Toolset working!
```

Use your own name and actual course selection or section. The sample information above is only an example.

### Task 4: Verify and Document the Repairs

You must:

- **4.1.** Compile and run the corrected program successfully.
- **4.2.** Confirm that the displayed name and course or section exactly match the values in your source code.
- **4.3.** At the bottom of the same source file, add a block comment titled `Repair Log`.
- **4.4.** Inside the block comment, number the seven repairs and briefly identify the original problem, the compiler message or symptom that helped you find it, and the correction you made.
- **4.5.** Open the completed source file after saving it to confirm that the program and repair log are readable and complete.

Use this structure at the bottom of your source file:

```cpp
/*
 * Repair Log
 *
 * 1. Original problem: ...
 *    Compiler message or symptom: ...
 *    Correction: ...
 *
 * 2. Original problem: ...
 *    Compiler message or symptom: ...
 *    Correction: ...
 *
 * Continue through repair 7.
 */
```

## Submission Requirements

Submit one file through Canvas. The file must contain your corrected program, successful final source code, and the seven-item Repair Log block comment.

- `LastName_ToolsetTest.txt` — your corrected source file, renamed from `.cpp` to `.txt`, with the Repair Log block comment included at the bottom

```text
Working source: LastName_ToolsetTest.cpp
Submitted source: LastName_ToolsetTest.txt
```

The submitted `.txt` file is still your source code; renaming it only follows the course submission workflow.

## Grading Checklist: 20 Points

- Program compiles and runs: **5 points**
- Required first-program structure is correct: **4 points**
- Name and course or section are hard-coded and clearly labeled: **4 points**
- Program produces the intended output: **3 points**
- Repair Log accurately explains all seven repairs: **3 points**
- The single file is correctly named and submitted: **1 point**

## Final Check

Before submitting, compile the working `.cpp` file one final time. Then verify that the single uploaded `.txt` file contains your corrected source code and complete Repair Log block comment.
