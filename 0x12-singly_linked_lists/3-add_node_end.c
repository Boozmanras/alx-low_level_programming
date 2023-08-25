#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a linked list
* @head: Pointer to the pointer of the head of the list
* @str: String to be duplicated and added as data of the new node
*
* Return: Address of the new element (node), or NULL if it failed
**/
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a linked list
* @head: Pointer to the pointer of the head of the list
* @str: String to be duplicated and added as data of the new node
*
* Return: Address of the new element (node), or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current = *head;
unsigned int pos = 0;

if (str == NULL)
return (NULL);

while (str[pos])
pos++;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
new_node->len = pos;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (current->next)
current = current->next;

current->next = new_node;

return (new_node);
}
