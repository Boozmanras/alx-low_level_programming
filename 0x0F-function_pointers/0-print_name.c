#include "function_pointers.h"

/**
* print_name - prints a name using the specified function
* @name: name to be printed
* @f: function to print the name
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
