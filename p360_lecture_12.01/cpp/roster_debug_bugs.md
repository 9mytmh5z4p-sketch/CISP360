# roster_debug.cpp — Bug Key

Lecture 12.01: Arrays with Functions, Array Algorithms, and Parallel Arrays

Student file: `roster_debug.cpp` · Fixed version: `roster_debug_key.cpp` (each fix is marked with a `FIX n` comment)

Line numbers refer to `roster_debug.cpp`, the buggy student version.

| # | Topic | Location | Bug | Symptom | Fix |
|---|---|---|---|---|---|
| 1 | Arrays with functions: array decay | `averageScore()`, lines 115 and 120 | Counts the elements with `sizeof(scores) / sizeof(scores[0])` and divides the total by that count. Inside a function, `scores` is a pointer, so the count is 8 / 4 = 2, not 5. | Class average prints **205.0** instead of 82.0. | Delete the `count` line and divide by the `size` parameter: `return static_cast<double>(total) / size;` |
| 2 | Array algorithms: linear search | `findName()`, lines 161–162 | `else { return -1; }` inside the loop ends the search after checking only the first element. | Only **Ada** is found; every other name, such as Grace, reports "not found." | Remove the `else` branch. Return `-1` only after the loop has checked every element (line 165 already does this). |
| 3 | Parallel arrays: moving one record | `sortByScore()`, line 173 | Swaps `scores[i]` and `scores[i + 1]` but never swaps the matching names. | The ranking lists scores in descending order beside the **wrong names**, e.g. "Ada 100". | Add `swap(names[i], names[i + 1]);` directly after the scores swap so the whole record moves together. |
| 4 | Array algorithms: min/max seeding | `findLowestIndex()`, lines 136 and 139 | Seeds the tracker with `lowest = 0`. No score is below 0, so the tracker never updates and the index stays 0. | Lowest score prints **Ada 91** instead of Barbara 62. | Seed from the first element: track `lowestIndex = 0`, loop from `i = 1`, and compare `scores[i] < scores[lowestIndex]`. |
| 5 | Arrays with functions: arrays are not copied | `previewCurve()`, prototype line 64, definition lines 148 and 150 | `scores[i] += bonus;` writes the curve into the caller's array. The parameter is not `const`, so the compiler allows it. | The preview looks correct, but every later result is **5 points too high**: a lookup of Ada reports 96, and the ranking tops out at 100. | Print `scores[i] + bonus` without assigning it, and declare the parameter `const int scores[]` in both the prototype and the definition so the compiler blocks any write. |

## Notes for the instructor

- **Bug interactions.** Bugs 3 and 5 both show up in the ranking: bug 5 changes the scores, and bug 3 separates them from their names. With both present the ranking reads Ada 100, Linus 96, Grace 89, Alan 83, Barbara 67. Bug 5 also affects the lookup (Ada scored 96).
- **Where each bug appears.** Bugs 1 and 4 appear in the first few lines of output. Bug 2 appears only when students look up a name other than Ada, which rewards testing more than one input.
- **Compiler warnings.** A default `g++` build prints one warning, for bug 1: "'sizeof' on array function parameter 'scores' will return size of 'const int*'". With `-Wextra`, g++ also warns that `names` is unused in `sortByScore()`, which points directly at bug 3; leave `-Wextra` off if you don't want that hint.
- **Correct output.** The expected output is in the header comment of both files.
