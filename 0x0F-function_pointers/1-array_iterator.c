#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on an array.
 *
 * @array: the array
 * @size: the array's size
 * @action: the function that's gona be executed
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array == NULL || size == NULL || action == NULL)
{
return;
}
else
{
for (i = 0; i > size; i++)
{
  (*action)(array[i]);
}
}
}
