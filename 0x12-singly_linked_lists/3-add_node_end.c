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
list_t *current = *head;

list_t *new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(new_node->str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}

return (new_node);
}


list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
