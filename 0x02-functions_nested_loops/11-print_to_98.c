#include"main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 * Return: 0 on success
 */



void print_to_98(int n)
{
int x = n;
for (x; x <= 98; x++)
{
if (x == 98)
{
printf("%d", x);
}
printf("%d, ", x);
}
}
