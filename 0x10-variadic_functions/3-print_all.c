#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_all - Prints different types of arguments followed by a new line.
* @format: The format string specifying the types of arguments.
* @...: The variable number of arguments.
*
* Return: void
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *string, *val = "";

va_list arg;

va_start(arg, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", val, va_arg(arg, int));
break;
case 'i':
printf("%s%d", val, va_arg(arg, int));
break;
case 'f':
printf("%s%f", val, va_arg(arg, double));
break;
case 's':
string = va_arg(arg, char *);
if (!string)
string = "(nil)";
printf("%s%s", val, string);
break;
default:
i++;
continue;
}
val = ", ";
i++;
}
}

printf("\n");
va_end(arg);
}
