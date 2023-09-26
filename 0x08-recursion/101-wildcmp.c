#include "main.h"
/**
 * wildcmp - compare to strings and see if they are identical
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
