#include "lists.h"


/**
 * _strlen - computes the length of a string
 * @s: the string that needs to be computed
 * Return: the sting's length
 */


int _strlen(char *s)
{
	int i;
	for (i = 0; *s != '\0'; s++)
	{
		++i;
	}
	return (i);
}


/**
 * print_list - prints the given head's list
 * @h: the head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", _strlen(h->str), h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
