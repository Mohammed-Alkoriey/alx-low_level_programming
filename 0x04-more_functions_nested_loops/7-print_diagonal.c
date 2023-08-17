#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times new line should be printed
 * Return: void
 */

void print_diagonal(int n)
{
int i, iTimes;

for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
break;
}
else
{
for (iTimes = 0; iTimes <= i;  iTimes++)
{
_putchar(' ');
}
_putchar('\\');
}
}
_putchar('\n');
}
