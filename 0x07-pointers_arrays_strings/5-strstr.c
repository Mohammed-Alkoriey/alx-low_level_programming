#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the character that we're loking for
 * Return: a pointer to the byte in s that matches one in accept
 */
char *_strstr(char *haystack, char *needle);

int main(void)
{
    char *s = "hello, world";
    char *f = "m";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}



char *_strstr(char *haystack, char *needle)
{
  int count = 0, a = 0, k, j = 0, l, i = 0;
  char *p;
  
  while (needle[count] != '\0')
    {
      count++;
    }
  while (haystack[i] != '\0')
    {
      i++;
    }
  if (count == 0)
    return (haystack);
  while (haystack[j] != '\0')
    {
      if (haystack[j] == needle[0])
	{
	  p = &haystack[j];
	  l = j;
	  a = 0;
	  for (k = 0; k < count; k++)
	    {
	      if (haystack[l] == needle[k])
		a++;
	      l++;
	    }
	}
      if (a == count)
	return (p);
      j++;
    }
  return ('\0');
}
