#include "main.h"

/**
 * print_most_numbers - prints the number from 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 2)
{
continue;
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
}
