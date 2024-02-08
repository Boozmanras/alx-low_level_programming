#include "main.h"

/**
* get_bit - This function returns the value of a bit at a given index.
* @n: The number to check bits in.
* @index: The index at which to check the bit.
*
* Return: The value of the bit at the given index, or -1 if there is an error.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bitmask, result;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
bitmask = 1 << index;
result = n & bitmask;
if (result == bitmask)
return (1);
return (0);
}
