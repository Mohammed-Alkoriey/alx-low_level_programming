#include "main.h"

/**
 * _puts - print a string;
 * @str: the string that needs to be printed
 * Return: nothing
 */


void _puts(char *str)
{
int i;
for (i = 0; *str != '\0'; str++)
{
i++;
_putchar(*str);
}
_putchar('\n');
}
