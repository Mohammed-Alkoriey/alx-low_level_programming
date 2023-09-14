 #include "variadic_functions.h"


/**
 * print_numbers - print numbers followed by a new line
 * @separator: the separate between two numbers
 * @n: number of numbers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
char *s;
unsigned int i;
va_list args;
if (separator == NULL || *separator == 0)
s = "";
else
s = (char *) separator;
va_start(args, n);
if (n > 0)
printf("%d", va_arg(args, int));
for (i = 1; i < n; i++)
printf("%s%d", sep, va_arg(args, int));
printf("\n");
va_end(args);
}
