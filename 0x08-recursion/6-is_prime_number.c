#include "main.h"

/**
* check_prime - Checks if a number is prime recursively
* @n: Number to check
* @i: Divisor to check if n is divisible by
*
* Return: 1 if prime, 0 if not prime
*/
int check_prime(int n, int i)
{
if (n <= 2)
{
return (n == 2);
}

if (n % i == 0)
{
return (0);
}
else if (i * i > n)
{
return (1);
}
else
{
return (check_prime(n, i + 1));
}
}

/**
* is_prime_number - Checks if a number is a prime number
* @n: Number to check
*
* Return: 1 if prime, 0 if not prime
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (check_prime(n, 2));
}
