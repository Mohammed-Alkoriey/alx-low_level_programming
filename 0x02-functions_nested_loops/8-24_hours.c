#include"main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */



void jack_bauer(void)
{
int iHours, iMinutes;

for (iHours = 0; iHours < 24; iHours++)
{
for (iMinutes = 0; iMinutes < 60; iMinutes++)
{
_putchar((iHours / 10) + 48);
_putchar((iHours % 10) + 48);
_putchar(58);
_putchar((iMinutes / 10) + 48);
_putchar((iMinutes % 10) + 48);
_putchar('\n');
}
}
}
