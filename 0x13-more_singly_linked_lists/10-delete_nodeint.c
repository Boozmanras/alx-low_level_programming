#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a
*                           given position in a listint_t list.
* @head: Pointer to a pointer to the head of the list.
* @index: Index of the node to be deleted.
* Return: 1 if succeeded, -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = *head;
listint_t *previous = NULL;
unsigned int count = 0;


if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (current != NULL && count < index)
{
previous = current;
current = current->next;
count++;
}

if (current == NULL)
return (-1);

previous->next = current->next;
free(current);

return (1);
}
