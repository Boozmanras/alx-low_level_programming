#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - utilize function pointer to print a name
* @name: string to be printed
* @f: pointer to a function
* Return: void
**/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
