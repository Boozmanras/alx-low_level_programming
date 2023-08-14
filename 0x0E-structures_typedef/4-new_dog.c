#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Creates a new struct dog.
* @name: Dog's name.
* @age: Dog's age.
* @owner: Dog owner's name.
*
* Return: Pointer to the new struct dog, or NULL on failure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
return (NULL);

dog_t *new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

char *copied_name = strdup(name);
char *copied_owner = strdup(owner);

if (copied_name == NULL || copied_owner == NULL)
{
free(new_dog_ptr);
free(copied_name);
free(copied_owner);
return (NULL);
}

new_dog_ptr->name = copied_name;
new_dog_ptr->age = age;
new_dog_ptr->owner = copied_owner;

return (new_dog_ptr);
}
