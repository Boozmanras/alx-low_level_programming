#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - outputs each element of an array on a new line
* @array: array to be processed
* @size: number of elements to be printed
* @action: pointer to a function for regular or hexadecimal printing
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
