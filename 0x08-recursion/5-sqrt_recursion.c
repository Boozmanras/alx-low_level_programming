#include "main.h"

/**
* calculate_sqrt - Finds the square root of n using recursion
* @n: Number to find the square root of
* @i: Integer to check square of
*
* Return: Square root of n, -1 if not found
*/
int calculate_sqrt(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (calculate_sqrt(n, i + 1));
}
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: Number to find the square root of
*
* Return: Square root of n, or -1 if not found
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (calculate_sqrt(n, 0));
}
