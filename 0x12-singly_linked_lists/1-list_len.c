#include "lists.h"


/**
 * list_len - prints the length of a  given head's list
 * @h: the head of the list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
