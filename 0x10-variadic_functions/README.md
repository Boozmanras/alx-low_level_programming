# Variadic Functions in C

This project focuses on the implementation and understanding of variadic functions in C. Variadic functions are functions that can take a variable number of arguments. The main tools used to handle variadic functions are macros provided by the `stdarg.h` library.

## Learning Objectives

- Understand what variadic functions are.
- Learn how to use `va_start`, `va_arg`, and `va_end` macros.
- Understand the use of the `const` type qualifier.

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- No use of global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free`, and `exit`.
- Function prototypes should be included in a header file named `variadic_functions.h`.
- Code must follow the Betty style guidelines.
- Each header file should be include guarded.

## Files and Functions

### 0. Beauty is variable, ugliness is constant

**Function:** `int sum_them_all(const unsigned int n, ...);`

This function returns the sum of all its parameters.

### 1. To be is to be the value of a variable

**Function:** `void print_numbers(const char *separator, const unsigned int n, ...);`

This function prints numbers, followed by a new line.

### 2. One woman's constant is another woman's variable

**Function:** `void print_strings(const char *separator, const unsigned int n, ...);`

This function prints strings, followed by a new line. If one of the strings is `NULL`, it prints `(nil)` instead.

### 3. To be is a to be the value of a variable

**Function:** `void print_all(const char * const format, ...);`

This function prints anything. The format string can contain the following characters:
- `c`: char
- `i`: integer
- `f`: float
- `s`: char* (if the string is `NULL`, it prints `(nil)`)

## Usage

### Compilation

To compile the code, use the following command:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <implementation_file.c> -o <output_file>

