// answer0802.md
Small correction: the code I provided contains four deliberate errors. The multiplication-table loop was accidentally correct. To make it a five-error exercise, change its increment from `column++` to `row++`.

### Instructor’s Key

| # | Location | Error | Student Symptom | Correction |
|---|---|---|---|---|
| 1 | Constant declaration | Missing semicolon after `MAX_SCORES = 6` | Compilation failure | Add `;` |
| 2 | Menu function | Prototype says `displayMenu`, definition says `showMenu` | Linker error: undefined reference to `displayMenu` | Rename the definition to `displayMenu` |
| 3 | Multiplication table | Inner loop increments `row` instead of `column` | Infinite loop or incorrect table output | Use `column++` |
| 4 | Bar graph | Loop uses `< values[index]` | Each bar has one star too few | Use `<= values[index]` |
| 5 | Score summary | Loop uses `index <= count` | Reads beyond the end of both arrays | Use `index < count` |

### Corrected Lines

```cpp
const int MAX_SCORES = 6;
```

```cpp
void displayMenu()
```

```cpp
for (int column = 1; column <= columns; column++)
```

```cpp
for (int star = 1; star <= values[index]; star++)
```

```cpp
for (int index = 0; index < count; index++)
```

The unused `MAX_SCORES` constant is unnecessary, but it is not counted as one of the five errors.