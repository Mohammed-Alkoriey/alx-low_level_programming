#include "lists.h"


/**
 * print_listint - function that prints all the elements of a list.
 * @h: the head of linked list
 * Return: number of all the elements.
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
