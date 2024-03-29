#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - Chooses the appropriate function for executing
*               the operation specified by the user.
* @s: The operator provided as an argument.
*
* Return: A pointer to the function associated with
*         the given operator parameter.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};

int i = 0;

while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

return (ops[i].f);
}
