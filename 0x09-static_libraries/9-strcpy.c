#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: the destination
 * @src: the source
 * Return: pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; *src != '\0'; src++)
{
dest[i] = *src;
i++;
}
dest[i] = *src;
return (dest);
}
