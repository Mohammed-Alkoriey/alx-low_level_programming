#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of integers
 * @min: the starting point of the array
 * @max: the ending point of the array
 * Return: null if fail and the array if success
 */

int *array_range(int min, int max)
{
int *arr;
int i, x, z = 0;
if (min > max)
return (NULL);
else
{
i = max - min;
arr = malloc(sizeof(int) * (i + 1));
if (arr == NULL)
return (NULL);
else
{
for (x = min; x <= max; x++)
{
arr[z] = x;
z++;
}
}
return (arr);
}
}
