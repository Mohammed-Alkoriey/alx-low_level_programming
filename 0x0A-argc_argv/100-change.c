#include "main.h"
/**
 * main - starting point
 * @argc: argument number
 * @argv: argument list
 * Return: 0 in success an 1 if not
 */

int main(int argc, char *argv[])
{
	int  x, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; x >= 0;)
	{
		if (x >= 25)
			x -= 25;

		else if (x >= 10)
			x -= 10;

		else if (x >= 5)
			x -= 5;

		else if (x >= 2)
			x -= 2;

		else if (x >= 1)
			x -= 1;
		else
			break;
		i += 1;
	}
	printf("%d\n", i);
	return (0);
}
