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
int iNumbers;
for (iNumbers = 0; iNumbers <= 9; iNumbers++)
{
printf("%d", iNumbers);
}
printf("\n");
return (0);
}
