#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of its parameters.
 * @n: The number of parameters.
 * @...: The variable number of arguments.
 *
 * Return: Sum of the parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list sm;
unsigned int i, sum = 0;

va_start(sm, n);

for (i = 0; i < n; i++)
sum += va_arg(sm, int);

va_end(sm);

return (sum);
}
