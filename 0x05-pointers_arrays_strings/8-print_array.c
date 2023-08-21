#include "main.h"


/**
 * print_array - print a spicific number of array elements
 * @a: the array
 * @n: number of elements
 * Return: nothing
 */


void print_array(int *a, int n)
{
int i = 0, x;

while (a[i])
{
i++;
}
if (n > i)
{
printf("the entered number is larger than the array's length");
break;
}
else if (n > 0)
{
printf("%d", a[0]);
}
for (x = 1; x < n; x++)
{
printf(", %d" ,a[x]);
}
printf("\n");
}
