#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second one
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
int iResult = 0, iLen, iLen1, iLen2, i;
iLen1 = sizeof(s1) / sizeof(*s1);
iLen2 = sizeof(s2) / sizeof(*s2);
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
