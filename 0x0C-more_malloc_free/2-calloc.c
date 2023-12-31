#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the array
 * Return: null if fail and the array if success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
arr = malloc(size * nmemb);
if (arr == NULL)
return (NULL);
else
{
for (i = 0; i < (nmemb * size); i++)
{
arr[i] = 0;
}
}
return (arr);
}
