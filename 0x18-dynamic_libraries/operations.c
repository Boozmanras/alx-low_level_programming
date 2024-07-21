#include "main.h"
/**
* add - Adds two integers.
* @a: The first integer.@b: The second integer.
* Return: The result of adding a and b.
*/
int add(int a, int b)
{
return (a + b);
}

/**
* sub - Subtracts the second integer from the first integer.
* @a: The first integer.@b: The second integer.
* Return: The result of subtracting b from a.
*/
int sub(int a, int b)
{
return (a - b);
}

/**
* mul - Multiplies two integers.
* @a: The first integer.@b: The second integer.
* Return: The result of multiplying a and b.
*/
int mul(int a, int b)
{
return (a * b);
}

/**
* div - Divides the first integer by the second integer.
* @a: The numerator.@b: The denominator.
* Return: The result of dividing a by b. Returns 0 if b is 0 to handle
*         division by zero.
*/
int div(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a / b);
}
/**
* mod - Computes the modulus of the first integer by the second integer.
* @a: The numerator.@b: The denominator.
* Return: The result of a modulo b. Returns 0 if b is 0 to handle
*         modulo by zero.
*/
int mod(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a % b);
}
