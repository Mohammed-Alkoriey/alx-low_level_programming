#include "lists.h"

/**
 * get_dnodeint_at_index - get a node by it's index
 * @head: the list head
 * @index: the index
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (i != index)
	{
		temp = temp->next;
		i++;
	}
	if (i == index && temp)
	{
		return (temp);
	}
	return (NULL);
}
