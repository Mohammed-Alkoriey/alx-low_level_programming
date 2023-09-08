#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked  - allocates memory
 * @b: number of bytes
 * Return: null if fail and the array if success
 */

void *malloc_checked(unsigned int b)
{
char *arr;
arr = malloc(b);
return (arr);
}
