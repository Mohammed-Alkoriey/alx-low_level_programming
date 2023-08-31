#include "main.h"

/**
 * _sqrt_recursion - calls sqrt function
 * @n: is the number
 * Return: the square root of a number
 */

int _sqrt_recursion(int n)
{
sqr(n, 1);
}

/**
 * sqr - a function to find the square root
 * @x: this is the number
 * @y: a number to help us find the square root
 * Return: the square root
 */


int sqr(int x, int y)
{
if (y * y == x)
{
return (y);
}
else if (y * y < x)
{
return (sqr(x, y + 1));
}
else
{
return (-1);
}
}
}
