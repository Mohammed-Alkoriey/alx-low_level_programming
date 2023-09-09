#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocates a memory block
 * @ptr: the memory block
 * @old_size: the old size of that block
 * @new_size: the new size of the block
 * Return: null if fail and the array if success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *arr;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
else if (ptr == NULL)
{
arr = malloc(new_size);
return (arr);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
arr = malloc(new_size);
if (arr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < new_size; i++)
{
*((char *)arr + i) = *((char *)ptr + i);
}
}
}
return (arr);
free(ptr);
}
