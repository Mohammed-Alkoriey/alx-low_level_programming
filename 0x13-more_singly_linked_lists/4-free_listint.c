#include "lists.h"


/**
 * free_listint - free a list
 * @head: the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{

	listint_t *curr, *curr2;

	if (head == NULL)
	{
		return;
	}
	curr = head;
	while (curr)
	{
		curr2 = curr->next;
		free(curr);
		curr = curr2;
	}
}
