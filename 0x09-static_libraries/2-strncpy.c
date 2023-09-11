#include "main.h"

/**
 * *_strncpy - copies a number of characters to a string
 * @dest: the string that the source is gonna be copied to
 * @src: the source that's gonna be copied to the dest string
 * @n: the number of the characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int x, m;

x = 0;
while (dest[x])
x++;

for (m = 0; m < n && src[m] != '\0'; m++)
{
dest[m] = src[m];
}
while (m < n)
{
dest[m] = '\0';
m++;
}

return (dest);
}
