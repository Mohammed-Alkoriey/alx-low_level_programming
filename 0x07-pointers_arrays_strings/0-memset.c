#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: is the memory area
 * @b: is the constant byte
 * @n: is the number of bytes that's gonna be filled
 * Return: the new filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
