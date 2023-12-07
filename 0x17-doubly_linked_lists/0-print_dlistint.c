#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: the list
 * Return: nodes number
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	int length = sizeof(h) / sizeof(dlistint_t);
	const dlistint_t *temp = h;

	for (i = 0; i <= length + 1; i++)
	{
		printf("%u\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
