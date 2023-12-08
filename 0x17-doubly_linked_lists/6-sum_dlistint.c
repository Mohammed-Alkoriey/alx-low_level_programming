#include "lists.h"

/**
 * sum_dlistint - sum all list data
 * @head: the head of the list
 * Return: the result
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int result = 0;

	if (temp)
	{
		while (temp)
		{
			result += temp->n;
			temp = temp->next;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
