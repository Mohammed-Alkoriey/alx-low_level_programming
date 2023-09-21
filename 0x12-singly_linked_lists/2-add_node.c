#include "lists.h"


/**
 * list_len - prints the length of a  given head's list
 * @h: the head of the list
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x = malloc(sizeof(list_t));
	if (head == NULL || x == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		x->str = strdup(str);
		if (x->str == NULL)
		{
			free(x);
			return (NULL);
		}
		x->len = _strlen(x->str);
	}
	x->next = *head;
	*head = x;
	return (x);
}
