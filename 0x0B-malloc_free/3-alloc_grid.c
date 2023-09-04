#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *alloc_grid  - creates a two dimentional array
 * @width: the width of the array
 * @height: the heigth of the array
 * Return: null if fail and the array if success
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i = 0, x = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
arr = malloc(sizeof(int*) *  height);
while (i < height)
{
arr[i] = malloc(sizeof(int*) *  width);
if (arr[i] == NULL)
{
while(i >= 0)
{
free(arr[i]);
i--;
}
free(arr);
return (NULL);
}
}
while (i < height)
{
while (x < width)
{
arr[i][x] = 0;
x++;
}
i++;
}
}
return (arr);
}
