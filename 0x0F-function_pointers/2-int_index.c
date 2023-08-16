#include "function_pointers.h"
/**
* int_index - Searches for an integer in an array.
* @array: Pointer to the array of integers.
* @size: Number of elements in the array.
* @cmp: Pointer to the function used for comparison.
*
* Return: Index of the first element for which cmp does not return 0,
*         or -1 if no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}

/**
* compare - Compares an integer to a value.
* @num: The integer to compare.
*
* Return: 1 if num is equal to 5, 0 otherwise.
*/
int compare(int num)
{
return (num == 5);
}
