#include "main.h"

int palindrome(char *str, int i, int len);
int len(char *x);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if it is success, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, len(s)));
}

/**
 * len - calculates length of a string
 * @x: string
 * Return: the length of the string
 */
int len(char *x)
{
	if (*x == '\0')
	{
		return (0);
	}
	return (1 + len(x + 1));
}

/**
 * palindrome - checks palindrome
 * @str: string
 * @itr: iterator
 * @l: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int palindrome(char *str, int itr, int l)
{
	if (str[itr] != str[l - 1])
	{
		return (0);
	}
	if (itr >= l)
	{
		return (1);
	}
	return (palindrome(str, itr + 1, l - 1));
}
