#include "main.h"
#include <string.h>
/**
 * _strlen - computes the length of a string
 * @s: the string that needs to be computed
 * Return: the sting's length
 */


int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; s++)
{
++i;
}
return (i);
}
