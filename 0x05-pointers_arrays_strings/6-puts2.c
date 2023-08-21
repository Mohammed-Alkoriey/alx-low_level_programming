#include "main.h"

/**
 * puts2 - print half of the string
 * @str: the string that needs to be halfed
 * Return: nothing
 */

void puts2(char *str)
{
int i = 0;

for (i = 0; str[i] != '\0'; ++i)
{
if (i % 2 ==  0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
