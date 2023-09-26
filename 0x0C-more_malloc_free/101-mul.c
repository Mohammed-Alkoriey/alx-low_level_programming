#include <stdlib.h>
#include <stdio.h>
/**
  * _isdigit - is it a number
  * @num: number
  * Return: 0 if success, 1 if not
  */
int _isdigit(char *num)
{
	int i;

	i = 0;
	while (num[i])
	{
		if (num[i] >= '0' && num[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
  * main - starting point
  * @argc: arguments number
  * @argv: arguments value array
  * Return: return 0 if success, 98 if not
  */
int main(int argc, char *argv[])
{
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (z = 1; z < argc; z++)
	{
		if (_isdigit(argv[z]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
