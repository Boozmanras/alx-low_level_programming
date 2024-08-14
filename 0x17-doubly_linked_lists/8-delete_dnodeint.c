#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index `index` of a dlistint_t linked list
* @head: Double pointer to the head of the list
* @index: Index of the node to delete, starting from 0
*
* Return: 1 if successful, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;

if (!*head)
return (-1);

while (index--)
{
if (!current)
return (-1);
current = current->next;
}

if (!current)
return (-1);

if (current->prev)
current->prev->next = current->next;
else
*head = current->next;

if (current->next)
current->next->prev = current->prev;

free(current);

return (1);
}
