# 0x0D Preprocessor

This repository contains C programs that demonstrate the use of macros and preprocessor directives. Each task is associated with a specific C header file that defines macros to achieve particular functionalities.

## Files

### 0-object_like_macro.h

Header file that defines a macro named SIZE as an abbreviation for the token 1024.

```c
#define SIZE 1024
```

### 1-pi.h

Header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

```c
#define PI 3.14159265359
```

### 2-main.c

A C program that prints the name of the file it was compiled from, followed by a new line.

### 3-function_like_macro.h

Header file that defines a function-like macro ABS(x) that computes the absolute value of a number x.

```c
#define ABS(x) ((x) < 0 ? -(x) : (x))
```

### 4-sum.h

Header file that defines a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

```c
#define SUM(x, y) ((x) + (y))
```

## Compilation

The programs can be compiled using the following gcc options:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```

Note: Each task has a corresponding `main.c` file that can be used to test the associated header file. However, these `main.c` files are not required for submission.

## Author

This repository is maintained by emmy. Please feel free to contact me with any questions or concerns.
