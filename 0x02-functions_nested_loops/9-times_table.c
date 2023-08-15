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
for (y = 0; y <= 9; y++)
{
iNumber = x * y;
if (iNumber == 81)
{
_putchar(iNumber + 48);
continue;
}
_putchar(iNumber + 48);
_putchar(44);
_putchar(32);
}
_putchar(36);
_putchar('\n');
}
}
