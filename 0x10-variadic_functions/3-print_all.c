#include "variadic_functions.h"
#include <stdlib.h>
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
va_list args;
va_start(args, format);

unsigned int i = 0;
char c;
int num;
float f;
char *str;

while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
write(1, &c, 1);
break;

case 'i':
num = va_arg(args, int);
intToStr(num);
break;

case 'f':
f = va_arg(args, double);
floatToStr(f);
break;

case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
while (*str)
{
write(1, str, 1);
str++;
}
break;

default:
i++;
continue;
}

if (format[i + 1] != '\0')
{
char sep = ',';
write(1, &sep, 1);
char space = ' ';
write(1, &space, 1);
}

i++;
}

va_end(args);

char newline = '\n';
write(1, &newline, 1);
exit(0);
}

void intToStr(int num)
{
if (num == 0)
write(1, "0", 1);
else
{
char buffer[20];
int i = 0;
while (num > 0)
{
buffer[i++] = '0' + (num % 10);
num /= 10;
}
while (i > 0)
{
i--;
write(1, &buffer[i], 1);
}
}
}

void floatToStr(float num)
{
int intPart = (int) num;
float decimalPart = num - intPart;

intToStr(intPart);

if (decimalPart > 0.0)
{
write(1, ".", 1);
int decimalCount = 6;  // Print up to 6 decimal places
while (decimalCount > 0)
{
decimalPart *= 10;
int digit = (int) decimalPart;
char digitChar = '0' + digit;
write(1, &digitChar, 1);
decimalPart -= digit;
decimalCount--;
}
}
}
