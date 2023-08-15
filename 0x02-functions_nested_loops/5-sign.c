#include"main.h"

/**
 * print_sign - checks for the sign of the number
 * @n: the number that's gonna be checked
 * Return: if it's greater than 0 return 1, if it's equal to 0 return 0
 * and if it's less than 0 return -1
 */



int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
