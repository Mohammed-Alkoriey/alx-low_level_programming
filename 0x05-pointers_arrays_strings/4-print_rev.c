#include "main.h"


/**
 * print_rev - print a string in reverse
 * @s: the string that needs to be reversed
 * Return: nothing
 */


void print_rev(char *s)
{
int i, x;

for (i = 0; *s != '\0'; s++)
{
i++;
}
while(i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
