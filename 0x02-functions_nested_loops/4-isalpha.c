#include"main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: the character that's gonna be checked
 * Return: if it's lowercase return 1 otherwise return 0
 */



int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
