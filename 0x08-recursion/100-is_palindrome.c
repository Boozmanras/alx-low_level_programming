#include "main.h"
#include <string.h>

/**
* is_valid_char - Checks if a character is a valid alphanumeric character
* @c: Character to check
*
* Return: 1 if valid, 0 if not
*/
int is_valid_char(char c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

/**
* check_palindrome - Checks if a string is a palindrome recursively
* @s: String to check
* @start: Start index of the string
* @end: End index of the string
*
* Return: 1 if palindrome, 0 if not
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}

if (s[start] != s[end])
{
return (0);
}

return (check_palindrome(s, start + 1, end - 1));
}

/**
* is_palindrome - Checks if a string is a palindrome
* @s: String to check
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
int length = strlen(s);
int start = 0, end = length - 1;

while (start < end)
{
while (!is_valid_char(s[start]) && start < end)
{
start++;
}
while (!is_valid_char(s[end]) && end > start)
{
end--;
}

if (start < end && s[start] != s[end])
{
return (0);
}

start++;
end--;
}

return (check_palindrome((s, 0, length - 1)));
}
