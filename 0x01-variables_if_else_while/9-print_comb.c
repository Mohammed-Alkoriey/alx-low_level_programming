#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all single digit numbers and numbers must be separated by ", "
 *
 *Return: 0 success
 */
int main(void)
{
int cNumbers;
for (cNumbers = 48; cNumbers <= 57; cNumbers++)
{
putchar(cNumbers);
if (cNumbers == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
