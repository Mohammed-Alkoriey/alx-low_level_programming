#include "main.h"

/**
 * more_numbers - prints the number from 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
int i, x;

for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
_putchar('0' + i);
}
}
_putchar('\n');
}
