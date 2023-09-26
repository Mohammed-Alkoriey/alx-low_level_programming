#include "main.h"

/**
 * con - Concatenate string
 * @res: the reciving string
 * @str: the added string
 * Return: pointer
 */
char *con(char *res, char *str)
{
	int x = 0, i;

	while (res[x] != '\0')
	{
		x++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		res[x] = str[i];
		x++;
	}
	return (res);
}
/**
 * len - calculate the length of a string
 * @str: the string
 * Return: length of the string
 */
int len(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * argstostr - concatenates all the arguments
 * @ac: Arguments number
 * @av: Argument values
 * Return: new string if success or NULL if not
 */

char *argstostr(int ac, char **av)
{
	int i, s;
	char *newStr;

	s = 1;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac && av[i]; i++)
	{
		s += len(av[i]);
	}
	newStr = malloc((s * sizeof(char)) + ac);
	for (i = 0; i < ac && av[i]; i++)
	{
		newStr = con(newStr, av[i]);
		newStr = con(newStr, "\n");
	}
	if (newStr == NULL)
		return (NULL);
	return (newStr);
}
