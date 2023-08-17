#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: The variable number of string arguments.
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *strin;
unsigned int val;

va_start(args, n);

for (val = 0; val < n; val++)
{
strin = va_arg(args, char *);

if (strin == NULL)
printf("(nil)");
else
printf("%s", strin);

if (val != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(args);
}
