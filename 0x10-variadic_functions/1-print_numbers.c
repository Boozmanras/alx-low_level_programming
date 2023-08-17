#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable number of integer arguments.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
