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
while (s[i] >= '\0')
{
if (s[i] == c)
{
return (s + i);
break;
}
i++;
}
return ('\0');
}
