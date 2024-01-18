#include <stdlib.h>
#include "main.h"

/**
* *_memset - populates memory with a constant byte
* @s: memory area to be populated
* @b: character to replicate
* @n: number of repetitions for b
*
* Return: pointer to the memory areas
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int no;

for (no = 0; no < n; no++)
{
s[no] = b;
}

return (s);
}

/**
* *_calloc - reserves memory for an array
* @nmemb: quantity of elements in the array
* @size: size of each individual element
*
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
