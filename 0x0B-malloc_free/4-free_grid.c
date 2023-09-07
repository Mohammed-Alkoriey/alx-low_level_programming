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
int i, x;
for (i = 0; i < height; i++)
{
for (x = 0; x < i; x++)
{
free(grid[x]);
}
free(grid);
}
}

