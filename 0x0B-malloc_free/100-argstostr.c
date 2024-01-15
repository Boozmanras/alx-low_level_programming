#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of a program.
* @ac: Number of arguments.
* @av: Array of argument strings.
*
* Return: A pointer to the concatenated string or NULL on failure.
*/
char *argstostr(int ac, char **av)
{
int i, j, length = 0, k = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
length++;
length++;
}
str = malloc(sizeof(char) * (length + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
