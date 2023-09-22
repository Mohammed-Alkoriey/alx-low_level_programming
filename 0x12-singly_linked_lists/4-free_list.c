#include "lists.h"


/**
 * free_list - free a list
 * @head: the head of the list
 * Return: nothing
 */

void free_list(list_t *head)
{

	list_t *curr, *curr2;

	if (head == NULL)
	{
		return;
	}
	curr = head;
	while (curr)
	{
		curr2 = curr->next;
		free(curr->str);
		free(curr);
		curr = curr2;
	}
}
