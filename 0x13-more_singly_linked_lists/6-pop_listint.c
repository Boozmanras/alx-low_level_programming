#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: Pointer to a pointer to the head of the list.
* Return: Head node's data (n), or 0 if the linked list is empty.
*/
int pop_listint(listint_t **head)
{
if (*head == NULL)
return (0);

int data = (*head)->n;
listint_t *temp = *head;
*head = (*head)->next;
free(temp);

return (data);
}
