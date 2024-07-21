#include "main.h"

/**
* _memset - fills the first n bytes of the memory area pointed to by s
* with the constant byte b
* @s: The memory area to fill
* @b: The constant byte
* @n: The number of bytes to fill
*
* Return: The pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n--)
*p++ = b;
return (s);
}
