#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all single digit numbers and numbers must be separated by , followed by a space
 *
 *Return: 0 success
 */
int main(void)
{
int cNumbers;
for (cNumbers = 48; cNumbers <= 57; cNumbers++)
{
if (cNumbers == 57)
{
putchar(cNumbers);
continue;
}
putchar(cNumbers);
putchar(',');
putchar(' ');
}
putchar('$');
return (0);
}
