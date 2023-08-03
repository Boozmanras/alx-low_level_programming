#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Returnus the natural square
 *                   root of a number using recursion.
 * @n: The input number for which the square root is to be calculated.
 * Return: The natural square root of n or -1
 *         if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (sqrt_helper(n, 1, n));
}
/**
 * sqrt_helper - Finds the square root of a number using binary search.
 * @n: The input number for which the square root is to be calculated.
 * @start: The start of the search range.
 * @end: The end of the search range.
 * Return: The natural square root of n or -1
 *         if n does not have a natural square root.
 */
int sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;
int mid_squared = mid * mid;
if (start > end)
{
return (-1);
}
if (mid_squared == n)
{
return (mid);
}
if (mid_squared < n)
{
return (sqrt_helper(n, mid + 1, end));
}
return (sqrt_helper(n, start, mid - 1));
}
