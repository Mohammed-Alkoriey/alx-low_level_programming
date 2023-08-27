#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: the array
 * @n: number of array's elements
 * Return: an integer
 */

void reverse_array(int *a, int n)
{
int x;
x = n / 2;

for (int i = 0; i <= x; i++)
{
int iTemp = 0;
iTemp = a[i];
a[i] = a[x + (x - i)];
a[x + (x - i)] = iTemp;
}
}
