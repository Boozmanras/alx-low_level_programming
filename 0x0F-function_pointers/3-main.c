#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array containing the command-line arguments.
*
* Return: 0 on success, or an error code.
*/
int main(int argc, char *argv[])
{
int num1, num2;
int result;
get_op_func_t operator_func;

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operator_func = get_op_func(argv[2]);
if (operator_func == NULL)
{
printf("Error\n");
return (99);
}

if ((num2 == 0) && (*argv[2] == '/' || *argv[2] == '%'))
{
printf("Error\n");
return (100);
}

result = operator_func(num1, num2);
printf("%d\n", result);

return (0);
}
