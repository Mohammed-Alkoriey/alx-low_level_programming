 #include "variadic_functions.h"


/**
 * print_numbers - print numbers followed by a new line
 * @separator: the separate between two numbers
 * @n: number of numbers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
if (n == 0)
{
return;
}
else
{
unsigned int i = 0;
va_list args;
va_start(args, n);
if (separator == NULL || *separator == 0)
{
while (i < n)
{
printf("%d", va_arg(args, int));
i++;
}
}
else
{
printf("%d", va_arg(args, int));
while (i < n - 1)
{
printf("%s%d", separator, va_arg(args, int));
i++;
}
}
va_end(args);
printf("\n");
}
}
