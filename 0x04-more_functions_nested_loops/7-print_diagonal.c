#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times new line should be printed
 * Return: void
 */

void print_diagonal(int n)
{
int i, iTimes;

if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar(92);
_putchar('\n');
for (i = 1; i < n; i++)
{
for (iTimes = 0; iTimes <= i;  iTimes++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
