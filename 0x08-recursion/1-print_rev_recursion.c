#include "main.h"
/**
 * _print_rev_recursion - prints a reversed string
 * @s: is the string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
}
