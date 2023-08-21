#include "main.h"


/**
 * puts_half - print the second half of the string
 * @str: the string that needs to be split into half
 * Return: nothing
 */


void puts_half(char *str)
{
int i = 0, x, len;

while (str[i])
{
i++;
}
if (i % 2 != 0)
{
i = i - 1;
}
i /= i;
for (x = i; x >= len; x++)
{
_putchar(str[x]);
}
}