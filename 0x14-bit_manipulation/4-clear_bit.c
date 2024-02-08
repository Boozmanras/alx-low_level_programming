#include "main.h"
#include <stdlib.h>

/**
* clear_bit - This function sets the value of a bit to 0 at a given index.
* @n: Pointer to the number to modify.
* @index: The index at which to clear the bit.
*
* Return: 1 if success, -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
*n &= ~(1ul << index);
return (1);
}
