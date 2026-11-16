# CISP 360 — Programming Style and Software Design

**Sean Parent — Expressing Intent Through Abstraction**

**Name:** _________________________ **Date:** _______________

## Introduction

Two programs can produce identical results while using different approaches to solve the same problem.

In this activity, you will examine two C++ programs, investigate a standard library function, and compare the design decisions reflected in each implementation.

Our focus is on an important distinction in software design: the difference between **how a program accomplishes a task** and **what the programmer intends to accomplish**.

## Part 1 — Examine the Programs

Both programs examine eight student examination scores and count the number of students who received a passing score of 70 or higher.

### Program 1

```cpp
// program1.cpp
#include <iostream>
using namespace std;

int main()
{
    int scores[] = {85, 62, 91, 74, 58, 100, 77, 69};
    int passing = 0;

    for (int i = 0; i < 8; i++)
    {
        if (scores[i] >= 70)
        {
            passing++;
        }
    }

    cout << "Passing students: " << passing << endl;

    return 0;
}
```

### Program 2

```cpp
// program2.cpp
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

bool isPassing(int score)
{
    return score >= 70;
}

int main()
{
    int scores[] = {85, 62, 91, 74, 58, 100, 77, 69};

    int passing = count_if(
        begin(scores),
        end(scores),
        isPassing
    );

    cout << "Passing students: " << passing << endl;

    return 0;
}
```

## Part 2 — Investigation and Analysis

### Question 1 — Investigating count_if()

Program 2 uses the C++ standard library function `count_if()`.

Research this function using the following reference:

https://en.cppreference.com/w/cpp/algorithm/count

Explain what `count_if()` does. In your explanation, identify the purpose of each of its three arguments in Program 2.

### Question 2 — Predicting Program Behavior

Without compiling or executing either program, predict the output of each.

Do the programs produce the same results? Explain your reasoning.

### Question 3 — Understanding Program 1

Explain how Program 1 calculates the number of passing students.

Your explanation should address the roles of the array, loop, index variable, conditional expression, and counter.

### Question 4 — Understanding Program 2

Explain how Program 2 calculates the number of passing students.

What role does the `isPassing()` function serve, and how does `count_if()` use it?

### Question 5 — Mechanism Versus Intent

Compare the two implementations.

What operations are explicitly performed in Program 1 that are not explicitly written in Program 2?

How does Program 2 communicate the programmer's intention differently?

### Question 6 — Understanding Both Approaches

If Program 2 expresses the calculation more directly, why is it still important for a C++ programmer to understand the implementation in Program 1?

### Question 7 — Making a Design Decision

Suppose you are developing a larger application that needs to count values satisfying different conditions.

Which approach would you prefer, and why?

Identify at least one advantage and one potential disadvantage of your preferred approach.

## Part 3 — Class Discussion

Be prepared to discuss the following question:

**Does good software design require programmers to understand how an operation works, to recognize when an existing abstraction should be used, or both?**

Support your position using specific examples from the two programs.