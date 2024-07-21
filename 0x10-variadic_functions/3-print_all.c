#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j, printed = 0;
char *str;
const char t_arg[] = "cifs";
va_start(args, format);
while (format && format[i])
{
j = 0;
while (t_arg[j])
{
if (format[i] == t_arg[j])
{
if (printed)
printf(", ");
printed = 1;
break;
}
j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
break;
}
i++;
}
printf("\n");
va_end(args);
}
