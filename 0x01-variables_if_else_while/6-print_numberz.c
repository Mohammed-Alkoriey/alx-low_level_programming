#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all single digit numbers
 *
 *Return: 0 success
 */
int main(void)
{
int cNumbers;
for (cNumbers = 48; cNumbers <= 57; cNumbers++)
{
putchar(cNumbers);
}
putchar('\n');
return (0);
}
