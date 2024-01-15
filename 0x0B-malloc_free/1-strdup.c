#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - Duplicates a string to a new memory space location.
* @str: The string to be duplicated.
* Return: A pointer to the newly allocated
*         memory containing the duplicated string.
*/
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
length = i;
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; str[i]; i++)
duplicate[i] = str[i];
return (duplicate);
}
