#include"main.h"

/**
 * times_table - prints the times table
 * Return: void
 */



void times_table(void)
{
int x, y, iNumber;

for (x = 0; x <= 9; x++)
{
_putchar(48);
for (y = 0; y <= 9; y++)
{
_putchar(44);
_putchar(32);
iNumber = x * y;
if (iNumber <= 9)
_putchar(32);
else
_putchar((iNumber / 10) + 48);
_putchar((iNumber % 10) + 48);
}
_putchar('\n');
}
}
