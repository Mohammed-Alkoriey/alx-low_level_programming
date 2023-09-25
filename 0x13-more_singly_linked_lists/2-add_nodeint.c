#include "lists.h"


/**
 * add_nodeint - add node at the beginning of the list
 * @head: the list's head
 * @n: the node's value
 * Return: address of the new element if success and NULL if not
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x = malloc(sizeof(listint_t));

	if (head == NULL || x == NULL)
	{
		return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
