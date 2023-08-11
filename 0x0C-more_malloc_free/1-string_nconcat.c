#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - Concatenates two strings with the first n bytes of s2.
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes of s2 to concatenate.
*
* Return: Pointer to the concatenated string, or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, result_len, i, j;

if (s1 != NULL)
{
while (s1[len1] != '\0')
len1++;
}

if (s2 != NULL)
{
while (s2[len2] != '\0')
len2++;
}

if (n >= len2)
n = len2;

result_len = len1 + n;

result = malloc(result_len + 1);

if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j < n; j++)
result[i + j] = s2[j];

result[i + j] = '\0';

return (result);
}
