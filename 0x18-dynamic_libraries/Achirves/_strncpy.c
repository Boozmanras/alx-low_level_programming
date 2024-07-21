#include "main.h"

/**
* _strncpy - copies at most n bytes of src to dest
* @dest: The destination buffer
* @src: The source string
* @n: The maximum number of bytes to copy from src
*
* Return: The pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *d = dest;

while (n-- && (*dest++ = *src++))
;
while (n-- > 0)
*dest++ = '\0';
return (d);
}
