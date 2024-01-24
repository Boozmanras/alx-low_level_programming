#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Provides the result of adding two numbers.
* @a: The initial number.
* @b: The second number.
*
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Provides the result of subtracting one number from another.
* @a: The initial number.
* @b: The second number.
*
* Return: The difference between a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Yields the result of dividing two numbers.
* @a: The initial number.
* @b: The second number.
*
* Return: The quotient of a divided by b.
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Provides the remainder resulting from the division of two numbers.
* @a: The initial number.
* @b: The second number.
*
* Return: The division of the division of a by b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Provides the remainder resulting from the division of two numbers.
* @a: The initial number.
* @b: The second number.
*
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}

