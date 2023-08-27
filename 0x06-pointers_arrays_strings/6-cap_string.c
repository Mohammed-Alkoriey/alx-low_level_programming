#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the string that's gonna be capitalized
 * Return: the the capitalized string
 */

char *cap_string(char *str)
{
int i = 1;

if (*(str + 0) >= 97 && *(str + 0) <= 122)
{
*(str + 0) = *(str + 0) - 32;
}
while (*(str + i))
{
if (*(str + i) == 32 || *(str + i) == 9 || *(str + i) == 44 || *(str + i) == 59 || *(str + i) == 46 || *(str + i) == 33 || *(str + i) == 63 || *(str + i) == 34 || *(str + i) == 40 || *(str + i) == 41 || *(str + i) == 123 || *(str + i) == 126 || *(str + i) == 10)
{
if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
{
*(str + i + 1) = *(str + i + 1) - 32;
i++;
}
else
{
i++;
continue;
}
}
else
{
i++;
continue;
}
}
return (str);
}
