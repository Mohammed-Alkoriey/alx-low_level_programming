#include "main.h"

/**
 * is_prime_number - calls a function
 * @n: the number
 * Return: 1 if prime and 0 if not
 */





int is_prime_number(int n)
{
	int x = 2;

	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n, x + 1));
	}
}
