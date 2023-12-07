#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;
	dlistint_t *coming_node;

	if (head)
	{
		curr_node = head;
		coming_node = head->next;
		while (coming_node)
		{
			free(curr_node);
			curr_node = coming_node;
			coming_node = coming_node->next;
		}
		free(curr_node);
	}
}
