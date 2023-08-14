#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Initializes a struct dog.
* @d: Pointer to struct dog.
* @name: Dog's name.
* @age: Dog's age.
* @owner: Dog owner's name.
*
* Return: None.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
