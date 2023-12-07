#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: the head of the list
 * @n: the data of the new node
 * Return: address of the new element or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (temp)
	{
		while (temp->next)
		{
			temp=temp->next;
		}
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
