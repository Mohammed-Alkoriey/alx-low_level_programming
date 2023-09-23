#include "main.h"
/**
 * is_prime - checks if it's prime
 * @x: the n passed
 * @z: int
 *
 * Return: 1 on success and 0 on not
 */
int is_prime(int x, int z)
{
	if (x == z)
		return (1);
	else if (x % z == 0)
		return (0);
	return (prime2(x, z + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: On success 1 and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
