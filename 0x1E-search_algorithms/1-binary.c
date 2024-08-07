#include <stdio.h>
#include "search_algos.h"

/**
* print_array - prints the array being searched
* @array: the array to print
* @left: the starting index of the subarray
* @right: the ending index of the subarray
*/
void print_array(int *array, size_t left, size_t right)
{
size_t i;

printf("Searching in array: ");
for (i = left; i <= right; i++)
{
if (i != left)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}

/**
* binary_search - searches for a value in a sorted array of integers
*                 using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: the index where value is located, or -1 if not present or
*if array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
size_t left, right, mid;

if (array == NULL)
return (-1);

left = 0;
right = size - 1;

while (left <= right)
{
print_array(array, left, right);
mid = (left + right) / 2;
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}
