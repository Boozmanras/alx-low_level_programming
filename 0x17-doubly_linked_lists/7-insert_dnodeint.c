#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Double pointer to the head of the list
* @idx: Index of the list where the new node should be added, starting from 0
* @n: Data to insert in the new node
*
* Return: Address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;

while (current && i < idx - 1)
{
current = current->next;
i++;
}

if (!current)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
new_node->prev = current;

if (current->next)
current->next->prev = new_node;

current->next = new_node;

return (new_node);
}
