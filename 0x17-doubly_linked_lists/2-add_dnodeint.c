#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: the head of the list
 * @n: the data of the new node
 * Return: address of the new element or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
