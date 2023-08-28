#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the head of the list.
* Return: Number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow, *fast;

slow = fast = head;

while (slow && fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
count++;
break;
}
}

return (count);
}
