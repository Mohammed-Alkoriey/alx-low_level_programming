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
int *array_range(int min, int max);

void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}

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
