#include "main.h"

/**
* flip_bits - This function counts the number of bits to change
*             to get from one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits to change.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int bit_index, count_bits = 0;
unsigned long int current_bit;
unsigned long int exclusive_or = n ^ m;

for (bit_index = 63; bit_index >= 0; bit_index--)
{
current_bit = exclusive_or >> bit_index;
if (current_bit & 1)
count_bits++;
}

return (count_bits);
}
