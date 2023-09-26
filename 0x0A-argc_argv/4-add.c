#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - starting point of the program
 *
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int iAdd = 0, i;
	unsigned long int x;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			for (x = 0; x < (int)strlen(argv[i]); x++)
			{
				if (isdigit(argv[i][x]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			iAdd += atoi(argv[i]);
		}
		printf("%d\n", iAdd);
	}
	return (0);
}
