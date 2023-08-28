#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character that we're loking for
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
unsigned int i = 0;
int iFound;
while (s[i])
{
if (s[i] == c)
{
iFound = 1;
break;
}
else
{
iFound = 0;
i++;
}
}
if (iFound == 1)
{
return (s + i);
}
else
{
return (NULL);
}
}
