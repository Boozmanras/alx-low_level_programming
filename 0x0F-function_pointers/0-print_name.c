#include "function_pointers.h"
/**
* print_name - Calls a function to print a name.
* @name: The name to be printed.
* @f: A function pointer to the printing function.
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}

/**
* print_function - Prints the given name.
* @name: The name to be printed.
*/
void print_function(char *name)
{
printf("Hello, %s!\n", name);
}
