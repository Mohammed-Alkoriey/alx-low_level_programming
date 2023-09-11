#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the character that we're loking for
 * Return: a pointer to the byte in s that matches one in accept
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
while (s[i])
{
int x = 0;
while (accept[x])
{
if (s[i] == accept[x])
{
return ((s + i));
break;
x++;
}
else
{
x++;
}
}
i++;
}
return ('\0');
}
