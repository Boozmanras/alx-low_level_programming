What's My Name

Create a function that prints a given name.

void print_name(char *name, void (*f)(char *));
Time Spent Thinking

Implement a function that executes a specified function on each element of an array.

void array_iterator(int *array, size_t size, void (*action)(int));
Creating Opportunities

Develop a function that searches for an integer within an array, utilizing a provided comparison function.

int int_index(int *array, int size, int (*cmp)(int));
Simple Operations Program

Create a program for basic arithmetic operations on integers.

Usage: calc num1 operator num2
Operators: +, -, *, /, %
// 3-calc.h
// Function prototypes and data structures
// 3-op_functions.c
// Implementation of operation functions
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
// 3-get_op_func.c
// Function to select the correct operation function
int (*get_op_func(char *s))(int, int);
// 3-main.c
// Main function for the program
int main(int argc, char *argv[]);
Printing Main Function Opcodes

Develop a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes
// 4-main.c
// Main function for opcode printing
int main(int argc, char *argv[]);
Output format:

Opcodes printed in hexadecimal, lowercase
Each opcode is two characters long
Listing ends with a new line
