#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array containing the command-line arguments.
*
* Return: 0 on success, or an error code.
*/
int main(int argc, char *argv[])
{
int bytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}

/* Print opcodes of the main function */
unsigned char *main_addr = (unsigned char *)&main;
for (int i = 0; i < bytes; i++)
{
printf("%02x", main_addr[i]);
if (i != bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
