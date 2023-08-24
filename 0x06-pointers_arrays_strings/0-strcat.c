#include "main.h"

/**
 * *_strcat  - concatenates two strings
 * @dest: the string that the source is gonna be appended to
 * @src: the source that's gonna be appended to the dest string
 * Return: dest after appending
 */

char *_strcat(char *dest, char *src)
{
int x, m;

x = 0
while (dest[x})
x++;
for (m = 0; src[m]; m++)
{
dest[x] = src[m];
x++;
}
return (dest);
}
