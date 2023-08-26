#include "main.h"

/**
 * *_strncat  - concatenates a string with a number of characters from the other string
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

for (m = 0; m < n; m++)
{
dest[x++] = src[m];
}
return (dest);
}
