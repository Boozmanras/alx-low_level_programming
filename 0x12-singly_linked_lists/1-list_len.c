#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list
* @h: Pointer to the head of the list
*
* Return: The number of elements (nodes) in the list
*/
size_t list_len(const list_t *h)
{
size_t no_nodes = 0;

while (h != NULL)
{
no_nodes++;
h = h->next;
}

return (no_nodes);
}
