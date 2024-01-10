#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line
* @s: Pointer to the string to be printed
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
