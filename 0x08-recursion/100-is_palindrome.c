#include "main.h"
/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string
 *
 * Return: 1 on success and 0 on not
 */
int is_palindrome(char *s)
{
	int x = 0, i = 0;

	while (s[x])
	{
		x++;
	}
	x--;
	if (x == 0)
	{
		return (1);
	}
	while (x > i)
	{
		if (s[i++] != s[x--])
		{
			return (0);
		}
	}
	return (1);
}
