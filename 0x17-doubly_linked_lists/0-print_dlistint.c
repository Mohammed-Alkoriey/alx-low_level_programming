#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: the list
 * Return: nodes number
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
