#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: the destination
 * @src: the source
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src);
{
int i;
char *d = &dest;
for (i = 0; *src != '\0'; src++)
{
*d[i] = *src;
i++;
}
*d += '/0';
return (*d);
}
