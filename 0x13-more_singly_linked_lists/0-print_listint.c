#include "lists.h"

/**
 * print_listint - prints the given head's list
 * @h: the head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (h == NULL)
	{
		printf("(nil)");
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
