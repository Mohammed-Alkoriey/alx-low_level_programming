#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid  - free two dimentional array
 * @grid: the array that's gonna be freed
 * @height: the heigth of the array
 * Return: nothing
 */




void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || grid == 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

