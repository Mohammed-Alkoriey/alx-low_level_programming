#include"main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */



void jack_bauer(void)
{
int iHours, iMinutes;

for (iHours = 00; iHours <= 24; iHours++)
{
for (iMinutes = 00; iMinutes < 60; iMinutes++)
{
_putchar('0' + iHours);
_putchar(58);
_putchar('0' + iMinutes);
_putchar('\n');
}
}
}
