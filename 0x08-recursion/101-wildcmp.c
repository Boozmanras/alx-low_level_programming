#include <stdio.h>
#include "main.h"
/**
 * wildcmp - Compares two strings and returns 1
 *           if they can be considered identical, otherwise return 0.
 * @s1: The first input string to compare.
 * @s2: The second input string to compare.
 *      It can contain the special character *.
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '\0')
{
return (0);
}
if (*s1 == *s2 || *s2 == '*')
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 != '*' && *(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (0);
}
