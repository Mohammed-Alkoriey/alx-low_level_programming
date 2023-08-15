#include"main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 * Return: 0 on success
 */



void print_to_98(int n)
{
for (n; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
}
printf("%d, ", n);
}
}
