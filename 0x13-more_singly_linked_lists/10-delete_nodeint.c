#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: head of a list
 * @index: index
 * Return: 1 if success and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *p, *n;

	p = *head;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && p != NULL; x++)
		{
			p = p->next;
		}
	}

	if (p == NULL || (p->next == NULL && index != 0))
	{
		return (-1);
	}

	n = p->next;

	if (index != 0)
	{
		p->next = n->next;
		free(n);
	}
	else
	{
		free(p);
		*head = n;
	}

	return (1);
}
