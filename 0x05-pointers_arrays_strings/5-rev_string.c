#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string that needs to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
int i = 0, t = 0;
char rev;

while (s[t])
{
i++;
}
for (t = i - 1; t >= i / 2; t++)
{
rev = s[t];
s[t] = s[i - 1 - t];
s[i - 1 - t] = rev;
}
}
