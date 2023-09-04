#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup  - duplicates an string to another one
 * @str: the string that's gonna be duplicated
 * Return: null if fail and the string if success
 */

char *_strdup(char *str)
{
int len = 0;
int i = 0, n = 0;
char *newStr;
while (str[n])
{
len++;
n++;
}
if (str == NULL)
{
return (NULL);
}
else
{
newStr = malloc(sizeof(char) * len);
if (newStr == NULL)
{
return (NULL);
}
else
{
while (i < len)
{
newStr[i] = str[i];
i++;
}
}
}
return (newStr);
free(newStr);
}
