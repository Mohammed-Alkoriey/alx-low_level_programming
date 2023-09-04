#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat  - concatenates 2 strings
 * @s1: the first  string
 * @s2: the second string
 * Return: null if fail and the string if success
 */

char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0;
int i1 = 0, i2 = 0, n1 = 0, n2 = 0;
char *newStr;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
else
{
while (s1[len1])
len1++;
while (s2[len2])
len2++;
newStr = malloc(sizeof(char) * (len1 + len2));
if (newStr == NULL)
{
return (NULL);
}
else
{
while (i1 < len1)
{
newStr[i1] = s1[i1];
i1++;
}
while (i2 < len2)
{
newStr[len1] = s2[i2];
i2++;
len1++;
}
}
}
return (newStr);
free(newStr);
}
