#include "lists.h"


/**
 * pop_listint - remove the head
 * @head: the list's head
 * Return: value of the new head if success and 0 if not
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	curr = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(curr);
	return (x);
}
