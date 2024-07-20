#include "search_algos.h"

/**
* binary_search_ex - Helper function to perform binary search
* within a range
* @array: Pointer to the first element of the array to search in
* @left: Left index of the subarray to search
* @right: Right index of the subarray to search
* @value: Value to search for
*
* Return: The index where value is located, or -1 if not found
*/
int binary_search_ex(int *array, size_t left, size_t right, int value)
{
size_t mid;

while (left <= right)
{
mid = (left + right) / 2;
printf("Searching in array: ");
for (size_t i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i != right)
printf(", ");
}
printf("\n");

if (array[mid] == value)
return (mid);
if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}

/**
* exponential_search - Searches for a value in a sorted array
* using exponential search
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The first index where value is located, or
* -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;

if (array == NULL)
return (-1);

if (array[0] == value)
return (0);

while (bound < size && array[bound] <= value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

size_t left = bound / 2;
size_t right = bound < size ? bound : size - 1;
printf("Value found between indexes [%lu] and [%lu]\n", left, right);

return (binary_search_ex(array, left, right, value));
}
