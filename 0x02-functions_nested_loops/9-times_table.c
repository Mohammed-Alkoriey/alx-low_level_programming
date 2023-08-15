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
_putchar(32);
_putchar((iNumber / 10) + 48);
_putchar((iNumber % 10) + 48);
continue;
}
else if (iNumber > 9)
{
if (iNumber % 9 == 0)
{
_putchar(32);
_putchar((iNumber / 10) + 48);
_putchar((iNumber % 10) + 48);
continue;
}
else
{
_putchar(32);
_putchar((iNumber / 10) + 48);
_putchar((iNumber % 10) + 48);
_putchar(44);
continue;
}
}
else if (y == 0)
{
_putchar((iNumber % 10) + 48);
continue;
}
else if (iNumber % 9 = 0)
{
if (iNumber <= 9)
{
_putchar(32);
_putchar(32);
_putchar((iNumber % 10) + 48);
_putchar(44);
continue;
}
}
_putchar(32);
_putchar(32);
_putchar((iNumber % 10) + 48);
_putchar(44);
}
_putchar('\n');
}
}
