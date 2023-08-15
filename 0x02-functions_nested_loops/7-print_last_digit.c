#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number that we'r printing it's last digit
 * Return: returns the last digit of the given number
 */



int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
l = -l;
}
_putchar(l + '0');
return (l);
}
