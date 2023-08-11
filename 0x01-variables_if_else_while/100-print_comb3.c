#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all possible diffrent combinations of two digits.
 *
 *Return: 0 success
 */
int main(void)
{
int iFirst, iSecond;
for (iFirst = 48; iFirst <= 57; iFirst++)
{
for (iSecond = iFirst + 1; iSecond <= 57; iSecond++)
{
if (iFirst == iSecond)
{
continue;
}
putchar(iFirst);
putchar(iSecond);
if (iFirst == 56 && iSecond == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
