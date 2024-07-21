#include "main.h"

/**
* _strncat - concatenates two strings up to n bytes from src
* @dest: The destination string
* @src: The source string
* @n: The maximum number of bytes to copy from src
*
* Return: The pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *d = dest;

while (*dest)
dest++;
while (n-- && (*dest++ = *src++))
;
*dest = '\0';
return (d);
}
