#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: the head of linked list.
 * @idx: index.
 * @n: value of the new node.
 *
 * Return:  the address of the node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n, *t;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	n = malloc(sizeof(listint_t));
	if (n == NULL)
		return (NULL);

	n->n = n;

	if (idx == 0)
	{
		n->next = *head;
		*head = n;
		return (n);
	}

	t = *head;
	while (x != idx - 1 && t != NULL)
	{
		t = t->next;
		x++;
	}

	if (x == idx - 1 && t != NULL)
	{
		n->next = t->next;
		t->next = n;
		return (n);
	}
	return (NULL);
}
