#include "lists.h"


/**
 * add_nodeint_end - addes node at the end of a list
 * @head: the head of the list
 * @n: the node's value
 * Return: address of the node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *curr;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;
	return (new);
}
