#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _isdigit - Check if a character is a digit.
* @c: The character to check.
* Return: 1 if it's a digit, 0 otherwise.
*/
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
* _strlen - Calculate the length of a string.
* @s: The string.
* Return: The length of the string.
*/
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}

/**
* _mul - Multiply two strings representing numbers.
* @num1: The first number.
* @num2: The second number.
* Return: A pointer to the result string.
*/
char *_mul(char *num1, char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int len_result = len1 + len2;
int carry, prod;
char *result = malloc(len_result + 1);

if (!result)
{
printf("Error\n");
exit(98);
}

for (int i = 0; i <= len_result; i++)
result[i] = '0';

for (int i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (int j = len2 - 1; j >= 0; j--)
{
prod = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
carry = prod / 10;
result[i + j + 1] = (prod % 10) + '0';
}
result[i] += carry;
}

return (result);
}

/**
 * main - Entry point for the multiplication program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

char *num1 = argv[1];
char *num2 = argv[2];

for (int i = 0; num1[i]; i++)
{
if (!_isdigit(num1[i]))
{
printf("Error\n");
return (98);
}
}

for (int i = 0; num2[i]; i++)
{
if (!_isdigit(num2[i]))
{
printf("Error\n");
return (98);
}
}

char *result = _mul(num1, num2);
printf("%s\n", result);
free(result);

return (0);
}
