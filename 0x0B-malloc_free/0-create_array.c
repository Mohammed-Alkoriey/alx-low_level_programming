#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array  - creates an array of char
 * @size: the size of the array
 * @c: the character that the array is gonna be init with
 * Return: null if fail and the array if success
 */

char *create_array(unsigned int size, char c)
{
char *arr;
int i = 0, len = size;
if (size == 0)
{
return (NULL);
}
else
{
arr = malloc(sizeof(char) * size);
while (i < len)
{
arr[i] = c;
i++;
}
}
return (arr);
free(arr);
}
