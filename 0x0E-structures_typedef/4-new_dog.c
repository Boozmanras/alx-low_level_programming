#include <stdlib.h>
#include "dog.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
*           which contains a copy of the string given as a parameter.
* @str: string to duplicate
* Return: pointer to the duplicated string, or NULL if insufficient
* memory
*/
char *_strdup(const char *str)
{
char *copy;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

copy = malloc((len + 1) * sizeof(char));
if (copy == NULL)
return (NULL);

for (i = 0; i < len; i++)
copy[i] = str[i];
copy[len] = '\0';

return (copy);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog (success), or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = _strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = _strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->age = age;

return (new_dog);
}
