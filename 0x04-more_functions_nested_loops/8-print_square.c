#include "main.h"

/**
 * print_square - draws a square
 * @size: size of the square 
 * Return: void
 */

void print_square(int size)
{
int i, iTimes;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (iTimes = 0; iTimes < size;  iTimes++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
}
