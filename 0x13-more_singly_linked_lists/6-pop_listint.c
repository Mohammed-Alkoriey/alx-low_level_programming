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

	curr = *head;
	if (curr == NULL)
	{
		return (0);
	}

	x = curr->n;
	*head = curr->next;
	free(curr);
	return (x);
}
