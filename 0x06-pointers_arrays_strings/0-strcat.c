#include "main.h"

/**
 * *_strcat  - concatenates two strings
 * @dest: the string that the source is gonna be appended to
 * @src: the source that's gonna be appended to the dest string
 * Return: dest after appending
 */

char *_strcat(char *dest, char *src)
{
int x = 0, m = 0;
for (int i = 0; *(dest + i) != '\0'; i++)
{
x++;
}
for (int m = 0; src[m]; m++)
{
dest[x] = src[m];
x++;
}
return (dest);
}
