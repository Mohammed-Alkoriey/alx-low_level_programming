#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters
 * Return: null if fail and the string if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int len1 = 0, len2 = 0, i = 0, x = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
if (n >= len2)
{
n = len2;
}
str = malloc(sizeof(char) * (len1 + len2 + 1));
for (i = 0; i < len1; i++)
{
str[i] = s1[i];
}
for (i = len1; i < (len1 + n); i++)
{
str[i] = s2[x];
x++;
}
str[len1 + len2] = '\0';
return (str);
}
