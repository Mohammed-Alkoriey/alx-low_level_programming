#include "main.h"

/**
 * *_strcat  - concatenates two strings
 * @dest: the string that the source is gonna be appended to
 * @src: the source that's gonna be appended to the dest string
 * Return: dest after appending
 */

char *_strcat(char *dest, char *src)
{
int len, x = 0, m = 0;
len = sizeof(src) / sizeof *(src + 1);
for (int i = 0; *(dest + i) != '\0'; i++)
{
x++;
}
for (int l = x; l < len + x; l++)
{
*(dest + l) = *(src + m);
m++;
}
return (dest);
}
