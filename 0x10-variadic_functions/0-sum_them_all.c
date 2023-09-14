#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of some numbers
 * @n: number of numbers
 * Return: number's sum
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
else
{
unsigned int i = 0;
int result = 0;
va_list args;
va_start(args, n);
while (i < n)
{
result += va_arg(args, int);
i++;
}
va_end(args);
return (result);
}
}
