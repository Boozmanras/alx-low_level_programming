#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: The destination buffer
* @src: The source memory area
* @n: The number of bytes to copy
*
* Return: The pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
char *s = src;

while (n--)
*d++ = *s++;
return (dest);
}
