#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int sim = 0, len = 0;
while (accept[len])
{
len++;
}
while (s[i])
{
int x = 0;
while (accept[x])
{
if (s[i] == accept[x])
{
sim += 1;
x++;
}
else
{
x++;
}
}
if (sim == (len + 1))
{
return (sim);
break;
}
i++;
}
return (sim);
}
