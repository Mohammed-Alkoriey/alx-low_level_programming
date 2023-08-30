#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: is the string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
}
else
{
printf("%c", *s);
*s++;
_puts_recursion(s);
}
}
