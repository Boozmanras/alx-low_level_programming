#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a linked list
* @head: Pointer to the pointer of the head of the list
* @str: String to be duplicated and added as data of the new node
*
* Return: Address of the new element (node), or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int pos = 0;

while (str[pos])
pos++;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = pos;
new_node->next = *head;
*head = new_node;

return (*head);
}
