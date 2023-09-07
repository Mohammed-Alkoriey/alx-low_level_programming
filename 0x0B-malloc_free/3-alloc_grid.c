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
int **iArr, i, x, fI, fX;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
iArr = malloc(sizeof(int *) * height);
if (iArr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
iArr[i] = malloc(sizeof(int) * width);
if (iArr[i] == NULL)
{
for (x = 0; x < i; x++)
{
free(iArr[x]);
}
free(iArr);
return (NULL);
}
for (x = 0; x < width; x++)
{
iArr[i][x] = 0;
}
}
}
}
return (iArr);
}
