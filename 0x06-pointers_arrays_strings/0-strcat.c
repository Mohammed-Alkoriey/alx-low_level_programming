#include "main.h"

/**
 * *_strcat  - concatenates two strings
 * @dest: the string that the source is gonna be appended to
 * @src: the source that's gonna be appended to the dest string
 * Return: dest after appending
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2]; c2++)
dest[c++] = src[c2];
return (dest);
}
