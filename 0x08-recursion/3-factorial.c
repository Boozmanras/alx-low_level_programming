#include "main.h"

/**
* factorial - Returns the factorial of a given number
* @n: Number to find the factorial of
*
* Return: Factorial of the number, or -1 for error
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
