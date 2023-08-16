Task 0: Print a Name

Write a function that prints a given name.

void print name(char *name, void (*f)(char *));
Task 1: Array Action

Write a function that applies a given function to each element of an array.
void array_iterator(int *array, size size, void (*action)(int));
Task 2: Integer Search

Write a function that searches for an integer in an array.
int int_index(int *array, int size, int (*cmp)(int));
Task 3: Simple Calculator

Write a program that performs basic arithmetic operations.

Usage: calc num1 operator num2
Operators: +, -, *, /, %
Task 4: Own Opcode Printer

Write a program that prints the opcodes of its main function.

Usage: ./main number of bytes
Output format: Hexadecimal opcodes, two characters per opcode
