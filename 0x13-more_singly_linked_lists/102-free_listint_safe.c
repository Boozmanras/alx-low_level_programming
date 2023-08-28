#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: Pointer to a pointer to the head of the list.
* Return: Size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;

if (h == NULL)
return (0);

current = *h;

while (current)
{
temp = current->next;

free(current);
current = temp;

count++;

if (current == *h)
{
*h = NULL;
break;
}
}

return (count);
}
