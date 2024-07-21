#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: The string to search
* @accept: The string of characters to match
*
* Return: The number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
char *a;

while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
break;
}
if (*a)
n++;
else
break;
s++;
}
return (n);
}
