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


/**
 * free_listint2 - free a list
 * @head: the head of the list
 * Return: nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int len = listint_len(head), x = 0;
	listint_t *curr;

	if (index - 1 > len)
	{
		return (NULL);
	}
	curr = head;
	while (index > x)
	{
		curr = curr->next;
		x++;
	}
	return (curr);
}
