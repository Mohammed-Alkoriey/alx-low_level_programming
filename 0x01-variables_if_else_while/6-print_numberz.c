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
char cNumbers;
for (cNumbers = '0'; cNumbers <= '9'; cNumbers++)
{
putchar(cNumbers);
}
putchar('\n');
return (0);
}
