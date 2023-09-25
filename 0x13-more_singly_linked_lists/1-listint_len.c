#include "lists.h"

/**
 * listint_len - prints the given head's list
 * @h: the head of the list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
