#include <math.h>
#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted singly linked list
*             of integers using the Jump search algorithm
* @list: Pointer to the head of the list to search in
* @size: Number of nodes in the list
* @value: The value to search for
*
* Return: Pointer to the first node where value is located
*         NULL if value is not present or if head is NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step, prev_index;
listint_t *prev, *current;

if (list == NULL || size == 0)
return (NULL);

step = sqrt(size);
prev = list;
current = list;

while (current->index + step < size && current->n < value)
{
prev = current;
for (prev_index = current->index;
current->index < prev_index + step;
current = current->next)
{
if (current->next == NULL)
break;
}
printf("Value checked at index [%lu] = [%d]\n",
current->index, current->n);
}

printf("Value found between indexes [%lu] and [%lu]\n",
prev->index, current->index);

while (prev != NULL && prev->index <= current->index && prev->n <= value)
{
printf("Value checked at index [%lu] = [%d]\n",
prev->index, prev->n);
if (prev->n == value)
return (prev);
prev = prev->next;
}

return (NULL);
}
