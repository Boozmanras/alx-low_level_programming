#include "function_pointers.h"
/**
* int_index - returns the index if the comparison is true, otherwise -1
* @array: array to be evaluated
* @size: size of elements in the array
* @cmp: pointer to a function selected
* from one of the three functions in the main program
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
