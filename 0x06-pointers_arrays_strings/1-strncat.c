#include "main.h"

/**
 * *_strncat - concatenates a number of characters to a string
 * @dest: the string that the source is gonna be appended to
 * @src: the source that's gonna be appended to the dest string
 * @n: the number of the characters
 * Return: dest after appending
 */


char *_strncat(char *dest, char *src, int n)
{
int x, m;

x = 0;
while (dest[x])
x++;

for (m = 0; m < n && src[m] != '\0'; m++)
{
dest[x + m] = src[m];
}
dest[x + m] = '\0';

return (dest);
}
