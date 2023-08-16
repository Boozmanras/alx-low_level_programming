#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>

/**
* get_op_func - Returns the corresponding function based on the operator.
* @s: The operator passed as an argument.
*
* Return: A pointer to the corresponding function, or NULL if not found.
*/
get_op_func(char *s)
{
if (s[1] == '\0')
{
if (*s == '+')
return (&op_add);
if (*s == '-')
return (&op_sub);
if (*s == '*')
return (&op_mul);
if (*s == '/')
return (&op_div);
if (*s == '%')
return (&op_mod);
}

return (NULL);
}
