#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a list_t list
* @head: Pointer to the head of the list
*/
void free_list(list_t *head)
{
list_t *current = head;

while (current != NULL)
{
list_t *temp = current;
current = current->next;
free(temp->str);
free(temp);
}
}