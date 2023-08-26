#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second one
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
int iResult = 0, iLen1, i;
while (s1[iLen1])
{
iLen1++;
}
for (i = 0; i < iLen1; i++)
{
if (s1[i] == s2[i])
{
iResult = 0;
}
else
{
iResult = s1[i] - s2[i];
break;
}
}
return (iResult);
}
