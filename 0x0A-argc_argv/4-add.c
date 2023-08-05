
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
* is_positive_number - Check if a string represents a positive number.
* @s: The string to check.
*
* Return: true if the string is a positive number, false otherwise.
*/
bool is_positive_number(const char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return false;
s++;
}
return true;
}

/**
* main - Adds positive numbers passed as command-line arguments.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return 0;
}

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return 1;
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);
return 0;
}
