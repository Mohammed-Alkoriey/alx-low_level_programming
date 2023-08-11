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
int iFirst, iSecond;
for (iFirst = 0; iFirst <= 99; iFirst++)
{
for (iSecond = iFirst + 1; iSecond <= 99; iSecond++)
{
if (iFirst == iSecond)
{
continue;
}
putchar((iFirst / 10) + 48);
putchar((iFirst % 10) + 48);
putchar(' ');
putchar((iSecond / 10) + 48);
putchar((iSecond % 10) + 48);
if (iFirst == 98 && iSecond == 99)
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
