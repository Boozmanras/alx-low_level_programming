#include "main.h"

/**
* _strcpy - copies the string pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest
* @dest: The buffer to copy to
* @src: The string to copy
*
* Return: The pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *d = dest;

while (*src)
*dest++ = *src++;
*dest = '\0';
return (d);
}
