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
va_list i;
unsigned int fix;

va_start(i, n);

for (fix = 0; fix < n; fix++)
{
printf("%d", va_arg(i, int));

if (fix != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(i);
}
