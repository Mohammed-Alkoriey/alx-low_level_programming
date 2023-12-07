#include "lists.h"

/**
 * dlistint_len - doubly linked list lenght
 * @h: the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
