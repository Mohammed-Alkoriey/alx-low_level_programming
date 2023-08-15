#include"main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character that's gonna be checked
 * Return: if it's lowercase return 1 otherwise return 0
 */



int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
