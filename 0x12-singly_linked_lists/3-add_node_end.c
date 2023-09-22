#include "lists.h"


/**
 * add_node_end - addes node at the end of a list
 * @head: the head of the list
 * @str: the node's value
 * Return: address of the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *curr;

	new->str = strdup(str);
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
