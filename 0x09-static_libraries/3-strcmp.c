#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second one
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
int iResult = 0, iLen = 0, iLen1 = 0, iLen2 = 0, i;
while (s1[iLen1])
{
iLen1++;
}
while (s2[iLen2])
{
iLen2++;
}
if (iLen1 > iLen2)
{
iLen = iLen1;
}
else if (iLen2 > iLen1)
{
iLen = iLen2;
}
else
{
iLen = iLen1;
}
for (i = 0; i < iLen; i++)
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
