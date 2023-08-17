#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: size of the square
 * Return: void
 */

void print_triangle(int size)
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
for (iTimes = 1; iTimes <= size;  iTimes++)
{
if ((i + itimes) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
