#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the area that we're copying to
 * @src: the area that we're copying from
 * @n: is the number of bytes that's gonna be copied
 * Return: the new modified memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(dest + i) = src[i];
i++;
}
return (dest);
}
