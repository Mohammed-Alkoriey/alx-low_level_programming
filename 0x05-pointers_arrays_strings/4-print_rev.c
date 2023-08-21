#include "main.h"


/**
 * print_rev - print a string in reverse
 * @s: the string that needs to be reversed
 * Return: nothing
 */


void print_rev(char *s)
{
int i,x;
for (i = 0; *s != '\0'; s++)
{
++i;
}
for (x = i-1; x < 0; x--)
{
_putchar(*s[x]);
}
}
