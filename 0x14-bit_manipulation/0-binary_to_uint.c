#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: binary number
 * Return: the  nummber
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, len = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		dec = dec * 2 + (b[len++] - '0');
	}
	return (dec);
}
