#include "main.h"
/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: is the number
 * @y: is the power
 * Return: the calculated number
 */
int is_prime_number(int n);

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}

int is_prime_number(int n)
{
if (n % 2 != 0 || n == 2)
{
return (1);
}
else
{
return (0);
}
}
