#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: The destination string
* @src: The source string
*
* Return: The pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *d = dest;

while (*dest)
dest++;
while ((*dest++ = *src++))
;
return (d);
}
