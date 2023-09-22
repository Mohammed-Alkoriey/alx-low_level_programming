#include "lists.h"


/**
 * free_list - free a list
 * @head: the head of the list
 * Return: nothing
 */

void free_list(list_t *head)
{

	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
