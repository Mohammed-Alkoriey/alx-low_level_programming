#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - prints all possible diffrent combinations of three digits.
 *
 *Return: 0 success
 */
int main(void)
{
int iFirst, iSecond, iThird;
for (iFirst = 48; iFirst <= 57; iFirst++)
{
for (iSecond = iFirst + 1; iSecond <= 57; iSecond++)
{
for (iThird = iSecond + 1; iThird <= 57; iThird++)
{
if (iFirst == iSecond)
{
continue;
}
putchar(iFirst);
putchar(iSecond);
putchar(iThird);
if (iFirst == 56 && iSecond == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
