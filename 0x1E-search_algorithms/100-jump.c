#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array using jump
* search.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in array.
* @value: Value to search for.
*
* Return: The first index where value is located or -1 if
* not present or array is NULL.
*/
int jump_search(int *array, size_t size, int value)
{
size_t step, prev, i;

if (!array || size == 0)
return (-1);

step = sqrt(size);
prev = 0;

while (prev < size && array[prev] < value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
prev += step;
}

size_t start = prev > step ? prev - step : 0;
printf("Value found between indexes [%lu] and [%lu]\n", start, prev);

for (i = start; i < size && i <= prev; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
